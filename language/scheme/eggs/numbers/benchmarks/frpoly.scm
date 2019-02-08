;; FRPOLY -- Benchmark from Berkeley based on polynomial arithmetic.
;; Originally writen in Franz Lisp by Richard Fateman.
;;
;; Taken from gabriel.lisp in the cl-bench suite from CMUCL
;;
;; For a historical review of this benchmark (plus explanation), see
;; "FRPOLY: A Benchmark Revisited" by Richard J. Fateman
;; [http://www.cs.berkeley.edu/~fateman/papers/frpoly.pdf]
;;
;; This benchmark also does a lot of stuff itself, so it is not a pure
;; check of numeric operator performance.  You'll have to compile it
;; to get some semi-useful readings.  It's a good overall benchmark.

(cond-expand
  ((and chicken (not full-numeric-tower)) (use numbers))
  (else #f))

;; Using SRFI-55 to attempt to make this at least slightly portable
;; In Scheme48, comment this out and type ,open srfi-39 (or use a package)
(cond-expand
 (gambit #t)
 (else (require-extension (srfi 39))))

;; Trivial compat code
(define (print . args) (for-each display args) (newline))

;; Other compat stuff:
(define-syntax dotimes
  (syntax-rules ()
    ((dotimes (var times) body? ...)
     (do ((var 0 (+ var 1)))
         ((= var times))
       body? ...))))

;; "lispy" versions of c{a,d}*r; these ignore errors on '() and just return '()
(define lcar (lambda (x) (if (null? x) x (car x))))
(define lcdr (lambda (x) (if (null? x) x (cdr x))))
(define lcadr (lambda (x) (lcar (lcdr x))))
(define lcddr (lambda (x) (lcdr (lcdr x))))
(define lcaddr (lambda (x) (lcar (lcddr x))))
(define lcdddr (lambda (x) (lcdr (lcddr x))))

(define *frpoly-v* (make-parameter '()))
(define *x* (make-parameter '()))
(define u* (make-parameter '()))

;; dummy definition -- doesn't get called at runtime
(define-syntax pdiffer1 (syntax-rules () ((pdiffer1 a b) (cons a b))))

(define-syntax get-order
  (syntax-rules ()
    ((get-order v) (case v ((x) 1) ((y) 2) ((z) 3)))))

(define-syntax pointer>?
  (syntax-rules ()
    ((pointer>? x y) (> (get-order x) (get-order y)))))

(define-syntax pcoef? (syntax-rules () ((pcoef? e) (not (pair? e)))))
(define-syntax pzero?
  (syntax-rules ()
    ((pzero? x)
     (if (number? x)
         ;; Possible second evaluation seems intentional. Yes. Don't ask..
         (zero? x)
         #f))))
(define-syntax pzero (syntax-rules () ((pzero) 0)))
(define-syntax cplus (syntax-rules () ((cplus x y) (+ x y))))
(define-syntax ctimes (syntax-rules () ((ctimes x y) (* x y))))

(define (pcoefadd e c x)
  (if (pzero? c)
      x
      (cons e (cons c x))))

(define (pcplus c p)
  (if (pcoef? p)
      (cplus p c)
      (psimp (lcar p) (pcplus1 c (lcdr p)))))

(define (pcplus1 c x)
  (cond ((null? x)
	 (if (pzero? c)
	     '()
	     (cons 0 (cons c '()))))
	((pzero? (lcar x))
	 (pcoefadd 0 (pplus c (lcadr x)) '()))
	(else
	 (cons (lcar x) (cons (lcadr x) (pcplus1 c (lcddr x)))))))

(define (pctimes c p)
  (if (pcoef? p)
      (ctimes c p)
      (psimp (lcar p) (pctimes1 c (lcdr p)))))

(define (pctimes1 c x)
  (if (null? x)
      '()
      (pcoefadd (lcar x)
		(ptimes c (lcadr x))
		(pctimes1 c (lcddr x)))))

(define (pplus x y)
  (cond ((pcoef? x)
	 (pcplus x y))
	((pcoef? y)
	 (pcplus y x))
	((eq? (lcar x) (lcar y))
	 (psimp (lcar x) (pplus1 (lcdr y) (lcdr x))))
	((pointer>? (lcar x) (lcar y))
	 (psimp (lcar x) (pcplus1 y (lcdr x))))
	(else
	 (psimp (lcar y) (pcplus1 x (lcdr y))))))

(define (pplus1 x y)
  (cond ((null? x) y)
	((null? y) x)
	((= (lcar x) (lcar y))
	 (pcoefadd (lcar x)
		   (pplus (lcadr x) (lcadr y))
		   (pplus1 (lcddr x) (lcddr y))))
	((> (lcar x) (lcar y))
	 (cons (lcar x) (cons (lcadr x) (pplus1 (lcddr x) y))))
	(else (cons (lcar y) (cons (lcadr y) (pplus1 x (lcddr y)))))))

(define (psimp var x)
  (cond ((null? x) 0)
	((symbol? x) x)
	((zero? (lcar x))
	 (lcadr x))
	(else
	 (cons var x))))

(define (ptimes x y)
  (cond ((or (pzero? x) (pzero? y))
	 (pzero))
	((pcoef? x)
	 (pctimes x y))
	((pcoef? y)
	 (pctimes y x))
	((eq? (lcar x) (lcar y))
	 (psimp (lcar x) (ptimes1 (lcdr x) (lcdr y))))
	((pointer>? (lcar x) (lcar y))
	 (psimp (lcar x) (pctimes1 y (lcdr x))))
	(else
	 (psimp (lcar y) (pctimes1 x (lcdr y))))))

(define (ptimes1 x y)
  ;; Not sure if this stack is needed, but it mimicks the CL code "exactly"(?)
  (parameterize ((*x* x))
    (parameterize ((u* (ptimes2 y)))
      (parameterize ((*frpoly-v* (u*)))
        (let loop ()
          (*x* (lcddr (*x*)))
          (if (null? (*x*))
              (u*)
              (begin
                (ptimes3 y)
                (loop))))))))

(define (ptimes2 y)
  (if (null? y)
      '()
      (pcoefadd (+ (lcar (*x*)) (lcar y))
		(ptimes (lcadr (*x*)) (lcadr y))
		(ptimes2 (lcddr y)))))

;; Don't blame me for this monstrosity, I just found it like this :)
(define (ptimes3 y)
  (let ((e '())
        (u '())
        (c '()))
    (call-with-current-continuation
     (lambda (return)
       (letrec ((a1 (lambda ()
                      (if (null? y)
                          (return '()))
                      (set! e (+ (lcar (*x*)) (lcar y)))
                      (set! c  (ptimes (lcadr y) (lcadr (*x*))))
                      (cond ((pzero? c)
                             (set! y (lcddr y))
                             (a1))
                            ((or (null? (*frpoly-v*)) (> e (lcar (*frpoly-v*))))
                             (*frpoly-v* (pplus1 (u*) (list e c)))
                             (u* (*frpoly-v*))
                             (set! y (lcddr y))
                             (a1))
                            ((= e (lcar (*frpoly-v*)))
                             (set! c (pplus c (lcadr (*frpoly-v*))))
                             (if (pzero? c)              ; never true, evidently
                                 (begin
                                   (*frpoly-v*
                                    (pdiffer1 (u*) (list (lcar (*frpoly-v*))
                                                         (lcadr (*frpoly-v*)))))
                                   (u* (*frpoly-v*)))
                                 (let ((x (lcdr (*frpoly-v*))))
                                   (set-car! x c)))
                             (set! y (lcddr y))
                             (a1)))
                      (a)))
                (a (lambda ()
                     (cond ((and (not (null? (lcddr (*frpoly-v*))))
                                 (> (lcaddr (*frpoly-v*)) e))
                            (*frpoly-v* (lcddr (*frpoly-v*)))
                            (a)))
                     (set! u (lcdr (*frpoly-v*)))
                     (b)))
                (b (lambda ()
                     (if (or (null? (lcdr u)) (< (lcadr u) e))
                         (set-cdr! u (cons e (cons c (lcdr u)))) (ef))
                     ;; This is tricky: it (apparently?) needs to get
                     ;; evaluated twice. So we put it in a let because
                     ;; Scheme's set! doesn't return the value just set
                     (cond ((pzero? (let ((tmp (pplus (lcaddr u) c)))
                                      (set! c tmp)
                                      tmp))
                            (set-cdr! u (lcdddr u))
                            (d))
                           (else (let ((x (lcddr u)))
                                   (set-car! x c))))
                     (ef)))
                (ef (lambda () ;; e was already taken :)
                      (set! u (lcddr u))
                      (d)))
                (d (lambda ()
                     (set! y (lcddr y))
                     (if (null? y)
                         (return '()))
                     (set! e (+ (lcar (*x*)) (lcar y)))
                     (set! c (ptimes (lcadr y) (lcadr (*x*))))
                     (cf)))
                (cf (lambda () ;; Same with c
                      (cond ((and (not (null? (lcdr u))) (> (lcadr u) e))
                             (set! u (lcddr u))
                             (cf)))
                      (b))))
         ;; It is by will alone I set my mind in motion...
         (a1))))))

(define (pexptsq p n)
  (do ((n (quotient n 2) (quotient n 2))
       (s (if (odd? n) p 1)))
      ((zero? n) s)
    (set! p (ptimes p p))
    (if (odd? n) (set! s (ptimes s p)))))


;; r = x+y+z+1
;; r2 = 100000 * r
;; r3 = r with floating point coefficients
(define *frpoly-r*  (pplus '(x 1 1 0 1) (pplus '(y 1 1) '(z 1 1))))
(define *frpoly-r2* (ptimes *frpoly-r* 100000))
(define *frpoly-r3* (ptimes *frpoly-r* 1.0))

(define (run-frpoly/fixnum)
  (for-each (lambda (exp)
              (pexptsq *frpoly-r* exp))
            '(2 5 10 15)))

(define (run-frpoly/bignum)
  (for-each (lambda (exp)
              (pexptsq *frpoly-r2* exp))
            '(2 5 10 15)))

(define (run-frpoly/float)
  (for-each (lambda (exp)
              (pexptsq *frpoly-r3* exp))
            '(2 5 10 15)))

;; Yes, time isn't portable either. But how else to get some decent measures?
(print "frpoly for fixnums:")
(time (dotimes (_ 100) (run-frpoly/fixnum)))
(print "-----------------------------")
(print "frpoly for bignums:")
(time (dotimes (_ 30) (run-frpoly/bignum)))
(print "-----------------------------")
(print "frpoly for floats:")
(time (dotimes (_ 100) (run-frpoly/float)))


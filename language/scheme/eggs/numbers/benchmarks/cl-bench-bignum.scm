;;; cl-bench-bignum.scm (ported from bignum.lisp, from CMUCL's cl-bench)
;;;   -- bignum operations from Bruno Haible
;;
;; Time-stamp: <2004-01-09 emarsden>
;;

;; code from Bruno Haible <haible@ilog.fr>
;;
;; A. Elementary integer computations:
;;    The tests are run with N = 100, 1000, 10000, 100000 decimal digits.
;;    Precompute *x1* = quotient((sqrt(5)+1)/2 * 10^(2N))
;;               *x2* = round(sqrt(3) * 10^N)
;;               *x3* = 10^N+1
;;    Then time the following operations:
;;    1. Multiplication *x1* * *x2*,
;;    2. Division (with remainder) *x1* / *x2*,
;;    3. integer_sqrt (*x3*),
;;    4. gcd (*x1*, *x2*),
;;
;; B. (from Pari)
;;       u=1;v=1;p=1;q=1;for(k=1..1000){w=u+v;u=v;v=w;p=p*w;q=lcm(q,w);}

(cond-expand
 ((and chicken (not full-numeric-tower)) (use numbers))
 (else #f))

(cond-expand
 (gambit (define isqrt integer-sqrt))
 (else (define isqrt exact-integer-sqrt)))

(cond-expand
 (gambit
     ;; Nasty workaround to avoid error on ##-prefix in CHICKEN (even though
     ;; it's cond-expanded, this doesn't work - the reader trips on it).
     (eval (with-input-from-string
             "(define (divmod x y) (let ((q-r (##exact-int.div x y))) (values (car q-r) (cdr q-r))))"
             read)))
 (chicken (define divmod quotient&remainder))
 (else (define (divmod x y) (values (quotient x y) (remainder x y)))))

(define *x1* #f)
(define *x2* #f)
(define *x3* #f)
(define *y* #f)
(define *z* #f)

;; Compat
(define-syntax dotimes
  (syntax-rules ()
    ((dotimes (var times) body? ...)
     (do ((var 0 (+ var 1)))
         ((= var times))
       body? ...))))


(define pi 3141592653589793/1000000000000000)

(define (truncate-1 x y) (truncate (/ x y)))

(define (truncate-2 x y)
  (let* ((d (/ x y))
         (q (truncate d)))
    (values q (- x (* q y)))))

;; Not needed for Chicken, but useful for comparison with other implementations
(define (assert x)
  (if (not x) (error "assertion failed") #f))

;; The new numbers code can do this natively... (floor in CL)
;;(define (divmod x y) (values (quotient x y) (remainder x y)))
;;(define divmod quotient&remainder)

(define (fuzzy-eql a b)
  (< (abs (/ (- a b) b)) 1/10000))

(define (elementary-benchmark N repeat)
  (set! *x1* (quotient (+ (isqrt (* 5 (expt 10 (* 4 N)))) (expt 10 (* 2 N))) 2))
  (set! *x2* (isqrt (* 3 (expt 10 (* 2 N)))))
  (set! *x3* (+ (expt 10 N) 1))
  (display "N = ") (display N) (display " Multiplication *x1* * *x2*, divide times by ") (display repeat) (newline)
  (time (dotimes (count 3)
    (dotimes (_ repeat)
      (set! *y* (* *x1* *x2*)))))
  (display "N = ") (display N) (display " Division (with remainder) *x1* / *x2*, divide times by ") (display repeat) (newline)
  (time (dotimes (count 3)
	   (dotimes (_ repeat)
		    (call-with-values
			(lambda ()
			  (divmod *x1* *x2*))
		      (lambda (y z)
			(set! *y*  y)
			(set! *z* z))))))
  (display "N = ") (display N) (display " integer_sqrt(*x3*), divide times by ") (display repeat) (newline)
  (time (dotimes (count 3)
    (dotimes (_ repeat)
      (set! *y* (isqrt *x3*)))))
  (display "N = ") (display N) (display " gcd(*x1*,*x2*), divide times by ") (display repeat) (newline)
  (time (dotimes (count 3)
    (dotimes (_ repeat)
      (set! *y* (gcd *x1* *x2*))))))

(define (run-elem-100-1000)
  (elementary-benchmark 100 1000))

(define (run-elem-1000-100)
  (elementary-benchmark 1000 100))

(define (run-elem-10000-1)
  (elementary-benchmark 10000 1))

(define (pari-benchmark N repeat)
  (dotimes (count 3)
    (dotimes (_ repeat)
      (let ((u 1) (v 1) (p 1) (q 1))
        (do ((k 1 (+ k 1)))
            ((> k N) (set! *y* p) (set! *z* q))
          (let ((w (+ u v)))
            ;; (shiftf u v w) WTF
            (set! u v)
            (set! v w)
            (set! p (* p w))
            (set! q (lcm q w))))))))

(define (run-pari-100-10)
  (pari-benchmark 100 10))

(define (run-pari-200-5)
  (pari-benchmark 200 5))

(define (run-pari-1000-1)
  (pari-benchmark 1000 1))


;; calculating pi using ratios
(define (compute-pi-decimal n)
  (let ((p 0)
        (r #f)
        (dpi 0))
    (dotimes (i n)
      (set! p (+ p (/ (- (/ 4 (+ 1 (* 8 i)))
                         (/ 2 (+ 4 (* 8 i)))
                         (/ 1 (+ 5 (* 8 i)))
                         (/ 1 (+ 6 (* 8 i))))
                      (expt 16 i)))))
    (dotimes (i n)
	     (call-with-values
		 (lambda ()
		   (truncate-2 p 10))
	       (lambda (arg-r arg-p)
		 (set! r arg-r)
		 (set! p arg-p)))
      (set! dpi (+ (* 10 dpi) r))
      (set! p (* p 10)))
    dpi))

(define (run-pi-decimal/small)
  (assert (fuzzy-eql pi (/ (compute-pi-decimal 200) (expt 10 198)))))

(define (run-pi-decimal/big)
  (assert (fuzzy-eql pi (/ (compute-pi-decimal 1000) (expt 10 998)))))


(define (pi-atan k n)
  (do ((a 0) (w (* n k)) (k2 (* k k)) (i -1))
       ((= w 0) a)
    (set! w (truncate-1 w k2))
    (set! i (+ i 2))
    (set! a (+ a (truncate-1 w i)))
    (set! w (truncate-1 w k2))
    (set! i (+ i 2))
    (set! a (- a (truncate-1 w i)))))

(define (calc-pi-atan digits)
  (let* ((n digits)
         (m (+ n 3))
         (tenpower (expt 10 m)))
    (truncate-1 (- (+ (pi-atan 18 (* tenpower 48))
                              (pi-atan 57 (* tenpower 32)))
                           (pi-atan 239 (* tenpower 20)))
                      1000)))

(define (run-pi-atan)
  (let ((api (calc-pi-atan 1000)))
    (assert (fuzzy-eql pi (/ api (expt 10 1000))))))

(display "run-elem-100-1000:\n")
(run-elem-100-1000)
(display "-----------------------------\n")
(display "run-elem-1000-100:\n")
(run-elem-1000-100)
(display "-----------------------------\n")
(display "run-elem-10000-1:\n")
(run-elem-10000-1)
(display "-----------------------------\n")
(display "run-pari-100-10:\n")
(time (run-pari-100-10))
(display "-----------------------------\n")
(display "run-pari-200-5:\n")
(time (run-pari-200-5))
(display "-----------------------------\n")
(display "run-pi-decimal/small:\n")
(time (dotimes (_ 5) (run-pi-decimal/small)))
(display "-----------------------------\n")
(display "run-pi-decimal/big:\n")
(time (dotimes (_ 2) (run-pi-decimal/big)))
(display "-----------------------------\n")
(display "run-pi-pi-atan:\n")
(time (dotimes (_ 200) (run-pi-atan)))


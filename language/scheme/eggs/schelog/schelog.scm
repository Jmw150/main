;;;; support.scm
;
; by Dorai Sitaram
; improved by Brad Lucier

;    This library is free software; you can redistribute it and/or
;     modify it under the terms of the GNU Lesser General Public
;     License as published by the Free Software Foundation; either
;     version 2 of the License, or (at your option) any later version.

;     This library is distributed in the hope that it will be useful,
;     but WITHOUT ANY WARRANTY; without even the implied warranty of
;     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
;     Lesser General Public License for more details.

;     You should have received a copy of the GNU Lesser General Public
;     License along with this library; if not, write to the Free Software
;     Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307  USA


;;; If the only types of numbers that schelog:unify is asked
;;; to unify are small integers, then uncommenting the next 
;;; declaration will speed unify tremendously

;(declare (fixnum))
;Gambit version of
;schelog.scm
;Schelog
;An embedding of Prolog in Scheme
;Dorai Sitaram
;1989, revised Feb. 1993, Mar. 1997

;;; This version of Schelog has been heavily hacked by Bradley Lucier
;;; (lucier@math.purdue.edu); do *not* report any problems you have with it 
;;; to Dorai Sitaram unless you can verify the problem
;;; with the version from his web page,
;;; http://www.cs.rice.edu/~dorai

(define (schelog:vector->list v)
  (let loop ((i (fx- (vector-length v) 1)) (result '()))
    (if (fx< i 0)
	result
	(loop (fx- i 1) (cons (vector-ref v i) result)))))

(define (schelog:assq x l)
  (and (not (null? l))
       (or (and (eq? x (car (car l)))
		(car l))
	   (schelog:assq x (cdr l)))))

(define (schelog:occurs? var exp)
  (cond ((eq? var exp) #t)
	((pair? exp)
	 (if (schelog:half-ref? exp)
	     (schelog:occurs? var (schelog:deref exp))
	     (or (schelog:occurs? var (car exp)) (schelog:occurs? var (cdr exp)))))
	((vector? exp)
	 (let inner ((i (fx- (vector-length exp) 1)))
	   (and (fx>= i 0)
		(or (schelog:occurs? var (vector-ref exp i))
		    (inner (fx- i 1))))))
	(else
	 #f)))

(define schelog:use-occurs-check #f)

;logic variables and their manipulation

(define schelog:*ref* "ref")

(define schelog:*unbound* '_)

(define schelog:make-ref
  (lambda arg
    (cons schelog:*ref* (if (pair? arg) (car arg) '_)) ) )

(define (_)
  (cons schelog:*ref* '_))

(define schelog:ref?
  (lambda (r)
    (and (pair? r)
	 (eq? (car r) schelog:*ref*))))

(define (schelog:half-ref? r)
  (eq? (car r) schelog:*ref*))
     
(define schelog:deref
  (lambda (r)
    (cdr r)))

(define schelog:set-ref!
  (lambda (r v)
    (set-cdr! r v)))

(define schelog:unbound-ref?
  (lambda (r)
    (eq? (schelog:deref r) schelog:*unbound*)))

(define schelog:unbind-ref!
  (lambda (r)
    (set-cdr! r schelog:*unbound*)))

;frozen logic vars

(define schelog:*frozen* "frozen")

(define schelog:freeze-ref
  (lambda (r)
    (schelog:make-ref (cons schelog:*frozen* r))))

(define schelog:thaw-frozen-ref
  (lambda (r)
    (cdr (schelog:deref r))))

(define schelog:frozen-ref?
  (lambda (r)
    (let ((r2 (schelog:deref r)))
      (and (pair? r2)
	   (eq? (car r2) schelog:*frozen*)))))

;deref a structure completely (except the frozen ones, i.e.)

(define schelog:deref*
  (lambda (s)
    (cond ((pair? s)
	   (let ((s1 (car s))
		 (s2 (cdr s)))
	     (if (eq? s1 schelog:*ref*)
		 (if (and (pair? s2)
			  (eq? (car s2) schelog:*frozen*))
		     s
		     (schelog:deref* s2))
		 (cons (schelog:deref* s1)
		       (schelog:deref* s2)))))
	  ((vector? s)
	   (let ((n (vector-length s)))
	     (let ((result (make-vector n)))
	       (do ((i (fx- n 1) (fx- i 1)))
		   ((fx< i 0) result)
		 (vector-set! result i (schelog:deref* (vector-ref s i)))))))
	  (else s))))

;%let introduces new logic variables

(define-syntax %let
  (syntax-rules ()
    ((%let (x ...) . e)
      (let ((x (_)) ...) . e))))


;the unify predicate

(define schelog:unify
  (lambda (t1 t2)
    (lambda (fk)
      (letrec
	  ((cleanup-n-fail
	    (lambda (t1 t2 fk s)
	      (let loop ((t1 t1) (t2 t2) (fk fk) (s s))
		(cond ((null? s)
		       (fk 'fail))
		      (else
		       (schelog:unbind-ref! (car s))
		       (loop t1 t2 fk (cdr s)))))))
	   (unify1
            (lambda (t1 t2 fk s)
	      (define (unify-first-ref t1 t2 fk s)
		(cond ((schelog:unbound-ref? t1)
		       (cond ((and schelog:use-occurs-check
				   (schelog:occurs? t1 t2))
			      (cleanup-n-fail t1 t2 fk s))
			     (else
			      (schelog:set-ref! t1 t2)
			      (cons t1 s))))
		      ((schelog:frozen-ref? t1)
		       (cond ((schelog:ref? t2)
			      (cond ((schelog:unbound-ref? t2)
				     (cond ((and schelog:use-occurs-check
						 (schelog:occurs? t2 t1))
					    (cleanup-n-fail t1 t2 fk s))
					   (else
					    (schelog:set-ref! t2 t1)
					    (cons t2 s))))
				    ((schelog:frozen-ref? t2)
				     (cleanup-n-fail t1 t2 fk s))
				    (else
				     (unify1 t1 (schelog:deref t2) fk s))))
			     (else (cleanup-n-fail t1 t2 fk s))))
		      (else (unify1 (schelog:deref t1) t2 fk s))))
	      
              (cond ((eqv? t1 t2) s)
		    ((pair? t1)
		     (if (schelog:half-ref? t1)
			 (unify-first-ref t1 t2 fk s)
			 (if (pair? t2)
			     (if (schelog:half-ref? t2)
				 (unify-first-ref t2 t1 fk s)
				 (unify1 (cdr t1) (cdr t2) fk
					 (unify1 (car t1) (car t2) fk s)))
			     (cleanup-n-fail t1 t2 fk s))))
		    ((pair? t2)
		     (if (schelog:half-ref? t2) 
			 (unify-first-ref t2 t1 fk s)
			 (cleanup-n-fail t1 t2 fk s)))
		    ((and (string? t1) (string? t2))
		     (if (string=? t1 t2) s
			 (cleanup-n-fail t1 t2 fk s)))
		    ((and (vector? t1) 
			  (vector? t2)
			  (= (vector-length t1) (vector-length t2)))
		     (unify1 (schelog:vector->list t1)
			     (schelog:vector->list t2)
			     fk
			     s))
		    (else
		     (cleanup-n-fail t1 t2 fk s))))))
	(let ((s (unify1 t1 t2 fk '())))
	  (lambda (d)
	    (cleanup-n-fail t1 t2 fk s)))))))

(define %= schelog:unify)

;disjunction

(define-syntax %or
  (er-macro-transformer
   (lambda (x r c)
     (let ((%__fk (r '__fk))
	   (%__sk (r '__sk))
	   (%lambda (r 'lambda))
	   (%quote (r 'quote))
	   (%deref* (r 'schelog:deref*)))

       (define (process-goals gg)
	 (if (null? gg)
	     `(,%__fk (,%quote fail))
	     (let ((g (car gg)))
	       `((,%lambda (,%__fk)
		   (,%__sk ((,%deref* ,g) ,%__fk)))
		 (,%lambda (__ignore)
		   ,(process-goals (cdr gg)))))))

       `(,%lambda (,%__fk)
	  (,(r 'call-with-current-continuation)
	   (,%lambda (,%__sk)
		     ,(process-goals (cdr x)))))))))

;conjunction

(define-syntax %and
  (syntax-rules ()
    ((%and g ...)
     (lambda (__fk)
       (let* ((__fk ((schelog:deref* g) __fk))
	      ...)
	 __fk)))))

;cut

;; is this correct? "!" will not be seen in "g", or not?

;; (define-syntax %cut-delimiter
;;   (syntax-rules (!)
;;     ((%cut-delimiter g)
;;      (lambda (__fk)
;;        (let ((! (lambda (__fk2) __fk)))
;; 	 ((schelog:deref* g) __fk))))))

(define-syntax %cut-delimiter
  (er-macro-transformer
   (lambda (x r c)
     (let ((g (cadr x)))
       (let ((%__fk (r '__fk)))
	 `(,(r 'lambda) (,%__fk)
	   (,(r 'let) ((! (,(r 'lambda) (__fk2) ,%__fk)))
	    ((,(r 'schelog:deref*) ,g) ,%__fk))))))))

;Prolog-like sugar

;(define-syntax %rel
;  (syntax-rules (!)
;    ((%rel (v ...) ((a ...) subgoal ...) ...)
;      (lambda __fmls
;        (lambda (__fk)
;          (call-with-current-continuation
;            (lambda (__sk)
;              (let ((! (lambda (fk1) __fk)))
;                (%let (v ...)
;                  (call-with-current-continuation
;                    (lambda (__fk)
;                      (let* ((__fk ((%= __fmls (list a ...)) __fk))
;                              (__fk ((schelog:deref* subgoal) __fk))
;                              ...)
;                        (__sk __fk))))
;                  ...
;                  (__fk 'fail))))))))))

(define-syntax macro-absent-object
  (er-macro-transformer
   (lambda (x r c)
     `(,(r 'quote) ##schelog#absent-object))))

(define-syntax absent-object? 
  (syntax-rules ()
    ((_ obj)
     (eq? obj (macro-absent-object)))))

(define-syntax %rel
  (er-macro-transformer
   (lambda (x r c)
     (let ((vv (cadr x))
	   (cc (cddr x))
	   (%__fk (r '__fk))
	   (%__sk (r '__sk))
	   (%let (r 'let))
	   (%let* (r 'let*))
	   (%quote (r 'quote))
	   (%lambda (r 'lambda))
	   (%list (r 'list))
	   (%if (r 'if))
	   (%absent-object? (r 'absent-object?))
	   (%not (r 'not))
	   (%or (r 'or))
	   (%null? (r 'null?))
	   (%%fail (r '%fail))
	   (%__rest-of-fmls (r '__rest-of-fmls))
	   (%deref* (r 'schelog:deref*))
	   (%%= (r '%=))
	   (%__fmls (r '__fmls)))

       (define (process-clauses cc)
	 (if (null? cc)
	     `(,%__fk (,%quote fail))
	     (let ((c (car cc)))
	       `((,%lambda (,%__fk)
			   (,%let* ((,%__fk ((,%%= ,%__fmls (,%list ,@(car c))) ,%__fk))
				    ,@(map (lambda (sg)
					     `(,%__fk ((,%deref* ,sg) ,%__fk)))
					   (cdr c)))
				   (,%__sk ,%__fk)))
		 (,%lambda (__ignore)
			   ,(process-clauses (cdr cc)))))))
    
       (let ((body `(,%lambda (,%__fk)
			      (,(r 'call-with-current-continuation)
			       (,%lambda (,%__sk)
					 (,%let ((! (,%lambda (,(r 'fk1)) ,%__fk)))
						(,(r '%let) ,vv
						 ,(process-clauses cc))))))))
	 (if (apply = (map (lambda (c) (length (car c))) cc))
	     ;; all clauses have same number of terms, so we anticipate
	     ;; having a fixed parameter list and optimize for that case
	     (let ((vars (map (lambda (x) (gensym '__arg)) (car (car cc)))))
	       (define (build)
		 `(,%if ,(if (null? vars)
			     `(,%not (,%null? ,%__rest-of-fmls))
			     `(,%or (,%not (,%null? ,%__rest-of-fmls))
				    (,%absent-object? ,(car (reverse vars)))))
			,%%fail
			(,%let ((,%__fmls ,(if (null? vars) `(,%quote ()) (cons %list vars))))
			       ,body)))
	       (if (null? vars)
		   `(,%lambda ,%__rest-of-fmls ,(build))
		   (let ((rvar (gensym)))
		     `(,%lambda ,rvar
				(,(r 'let-optionals*) ,rvar 
				 ,(append (map (lambda (x) (list x `(,(r 'macro-absent-object)))) vars)
					  `(,%__rest-of-fmls) )
				 ,(build) ) ) ) ) )
	     `(,%lambda ,%__fmls ,body)))))))

;the fail and true preds

(define %fail
  (lambda (fk) (fk 'fail)))

(define %true
  (lambda (fk) fk))

;for structures ("functors"), use Scheme's list and vector
;functions and anything that's built using them.

;arithmetic

(define-syntax %is
  (syntax-rules (quote)
    ((%is v e)
     (lambda (__fk)
       ((%= v (%is (1) e __fk)) __fk)))

    ((%is (1) (quote x) fk) (quote x))
    ((%is (1) (x ...) fk)
     ((%is (1) x fk) ...))
    ((%is (1) x fk)
     (if (and (schelog:ref? x) (schelog:unbound-ref? x))
	 (fk 'fail) (schelog:deref* x)))))

#;(define-macro %is
  (lambda (v e)
    (letrec ((%is-help (lambda (e fk)
                         (cond ((pair? e)
                                (cond ((eq? (car e) 'quote) e)
                                      (else
                                       (map (lambda (e1)
                                              (%is-help e1 fk)) e))))
                               (else
                                `(if (and (schelog:ref? ,e)
                                          (schelog:unbound-ref? ,e))
                                     (,fk 'fail) (schelog:deref* ,e)))))))
      `(lambda (__fk)
         ((%= ,v ,(%is-help e '__fk)) __fk)))))

;defining arithmetic comparison operators

(define-syntax schelog:make-binary-arithmetic-relation
  (er-macro-transformer
   (lambda (x r c)
     (let ((%__fk (r '__fk))
	   (%x (r 'x))
	   (%y (r 'y)))
       `(,(r 'lambda) (,%x ,%y)
	 (,(r 'lambda) (,%__fk)
	  ((,(r '%=) #t ,(cons (cadr x)
			       (map (lambda (t)
				      `(,(r 'if) (,(r 'and) (,(r 'schelog:ref?) ,t)
						  (,(r 'schelog:unbound-ref?) ,t))
					(,%__fk (,(r 'quote) fail)) (,(r 'schelog:deref*) ,t)))
				    (list %x %y))))
	   ,%__fk)))))))

(define %=:= (schelog:make-binary-arithmetic-relation =))
(define %>   (schelog:make-binary-arithmetic-relation >))
(define %>=  (schelog:make-binary-arithmetic-relation >=))
(define %<   (schelog:make-binary-arithmetic-relation <))
(define %<=  (schelog:make-binary-arithmetic-relation <=))
(define %=/= (schelog:make-binary-arithmetic-relation (lambda (m n) (not (= m n)))))

;type predicates

(define schelog:constant?
  (lambda (x)
    (cond ((schelog:ref? x)
	   (cond ((schelog:unbound-ref? x) #f)
		 ((schelog:frozen-ref? x) #t)
		 (else (schelog:constant? (schelog:deref x)))))
	  ((pair? x) #f)
	  ((vector? x) #f)
	  (else #t))))

(define schelog:compound?
  (lambda (x)
    (cond ((schelog:ref? x) (cond ((schelog:unbound-ref? x) #f)
			  ((schelog:frozen-ref? x) #f)
			  (else (schelog:compound? (schelog:deref x)))))
	  ((pair? x) #t)
	  ((vector? x) #t)
	  (else #f))))

(define %constant
  (lambda (x)
    (lambda (fk)
      (if (schelog:constant? x) fk (fk 'fail)))))

(define %compound
  (lambda (x)
    (lambda (fk)
      (if (schelog:compound? x) fk (fk 'fail)))))

;metalogical type predicates

(define schelog:var?
  (lambda (x)
    (cond ((schelog:ref? x)
	   (cond ((schelog:unbound-ref? x) #t)
		 ((schelog:frozen-ref? x) #f)
		 (else (schelog:var? (schelog:deref x)))))
	  ((pair? x) (or (schelog:var? (car x)) (schelog:var? (cdr x))))
	  ((vector? x) (schelog:var? (schelog:vector->list x)))
	  (else #f))))

(define %var
  (lambda (x)
    (lambda (fk) (if (schelog:var? x) fk (fk 'fail)))))

(define %nonvar
  (lambda (x)
    (lambda (fk) (if (schelog:var? x) (fk 'fail) fk))))

; negation of unify

(define schelog:make-negation ;basically inlined cut-fail
  (lambda (p)
    (lambda args
      (lambda (fk)
	(if (call-with-current-continuation
	      (lambda (k)
		((apply p args) (lambda (d) (k #f)))))
	    (fk 'fail)
	    fk)))))

(define %/=
  (schelog:make-negation %=))

;identical

(define schelog:ident?
  (lambda (x y)
    (cond ((schelog:ref? x)
	   (cond ((schelog:unbound-ref? x)
		  (cond ((schelog:ref? y)
			 (cond ((schelog:unbound-ref? y) (eq? x y))
			       ((schelog:frozen-ref? y) #f)
			       (else (schelog:ident? x (schelog:deref y)))))
			(else #f)))
		 ((schelog:frozen-ref? x)
		  (cond ((schelog:ref? y)
			 (cond ((schelog:unbound-ref? y) #f)
			       ((schelog:frozen-ref? y) (eq? x y))
			       (else (schelog:ident? x (schelog:deref y)))))
			(else #f)))
		 (else (schelog:ident? (schelog:deref x) y))))
	  ((pair? x)
	   (cond ((schelog:ref? y)
		  (cond ((schelog:unbound-ref? y) #f)
			((schelog:frozen-ref? y) #f)
			(else (schelog:ident? x (schelog:deref y)))))
		 ((pair? y)
		  (and (schelog:ident? (car x) (car y))
		       (schelog:ident? (cdr x) (cdr y))))
		 (else #f)))
	  ((vector? x)
	   (cond ((schelog:ref? y)
		  (cond ((schelog:unbound-ref? y) #f)
			((schelog:frozen-ref? y) #f)
			(else (schelog:ident? x (schelog:deref y)))))
		 ((vector? y)
		  (schelog:ident? (schelog:vector->list x)
		    (schelog:vector->list y)))
		 (else #f)))
	  (else
	    (cond ((schelog:ref? y)
		   (cond ((schelog:unbound-ref? y) #f)
			 ((schelog:frozen-ref? y) #f)
			 (else (schelog:ident? x (schelog:deref y)))))
		  ((pair? y) #f)
		  ((vector? y) #f)
		  (else (eqv? x y)))))))

(define %==
  (lambda (x y)
    (lambda (fk) (if (schelog:ident? x y) fk (fk 'fail)))))

(define %/==
  (lambda (x y)
    (lambda (fk) (if (schelog:ident? x y) (fk 'fail) fk))))

;variables as objects

(define schelog:freeze
  (lambda (s)
    (let ((dict '()))
      (let loop ((s s))
	(cond ((schelog:ref? s)
	       (cond ((or (schelog:unbound-ref? s) (schelog:frozen-ref? s))
		      (let ((x (schelog:assq s dict)))
			(if x (cdr x)
			    (let ((y (schelog:freeze-ref s)))
			      (set! dict (cons (cons s y) dict))
			      y))))
		     ;((schelog:frozen-ref? s) s) ;?
		     (else (loop (schelog:deref s)))))
	      ((pair? s) (cons (loop (car s)) (loop (cdr s))))
	      ((vector? s)
	       (let ((n (vector-length s)))
		 (let ((result (make-vector n)))
		   (do ((i (fx- n 1) (fx- i 1)))
		       ((fx< i 0) result)
		     (vector-set! result i (loop (vector-ref s i)))))))
	      (else s))))))

(define schelog:melt
  (lambda (f)
    (cond ((schelog:ref? f)
	   (cond ((schelog:unbound-ref? f) f)
		 ((schelog:frozen-ref? f) (schelog:thaw-frozen-ref f))
		 (else (schelog:melt (schelog:deref f)))))
	  ((pair? f)
	   (cons (schelog:melt (car f)) (schelog:melt (cdr f))))
	  ((vector? f)
	   (let ((n (vector-length f)))
	     (let ((result (make-vector n)))
	       (do ((i (fx- n 1) (fx- i 1)))
		   ((fx< i 0) result)
		 (vector-set! result i (schelog:melt (vector-ref f i)))))))
	  (else f))))

(define schelog:melt-new
  (lambda (f)
    (let ((dict '()))
      (let loop ((f f))
	(cond ((schelog:ref? f)
	       (cond ((schelog:unbound-ref? f) f)
		     ((schelog:frozen-ref? f)
		      (let ((x (schelog:assq f dict)))
			(if x (cdr x)
			    (let ((y (_)))
			      (set! dict (cons (cons f y) dict))
			      y))))
		     (else (loop (schelog:deref f)))))
	      ((pair? f) (cons (loop (car f)) (loop (cdr f))))
	      ((vector? f)
	       (let ((n (vector-length f)))
		 (let ((result (make-vector n)))
		   (do ((i (fx- n 1) (fx- i 1)))
		       ((fx< i 0) result)
		     (vector-set! result i (loop (vector-ref f i)))))))
	      (else f))))))

(define schelog:copy
  (lambda (s)
    (schelog:melt-new (schelog:freeze s))))

(define %freeze
  (lambda (s f)
    (lambda (fk)
      ((%= (schelog:freeze s) f) fk))))

(define %melt
  (lambda (f s)
    (lambda (fk)
      ((%= (schelog:melt f) s) fk))))

(define %melt-new
  (lambda (f s)
    (lambda (fk)
      ((%= (schelog:melt-new f) s) fk))))

(define %copy
  (lambda (s c)
    (lambda (fk)
      ((%= (schelog:copy s) c) fk))))

;negation as failure

(define %not
  (lambda (g)
    (lambda (fk)
      (if (call-with-current-continuation
	    (lambda (k)
	      ((schelog:deref* g) (lambda (d) (k #f)))))
	  (fk 'fail) fk))))

;assert, asserta

(define %empty-rel
  (lambda args
    %fail))

(define-syntax %assert
  (syntax-rules (!)
    ((%assert rel-name (v ...) ((a ...) subgoal ...) ...)
      (set! rel-name
        (let ((__old-rel rel-name)
               (__new-addition (%rel (v ...) ((a ...) subgoal ...) ...)))
          (lambda __fmls
            (%or (apply __old-rel __fmls)
              (apply __new-addition __fmls))))))))

(define-syntax %assert-a
  (syntax-rules (!)
    ((%assert-a rel-name (v ...) ((a ...) subgoal ...) ...)
      (set! rel-name
        (let ((__old-rel rel-name)
               (__new-addition (%rel (v ...) ((a ...) subgoal ...) ...)))
          (lambda __fmls
            (%or (apply __new-addition __fmls)
              (apply __old-rel __fmls))))))))

#;(define-macro %assert
  (lambda (rel-name vv . cc)
    `(set! ,rel-name
           (let ((__old-rel ,rel-name)
                 (__new-addition (%rel ,vv ,@cc)))
             (lambda __fmls
               (%or (apply __old-rel __fmls)
                    (apply __new-addition __fmls)))))))

#;(define-macro %assert-a
  (lambda (rel-name vv . cc)
    `(set! ,rel-name
           (let ((__old-rel ,rel-name)
                 (__new-addition (%rel ,vv ,@cc)))
             (lambda __fmls
               (%or (apply __new-addition __fmls)
                    (apply __old-rel __fmls)))))))

;set predicates

(define schelog:set-cons
  (lambda (e s)
    (if (member e s) s (cons e s))))

(define-syntax %free-vars
  (syntax-rules ()
    ((%free-vars (v ...) g)
      (cons 'schelog:goal-with-free-vars
        (cons (list v ...) g)))))

#;(define-macro %free-vars
  (lambda (vv g)
    `(cons 'schelog:goal-with-free-vars
           (cons (list ,@vv) ,g))))

(define schelog:goal-with-free-vars?
  (lambda (x)
    (and (pair? x) (eq? (car x) 'schelog:goal-with-free-vars))))

(define schelog:make-bag-of
  (lambda (kons)
    (lambda (lv goal bag)
      (let ((fvv '()))
        (if (schelog:goal-with-free-vars? goal)
          (begin (set! fvv (cadr goal))
            (set! goal (cddr goal))))
        (schelog:make-bag-of-aux kons fvv lv goal bag)))))

(define schelog:make-bag-of-aux
  (lambda (kons fvv lv goal bag)
    (lambda (fk)
      (call-with-current-continuation
        (lambda (sk)
          (let ((lv2 (cons fvv lv)))
            (let* ((acc '())
                    (fk-final
                      (lambda (d)
                        ;;(set! acc (reverse! acc))
                        (sk ((schelog:separate-bags fvv bag acc) fk))))
                    (fk-retry (goal fk-final)))
              (set! acc (kons (schelog:deref* lv2) acc))
              (fk-retry 'retry))))))))

(define schelog:separate-bags
  (lambda (fvv bag acc)
    ;;(format #t "Accum: ~s~%" acc)
    (let ((bags (let loop ((acc acc)
                            (current-fvv #f) (current-bag '())
                            (bags '()))
                  (if (null? acc)
                    (cons (cons current-fvv current-bag) bags)
                    (let ((x (car acc)))
                      (let ((x-fvv (car x)) (x-lv (cdr x)))
                        (if (or (not current-fvv) (equal? x-fvv current-fvv))
                          (loop (cdr acc) x-fvv (cons x-lv current-bag) bags)
                          (loop (cdr acc) x-fvv (list x-lv)
                            (cons (cons current-fvv current-bag) bags)))))))))
      ;;(format #t "Bags: ~a~%" bags)
      (if (null? bags) (%= bag '())
        (let ((fvv-bag (cons fvv bag)))
          (let loop ((bags bags))
            (if (null? bags) %fail
              (%or (%= fvv-bag (car bags))
                (loop (cdr bags))))))))))

(define %bag-of (schelog:make-bag-of cons))
(define %set-of (schelog:make-bag-of schelog:set-cons))

;%bag-of-1, %set-of-1 hold if there's at least one solution

(define %bag-of-1
  (lambda (x g b)
    (%and (%bag-of x g b)
      (%= b (cons (_) (_))))))

(define %set-of-1
  (lambda (x g s)
    (%and (%set-of x g s)
      (%= s (cons (_) (_))))))

;user interface

;(%which (v ...) query) returns #f if query fails and instantiations
;of v ... if query succeeds.  In the latter case, type (%more) to
;retry query for more instantiations.

(define schelog:*more-k* 'forward)
(set! schelog:*more-k* schelog:*more-k*)
(define schelog:*more-fk* 'forward)
(set! schelog:*more-fk* schelog:*more-fk*)

(define-syntax %which
  (syntax-rules (schelog:*more-k* schelog:*more-fk*)
    ((%which (v ...) g)
     (%let (v ...)
       (call-with-current-continuation
         (lambda (__qk)
           (set! schelog:*more-k* __qk)
           (set! schelog:*more-fk*
             ((schelog:deref* g)
              (lambda (d)
                (set! schelog:*more-fk* #f)
                (schelog:*more-k* #f))))
           (schelog:*more-k*
             (map (lambda (nam val) (list nam (schelog:deref* val)))
                  '(v ...)
                  (list v ...)))))))))

#;(define-macro %which
  (lambda (vv g)
    `(%let ,vv
           (call-with-current-continuation
            (lambda (__qk)
              (set! schelog:*more-k* __qk)
              (set! schelog:*more-fk*
                    ((schelog:deref* ,g)
                     (lambda (d)
                       (set! schelog:*more-fk* #f)
                       (schelog:*more-k* #f))))
              (schelog:*more-k*
               (map (lambda (nam val) (list nam (schelog:deref* val)))
                    ',vv
                    (list ,@vv))))))))

(define %more
  (lambda ()
    (call-with-current-continuation
      (lambda (k)
	(set! schelog:*more-k* k)
	(if schelog:*more-fk*
	    (schelog:*more-fk* 'more)
	    #f)))))

;end of embedding code.  The following are
;some utilities, written in Schelog

(define %member
  (%rel (x xs y ys)
    ((x (cons x xs)))
    ((x (cons y ys)) (%member x ys))))

(define %if-then-else
  (%rel (p q r)
    ((p q r) p ! q)
    ((p q r) r)))

(define %append
  (%rel (x xs ys zs)
    (('() ys ys))
    (((cons x xs) ys (cons x zs))
      (%append xs ys zs))))

(define %repeat
  ;;failure-driven loop
  (%rel ()
    (())
    (() (%repeat))))

; deprecated names -- retained here for backward-compatibility

(define == %=)
(define %notunify %/=)

(define-syntax %cut
  (syntax-rules ()
    ((_ e ...)
     (%cut-delimiter e ...))))

(define-syntax rel
  (syntax-rules ()
    ((_ e ...)
     (%rel e ...))))

(define %eq %=:=)
(define %gt %>)
(define %ge %>=)
(define %lt %<)
(define %le %<=)
(define %ne %=/=)
(define %ident %==)
(define %notident %/==)

(define-syntax %exists (syntax-rules () ((%exists vv g) g)))

;(define-macro %exists (lambda (vv g) g))

(define-syntax which
  (syntax-rules ()
    ((_ e ...)
     (%which e ...))))

(define more %more)

;end of file

(require-library
 srfi-1
 numbers modular-arithmetic matchable
 elliptic-curve-parameters)

(module elliptic-curve-arithmetic
  (ec+ ec- ec* on-elliptic-curve? with-elliptic-curve)
  (import
   (except scheme
	   + - * / = > < >= <=
	   number->string string->number
	   exp log sin cos tan asin acos atan expt sqrt
	   quotient modulo remainder numerator denominator
	   abs max min gcd lcm
	   positive? negative? odd? even? zero? exact? inexact?
	   floor ceiling truncate round
	   inexact->exact exact->inexact
	   number? complex? real? rational? integer?
	   real-part imag-part magnitude)
   (rename (only scheme =) [= ==])
   (except chicken
	   add1 sub1 signum
	   bitwise-and bitwise-ior bitwise-xor bitwise-not
	   arithmetic-shift)
   srfi-1
   numbers modular-arithmetic matchable
   elliptic-curve-parameters)
  (import-for-syntax
   scheme chicken matchable)

;; Elliptic curve point addition
(define (ec+ parameters)
  (match-let ([($ ec-parameters p a b _ _ _ _) parameters])
    (lambda Ps
      (fold
       (lambda (P A)
	 (cond
	  [(zero? A)
	   P]
	  [(zero? P)
	   A]
	  [(= P (conj A))
	   0]
	  [else
	   (with-modulus p
	     (let*-values ([(l x1 x2 y)
			    (if (= A P)
				(match-let ([(and (== real-part x) (== imag-part y)) A])
				  (values (/ (+ (* 3 x x) a) 2 y) x x y))
				(match-let ([(and (== real-part x1) (== imag-part y1)) A]
					    [(and (== real-part x2) (== imag-part y2)) P])
				  (values (/ (- y2 y1) (- x2 x1)) x1 x2 y1)))]
			   [(xR) (- (* l l) x1 x2)]
			   [(yR) (- (* l (- x1 xR)) y)])
	       (make-rectangular xR yR)))]))
       0 Ps))))

;; Elliptic curve point subtraction
(define (ec- parameters)
  (match-let ([+ (ec+ parameters)]
	      [($ ec-parameters p a b _ _ _ _) parameters])
    (case-lambda
     [(A)
      (conj A)]
     [(A . Ps)
      (apply + A (map conj Ps))])))

;; Elliptic curve point scalar multiplication
(define (ec* parameters)
  (let ([+ (ec+ parameters)])
    (lambda (P n)
      (let loop ([A 0]
                 [P (if (negative? n) (conj P) P)]
                 [n (abs n)])
        (if (positive? n)
	    (loop (if (zero? (bitwise-and n 1)) A (+ A P))
                  (+ P P)
                  (arithmetic-shift n -1))
            A)))))

;; Check whether a given point lies on an elliptic curve
(define (on-elliptic-curve? parameters P)
  (match-let ([($ ec-parameters p a b _ _ _ _) parameters]
	      [(and (== real-part x) (== imag-part y)) P])
    (with-modulus p
      (= (* y y) (+ (* x x x) (* a x) b)))))

;; Syntax to overload +, - and * with elliptic curve versions
(define-syntax with-elliptic-curve
  (er-macro-transformer
   (lambda (stx rename id=)
     (match stx
       [(with-elliptic-curve parameters body ...)
        (let ([~let (rename 'let)]
	      [~parameters (rename 'parameters)])
          `(,~let ([,~parameters ,parameters])
             (,~let ([+ (,(rename 'ec+) ,~parameters)]
		     [- (,(rename 'ec-) ,~parameters)]
		     [* (,(rename 'ec*) ,~parameters)])
               ,@body)))]))))

)

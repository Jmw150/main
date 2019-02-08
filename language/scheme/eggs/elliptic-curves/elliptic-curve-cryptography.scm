(require-library
 extras
 numbers modular-arithmetic defstruct matchable
 elliptic-curve-parameters elliptic-curve-arithmetic)

(module elliptic-curve-cryptography
  *
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
   (except extras
	   random randomize)
   numbers modular-arithmetic defstruct matchable
   elliptic-curve-parameters elliptic-curve-arithmetic)

;; Generate an ECDSA key pair and returns the public and private keys
(define (ecc-generate-keys parameters random-integer)
  (match-let* ([($ ec-parameters _ _ _ G n h params-name) parameters])
    (lambda ()
      (let* ([d (add1 (random-integer (sub1 n)))]
	     [P (with-elliptic-curve parameters (* G d))])
	(values P d)))))

;; Sign using ECDSA
(define (ecc-sign parameters random-integer)
  (match-let* ([($ ec-parameters _ _ _ G n h params-name) parameters])
    (lambda (d message)
      (let retry ()
	(let* ([k (add1 (random-integer (sub1 n)))]
	       [Q (with-elliptic-curve parameters (* G k))]
	       [r (modulo (real-part Q) n)])
	  (if (zero? r)
	      (retry)
	      (let ([s (with-modulus n (/ (+ (* r d) message) k))])
		(if (zero? s)
		    (retry)
		    (cons r s)))))))))

;; Verify signature using ECDSA
(define (ecc-verify parameters)
  (match-let* ([($ ec-parameters _ _ _ G n h params-name) parameters])
    (lambda (P message signature)
      (match-let ([(r . s) signature])
	(and (on-elliptic-curve? parameters P)
	     (< 0 r n)
	     (< 0 s n)
	     (with-modulus n
	       (let* ([1/s (/ s)]
		      [u1 (* 1/s message)]
		      [u2 (* 1/s r)])
		 (with-elliptic-curve parameters
		   (let* ([Q (+ (* G u1) (* P u2))]
			  [v (modulo (real-part Q) n)])
		     (= v r))))))))))
  
;; Generate a shared secret using ECKA
(define (ecc-generate-secret parameters)
  (match-let* ([($ ec-parameters _ _ _ G n h params-name) parameters])
    (lambda (d P)
      (unless (on-elliptic-curve? parameters P)
	(error 'ecc-generate-secret "public key not on the elliptic curve" P))
      (let* ([S (with-elliptic-curve parameters (* (* P h) (with-modulus n (/ d h))))])
	(if (zero? S)
	    (error 'ecc-generate-secret "derived secret is the neutral element")
	    S)))))

)

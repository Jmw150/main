
;;
;; Multivariate normal probability distribution.
;;
;;
;; This code is based on NormalPdf.cpp/hpp in the dysii project by
;; Lawrence Murray.
;;
;;

(module normal-pdf

 ( normal-pdf? 
   make-normal-pdf
   normal-pdf:expectation
   normal-pdf:covariance
   normal-pdf:density
   normal-pdf:sample)
		 
   (import scheme chicken extras srfi-4)

   
   (require-extension datatype srfi-4 srfi-4-utils matrix-utils )
   (require-library blas atlas-lapack)
   (import (prefix blas blas: )
	   (prefix atlas-lapack atlas-lapack: ))

(define normal-pdf:order blas:RowMajor)
(define normal-pdf:uplo blas:Upper)

(define (normal-pdf:error x . rest)
  (let ((port (open-output-string)))
    (let loop ((objs (cons x rest)))
      (if (null? objs)
	  (begin
	    (newline port)
	    (error 'normal-pdf (get-output-string port)))
	  (begin (display (car objs) port)
		 (display " " port)
		 (loop (cdr objs)))))))

;  
;  * S                number of dimensions
;  * mu               expectation
;  * sigma            covariance
;  * R                Cholesky decomposition of covariance matrix
;  * sigmaInv         inverse of covariance
;  * sigmaDet         determinant of covariance
;  * ZI               the constant factor (2*pi)^(-S/2) / prod(diag(R))
;  * mu-zero?         true if expectation is zero
;
(define-datatype normal-pdf normal-pdf?
  (NormalPdf (S         (lambda (x) (and (integer? x) (> x 0))))
	     (mu        (lambda (x) (or (f64vector? x) (number? x))))
	     (sigma     (lambda (x) (or (f64vector? x) (number? x))))
	     (R         (lambda (x) (or (f64vector? x) (number? x))))
	     (Rinv      (lambda (x) (or (f64vector? x) (number? x))))
	     (sigmaInv  (lambda (x) (or (f64vector? x) (number? x))))
	     (sigmaDet  number?)
	     (ZI        number?)
	     (mu-zero?  boolean?)))


(define-record-printer (normal-pdf x out)
  (cases normal-pdf x
	 (NormalPdf (S mu sigma R)
		    (fprintf out "#(NormalPdf S=~S mu=~S sigma=~S R=~A)"
			     S mu sigma R))))


(define (f64vector-sub a b)
  (let ((n (f64vector-length a)))
    (blas:daxpy n -1.0 b a)))

(define (f64vector-mul a b)
  (f64vector-map (lambda (v1 v2) (* v1 v2)) a b))


(define f64matrix-fold-partial (make-matrix-fold-partial f64vector-ref))
(define f64matrix-map (make-matrix-map f64vector-ref f64vector-set!))

(define (diag M N A)
    (list->f64vector
     (reverse (f64matrix-fold-partial
	       normal-pdf:order M N A 
	       (lambda (x ax) (cons x ax)) 
	       (lambda (i j) (fx= i j)) (list)))))

(define (upper M N A)
  (f64matrix-map normal-pdf:order M N A (lambda (i j v) (if (>= j i) v 0.0))))

(define (cholesky N A)
  (atlas-lapack:dpotrf normal-pdf:order normal-pdf:uplo N A))

(define (cholinv N R)
  (atlas-lapack:dpotri normal-pdf:order normal-pdf:uplo N R))

(define (trinv N A)
  (atlas-lapack:dtrtri normal-pdf:order normal-pdf:uplo blas:NonUnit N A))

(define (prod x)  (f64vector-fold (lambda (x ax) (* x ax)) 1 x))

(define-constant PI*2 6.28318530717959)

(define (make-normal-pdf S mu sigma)
  (if (not (and (integer? S) (positive? S)))
      (normal-pdf:error 'make-normal-pdf "sample size must be a positive integer"))
  (if (= S 1) 
      (begin
	(if (not (number? sigma)) 
	    (normal-pdf:error 'make-normal-pdf "variance must be a scalar"))
	(if (not (number? mu)) 
	    (normal-pdf:error 'make-normal-pdf "mean must be a scalar")))
      (begin
	(if (not (and (f64vector? sigma) (= (* S S) (f64vector-length sigma))))
	    (normal-pdf:error 'make-normal-pdf "variance must be an " S "x" S " f64 matrix"))
	(if (not (and (f64vector? mu) (= S (f64vector-length mu))))
	    (normal-pdf:error 'make-normal-pdf "mean must be an f64 vector of length " S))))
  (let* ((R         (if (number? sigma) (sqrt sigma) (upper S S (cholesky S sigma))))
	 (Rinv      (if (number? sigma) (/ 1 R) (trinv S R)))
	 (sigmaInv  (if (number? sigma) (/ 1 sigma) (cholinv S R)))
	 (sigmaDet  (if (number? sigma) sigma  (prod (diag S S R))))
	 (ZI        (/ (sqrt (expt PI*2 (- S))) sigmaDet))
	 ;; is expectation zero?
	 (mu-zero?  (if (number? mu) (zero? mu)
			(f64vector-fold (lambda (x ax) (and (zero? x) ax)) #t mu))))
    (NormalPdf S mu sigma R Rinv sigmaInv sigmaDet ZI mu-zero?)))
      
;;
;; Compute the density of the distribution at a given point.
;;
;; p(x) = \frac{1}{\sqrt{(2\pi)^N \Sigma}}
;;   \exp\big({-\frac{1}{2}({x}-{\mu})^T \Sigma^{-1} 
;;   ({x}-{\mu})\big)}
;;
(define (normal-pdf:density gpdf x)
  (cases normal-pdf gpdf
   (NormalPdf (S mu sigma R Rinv sigmaInv sigmaDet ZI mu-zero?)
     (let ((exponent (cond ((and mu-zero? (number? sigmaInv))
			    (* sigmaInv x x))
			   ((number? mu)
			    (let ((d (- x mu))) (* sigmaInv d d)))
			   (else 
			    (let* ((d   (if mu-zero? x (f64vector-sub x mu)))
				   (dd  (blas:dgemm! normal-pdf:order blas:NoTrans blas:NoTrans 1 S S
						     1.0 d Rinv 0.0 (make-f64vector S 0.0))))
			      (blas:ddot S dd dd))))))
       (* ZI (exp (* -0.5 exponent)))))))

;;
;; Sample from the distribution.
;;
;; Let x be a sample from a standard normal distribution.
;;
;; Then the sample is s = mu + R*x
;;
;; where R is the upper triangular Cholesky decomposition of the
;; covariance matrix.
;;
(define (normal-pdf:sample gpdf x)
  (cases normal-pdf gpdf
   (NormalPdf (S mu sigma R Rinv sigmaInv sigmaDet ZI mu-zero?)
     (if (= S 1)
	 (+ (* R x) mu)
	 (begin
	   (blas:dgemm normal-pdf:order blas:NoTrans blas:NoTrans 1 S S 1.0 x R 1.0 mu))))))


(define (normal-pdf:expectation gpdf x)
  (cases normal-pdf gpdf
   (NormalPdf (S mu sigma R Rinv sigmaInv sigmaDet ZI mu-zero?)
	      mu)))


(define (normal-pdf:covariance gpdf x)
  (cases normal-pdf gpdf
   (NormalPdf (S mu sigma R Rinv sigmaInv sigmaDet ZI mu-zero?)
	      sigma)))



)

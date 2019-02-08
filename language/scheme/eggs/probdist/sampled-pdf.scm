
;;
;; Probability distribution represented by a weighted set of samples.
;;
;;
;; This code is based on SampledPdf.cpp/hpp in the dysii project by
;; Lawrence Murray. Many of the comments in this file are taken from
;; the original code.
;;
;;
;; This extension approximates an arbitrary distribution by
;; representing it as a weighted set of P samples:
;;
;; (s^{i}, \pi^{i}), where i = 1 ... P
;;
;; and \sum_i \pi_t^{i} = 1. The probability density function may then
;; be given as a weighted sum of Dirac delta functions:
;;
;; p(x) = \sum_{i=1}^{P} \pi^{i}\delta(\mathbf{x} - s^{i})
;;
;; Kitagawa, G. _Monte Carlo Filter and Smoother for Non-Gaussian
;; Nonlinear State Space Models_. Journal of Computational and
;; Graphical Statistics, 1996, 5, 1-25
;;

(module sampled-pdf

         ( sampled-pdf? 
	   weighted-samples?
	   SampledPDF WeightedSamples
	   make-sampled-pdf
	   sampled-pdf:expectation
	   sampled-pdf:covariance
	   sampled-pdf:find-sample
	   sampled-pdf:normalize
	   sampled-pdf:resample)
		 
   (import scheme chicken srfi-1 srfi-4)

   
   (require-extension datatype matchable srfi-4 srfi-4-utils matrix-utils)
   (require-library blas )
   (import (prefix blas blas:))

(define-utility-matrices f64)

(define sampled-pdf:order blas:RowMajor)
(define sampled-pdf:uplo blas:Lower)

(define (sampled-pdf:error x . rest)
  (let ((port (open-output-string)))
    (let loop ((objs (cons x rest)))
      (if (null? objs)
	  (begin
	    (newline port)
	    (error 'sampled-pdf (get-output-string port)))
	  (begin (display (car objs) port)
		 (display " " port)
		 (loop (cdr objs)))))))


;  * S       individual sample size 
;  * senv    an ordered dictionary data structure that follows the API of treap and rb-tree
(define-datatype weighted-samples weighted-samples?
  (WeightedSamples
   (S          (lambda (x) (and (integer? x) (> x 0))))
   (senv       procedure?)
   (make-senv  procedure?)))


;  Structure: sampled-pdf
;
;  A weighted sample data set  
;  
;  * N       sample set size
;  * W       total weight
;  * wxs     weighted samples 
;  * mu      expectation
;  * sigma   covariance 
;
(define-datatype sampled-pdf sampled-pdf?
  (SampledPDF (N      (lambda (x) (and (integer? x) (> x 0))))
	      (W      number?)
	      (wxs    weighted-samples?)
	      (mu     (lambda (x) (or (f64vector? x) (number? x))))
	      (sigma  (lambda (x) (or (f64vector? x) (number? x))))))



(define (expectation W wxs)
  (if (not (> W 0))
      (sampled-pdf:error 'sampled-pdf:expectation
			 "total weight is not positive: " W))
  (cases weighted-samples wxs
	 (WeightedSamples (S senv)
	  (let ((N (senv 'size)))
	    (let ((mu ((senv 'fold)
		       (if (= S 1)
			   (lambda (wx mu) (+ mu (* (car wx) (cdr wx))))
			   (lambda (wx mu) (blas:daxpy! S (car wx) (cdr wx) mu)))
		       (make-f64vector S 0.0))))
	      (if (= S 1) (/ mu W)
		  (f64vector-map (lambda (x) (/ x W)) mu)))))))

(define (f64vector-scale a x)
  (let ((n (f64vector-length x)))
    (blas:dscal n a x)))

(define (rank1! N alpha x A)
  (blas:dsyr! sampled-pdf:order sampled-pdf:uplo N alpha x A))

(define (covariance W wxs mu)
  (if (not (> W 0))
      (sampled-pdf:error 'covariance
			 "total weight is not positive: " W))
  (cases weighted-samples wxs
	 (WeightedSamples (S senv)
	  (let ((N (senv 'size)))
	    (let ((sigma  ((senv 'fold)
			   (if (= S 1)
			       (lambda (wx sigma)
				 (let ((w (car wx)) (x (cdr wx)))
				   (+ (* w x x) sigma)))
			       (lambda (wx sigma)
				 (let ((w (car wx)) (x (cdr wx)))
				   (rank1! S w x sigma))))
			   (matrix-zeros S S))))
	      (if (= S 1)
		  (- (/ sigma W) (* mu mu))
		  (rank1! S -1.0 mu (f64vector-scale (/ 1 W) sigma))))))))

  

(define (make-sampled-pdf S make-senv xs . rest)
  (let-optionals rest ((ws #f) (xcar car) (xcdr cdr) (xnull? null?))
   (let ((ws  (or ws (map xcar xs))) 
	 (xs  (if ws xs (map xcdr xs))))
     (let-values (((W N) 
		     (let ((W+N (fold
				 (lambda (w ax) (if (> w 0) (cons (+ w (car ax)) (+ 1 (cdr ax)))
						    (sampled-pdf:error 'make-sampled-pdf "non-positive weight: " w)))
				 (cons 0.0 0)				 
				 ws)))
		       (values (car W+N) (cdr W+N)))))
	 (let* ((senv   (let loop ((xs xs) (ws ws) (senv (make-senv -)))
			 (if (and (xnull? xs) (not (xnull? ws)))
			     (sampled-pdf:error 'make-sampled-pdf 
						"samples vector and weight vector are of different sizes"))
			 (if (xnull? xs) senv
			     (loop (xcdr xs) (xcdr ws) 
				   ((senv 'put)  (xcar ws) (cons (xcar ws) (xcar xs)))))))
	       (wxs    (WeightedSamples S senv (lambda () (make-senv -))))
	       (mu     (expectation W wxs))
	       (sigma  (covariance W wxs mu)))
	   (SampledPDF N W wxs mu sigma))))))


;;
;; Given a number u \in [0,1], returns the sample x_i
;; such that \sum_{j=1}^{i-1} w_j < Wu <= \sum_{j=1}^{i} w_j.
;;
(define (sampled-pdf:find-sample u x)
  (if (not (and (>= u 0.0) (<= u 1.0)))
      (sampled-pdf:error 'sampled-pdf:find-sample 
			   "parameter u is not in [0,1]: u = " u))
  (cases sampled-pdf x 
     (SampledPDF (N W wxs mu sigma)
       (cases weighted-samples wxs
	 (WeightedSamples (S senv)
	    (let ((N  (senv 'size)))
	      (let ((Wu+x  ((senv 'fold-limit) 
			    (lambda (ax) (<= (car ax) 0.0))
			    (lambda (wx ax) (match ax ((Wu x) (cons (- Wu (car wx)) (cdr wx)))))
			    (list (* W u) #f))))
		(cdr Wu+x))))))))


;; Normalize weights to sum to 1.
(define (sampled-pdf:normalize x)
  (cases sampled-pdf x 
     (SampledPDF (N W wxs mu sigma)
       (if (= W 1.0) x
	   (let ((WI  (/ 1 W)))
	     (cases weighted-samples wxs
	       (WeightedSamples (S senv make-senv)
		 (let ((wsenv ((senv 'map) (lambda (wx) (cons (* WI (car wx)) (cdr wx))))))
		   (let* ((W      1.0)
			  (wxs    (WeightedSamples S wsenv make-senv))
			  (mu     (expectation 1.0 wxs))
			  (sigma  (covariance 1.0 wxs mu)))
		     (SampledPDF N W wxs mu sigma))))))))))



;;
;; Resample the distribution. This produces a new approximation of
;; the same distribution using a set of equally weighted sample
;; points. Sample points are selected using the deterministic
;; resampling method given in the appendix of Kitagawa (1996).
;;
;; * m - Number of samples to take for new distribution. If zero,
;;       defaults to the number of samples in the existing
;;       distribution.
;;
(define (sampled-pdf:resample make-senv x . rest)
  (cases sampled-pdf x 
     (SampledPDF (N W wxs mu sigma)
       (let-optionals rest ((m N) (alpha 0.5))
         (cases weighted-samples wxs
	   (WeightedSamples (S senv make-senv)
	     (let ((rs ((senv 'fold-right-limit) 
			(lambda (ax) (let ((j (car ax))) (>= j m)))
			(lambda (wx ax) 
			  (match ax ((j wsum rsenv rW Wu)
				     (let ((Wu    (or Wu (* W (/ (- j alpha) m))))
					   (wsum  (+ wsum (car wx))))
				       (if (>= wsum Wu)
					   (list (fx+ 1 j) wsum ((rsenv 'put) (car wx) wx) (+ rW (car wx)) #f)
					   (list j wsum rsenv rW Wu))))))
			(list 1 0.0 (make-senv -) 0.0 #f))))
	       (match rs ((_ _ rsenv rW _)  
			  (let* ((wxs    (WeightedSamples S rsenv make-senv))
				 (mu     (expectation rW wxs))
				 (sigma  (covariance rW wxs mu)))
			    (SampledPDF m rW wxs mu sigma)))))))))))


(define (sampled-pdf:expectation x)			  
  (cases sampled-pdf x 
     (SampledPDF (N W wxs mu sigma) mu)))
			  

(define (sampled-pdf:covariance x)			  
  (cases sampled-pdf x 
     (SampledPDF (N W wxs mu sigma) sigma)))

			  
)

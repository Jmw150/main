;;; Port of cl-stats.lisp to Chicken Scheme, by Peter Lane, 2010.

;;; This program is free software: you can redistribute it and/or modify
;;; it under the terms of the GNU General Public License as published by
;;; the Free Software Foundation, either version 3 of the License, or
;;; (at your option) any later version.

;;; This program is distributed in the hope that it will be useful,
;;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;;; GNU General Public License for more details.

;;; You should have received a copy of the GNU General Public License
;;; along with this program.  If not, see <http://www.gnu.org/licenses/>.

;;; ------- Source of methods -------
;;; 
;;; The formulas and methods used are largely taken from Bernard Rosner,
;;; "Fundamentals of Biostatistics," 5th edition.  "Rosner x" is a page
;;; number.

;;;  These abreviations used in function and variable names:
;;;    ci = confidence interval
;;;    cdf = cumulative density function
;;;    ge = greater than or equal to
;;;    le = less than or equal to
;;;    pdf = probability density function
;;;    sd = standard deviation
;;;    rxc = rows by columns
;;;    sse = sample size estimate

;;; ------- Original copyright notices from cl-stats.lisp -------

;;; Statistical functions in Common Lisp.  Version 1.04 Feb 24, 2005
;;;
;;; This code is copyright (c) 2000, 2001, 2002, 2005 by Larry Hunter
;;; (Larry.Hunter@uchsc.edu) except where otherwise noted.  (Released 
;;; under GPL version 2.)

;;; CLASP utilities marked as such in comment:

;;; Copyright (c) 1990 - 1994 University of Massachusetts
;;; Department of Computer Science
;;; Experimental Knowledge Systems Laboratory
;;; Professor Paul Cohen, Director.
;;; All rights reserved.

;;; Permission to use, copy, modify and distribute this software and its
;;; documentation is hereby granted without fee, provided that the above
;;; copyright notice of EKSL, this paragraph and the one following appear
;;; in all copies and in supporting documentation.
;;; EKSL makes no representation about the suitability of this software for any
;;; purposes.  It is provided "AS IS", without express or implied warranties
;;; including (but not limited to) all implied warranties of merchantability
;;; and fitness for a particular purpose, and notwithstanding any other
;;; provision contained herein.  In no event shall EKSL be liable for any
;;; special, indirect or consequential damages whatsoever resulting from loss
;;; of use, data or profits, whether in an action of contract, negligence or
;;; other tortuous action, arising out of or in connection with the use or
;;; performance of this software, even if EKSL is advised of the possiblity of
;;; such damages.

;;; For more information write to clasp-support@cs.umass.edu

;;; -------------------------------------------------------------------------------

(module
  statistics
  (export
    ; utilities
    average-rank
    beta-incomplete
    bin-and-count
    combinations
    factorial
    find-critical-value
    fisher-z-transform
    gamma-incomplete
    gamma-ln
    permutations
    random-normal
    random-pick
    random-sample
    random-weighted-sample
    sign
    square
    cumsum
    
    ; descriptive statistics
    mean
    median
    mode
    geometric-mean
    range
    percentile
    variance
    standard-deviation
    coefficient-of-variation
    standard-error-of-the-mean
    mean-sd-n

    ; distributional functions
    binomial-probability
    binomial-cumulative-probability
    binomial-ge-probability
    binomial-le-probability
    poisson-probability
    poisson-cumulative-probability
    poisson-ge-probability
    normal-pdf
    convert-to-standard-normal
    phi
    z
    t-distribution
    chi-square
    chi-square-cdf

    ; Confidence intervals
    binomial-probability-ci
    poisson-mu-ci
    normal-mean-ci
    normal-mean-ci-on-sequence
    normal-variance-ci
    normal-variance-ci-on-sequence
    normal-sd-ci
    normal-sd-ci-on-sequence

    ; Hypothesis testing
    ; (parametric)
    z-test
    z-test-on-sequence
    t-test-one-sample
    t-test-one-sample-on-sequence
    t-test-paired
    t-test-paired-on-sequences
    t-test-two-sample
    t-test-two-sample-on-sequences
    f-test
    chi-square-test-one-sample
    binomial-test-one-sample
    binomial-test-two-sample
    fisher-exact-test
    mcnemars-test
    poisson-test-one-sample
    ; (non parametric)
    sign-test
    sign-test-on-sequence
    wilcoxon-signed-rank-test
    wilcoxon-signed-rank-test-on-sequences
    chi-square-test-rxc
    chi-square-test-for-trend

    ; Sample size estimates
    t-test-one-sample-sse
    t-test-two-sample-sse
    t-test-paired-sse
    binomial-test-one-sample-sse
    binomial-test-two-sample-sse
    binomial-test-paired-sse
    correlation-sse

    ; Correlation and regression
    linear-regression
    correlation-coefficient
    correlation-test-two-sample
    correlation-test-two-sample-on-sequences
    spearman-rank-correlation

    ; Significance test functions
    t-significance
    f-significance 
    ; (chi-square significance is calculated from chi-square-cdf
    ;  in ways depending on the problem)

    ;; The Lambert W function, also called the omega function or product logarithm.
    lambert-W0
    lambert-Wm1
    )

  (import chicken extras foreign format scheme) 
  (require-extension srfi-1)
  (require-extension (only srfi-13 string<))
  (require-extension (only data-structures compose))
  (require-extension srfi-25)
  (require-extension srfi-63)
  (require-extension srfi-69)
  (require-extension vector-lib)
  (require-extension numbers)
  (require-extension format)

  ;; ---------------------------------------------------------------------------
  ;; Include functions from GNU Scientific Library

  #>
  #include <assert.h>
  #include <gsl/gsl_rng.h>
  #include <gsl/gsl_sf_erf.h>
  #include <gsl/gsl_sf_gamma.h>
  #include <gsl/gsl_sf_lambert.h>
  
  const gsl_rng_type *statistics_rng_T;
  gsl_rng *statistics_rng_st;

  void statistics_rng_init()
  {
    gsl_rng_env_setup();
                    
    statistics_rng_T = gsl_rng_default;
    assert(statistics_rng_T != NULL);
    statistics_rng_st = gsl_rng_alloc (statistics_rng_T);
    assert(statistics_rng_st != NULL);
    }

  gsl_rng *statistics_rng_get_state ()
  {
     return statistics_rng_st;
  }
  <#

  (define rng-init (foreign-lambda void "statistics_rng_init"))
  (define rng-state (foreign-lambda nonnull-c-pointer "statistics_rng_get_state"))
  (define gsl-random-uniform (foreign-lambda double "gsl_rng_uniform" nonnull-c-pointer))

  ;; The principal branch of the Lambert W function
  (define lambert-W0 
    (foreign-lambda double "gsl_sf_lambert_W0" double))

  ;;The secondary real-valued branch of the Lambert W function
  (define lambert-Wm1
    (foreign-lambda double "gsl_sf_lambert_Wm1" double))

  (define beta-incomplete
    (foreign-lambda double "gsl_sf_beta_inc" double double double))

  (define (random-uniform)
    (gsl-random-uniform (rng-state)))

  ;; returns complementary normalised incomplete Gamma Function
  (define (gamma-incomplete a x)
    (define gamma-inc (foreign-lambda double "gsl_sf_gamma_inc_P" double double))
    (values (if (= x 0.0) 0.0 (gamma-inc a x))
            (gamma-ln a)))

  (define (gamma-ln x)
    (define lngamma (foreign-lambda double "gsl_sf_lngamma" double))
    (cond ((<= x 0)
           (error "Argument to gamma-ln must be positive"))
          ((> x 1.0e302)
           (error "Argument to gamma-ln too large"))
          (else
            (lngamma x))))

  ;; ---------------------------------------------------------------------------
  (define :1-beta 'scm-stats-1-beta)
  (define :alpha 'scm-stats-alpha)
  (define :approximate? 'scm-stats-approximate)
  (define :epsilon 'scm-stats-epsilon)
  (define :exact? 'scm-stats-exact)
  (define :mu 'scm-stats-mu)
  (define :one-tailed? 'scm-stats-one-tailed)
  (define :positive 'scm-stats-positive)
  (define :precision 'scm-stats-precision)
  (define :rate 'scm-stats-rate)
  (define :sample-ratio 'scm-stats-sample-ratio)
  (define :sigma 'scm-stats-sigma)
  (define :tails 'scm-stats-tails)
  (define :variances-equal? 'scm-stats-variances-equal)
  (define :variance-significance-cutoff 'scm-stats-variance-significance-cutoff)
  (define :x-tolerance 'scm-stats-x-tolerance)
  (define :y-tolerance 'scm-stats-y-tolerance)

  ;; ---------------------------------------------------------------------------
  ;; Some utility procedures

  (define PI 3.1415926535897932385)

  ;; Average rank calculation for non-parametric tests.  Ranks are 1 based,
  ;; but lisp is 0 based, so add 1!
  (define (average-rank value sorted-values)
    (let ((first (position value sorted-values))
          (last (- (- (length sorted-values) 1)
                   (position value (reverse sorted-values)))))
      (+ 1 (if (= first last)
             first
             (/ (+ first last) 2)))))

  ;; BIN-AND-COUNT
  ;; 
  ;; Make N equal width bins and count the number of elements of sequence that
  ;; belong in each.
  (define (bin-and-count sequence n)
    (let ((smallest  (fold min (car sequence) (cdr sequence)))
          (increment (/ (range sequence)
                        n))
          (bins (make-vector n 0)))
      (let loop ((bin 0))
        (if (= bin n)
          (begin ; PCL: Make sure largest element is included in highest bin count!
            (vector-set! bins (- n 1) (+ (vector-ref bins (- n 1)) 1))
            bins)
          (begin
            (vector-set! bins 
                         bin
                         (length
                           (filter 
                             (lambda (x) (and (>= x (+ smallest (* bin increment)))
                                              (< x  (+ smallest (* (+ 1 bin) increment)))))
                             sequence)))
            (loop (+ 1 bin)))))))

  ;; COMBINATIONS
  ;; How many ways to take n things taken k at a time, when order does not matter
  ;; Rosner 90
  (define (combinations n k)
    (/ (factorial n)
       (* (factorial k)
          (factorial (- n k)))))

  (define (error-function x)
    (let-values (((erf ignore) (gamma-incomplete 0.5 (square x))))
                (if (>= x 0.0)
                  erf
                  (- erf))))

  (define (factorial n)
    (define (fact-n n result)
      (if (<= n 1)
        result
        (fact-n (- n 1) (* n result))))
    (fact-n n 1))

  ;; assumes p-function is monotonic (for this library)
  ;; -- #:increasing defaults to #f, may be set to #t
  (define (find-critical-value p-function p-value . args) ; adopted from CLASP 1.4.3
    (let ((increasing? (get-keyword #:increasing args (lambda () #f)))
          (x-tolerance (get-keyword #:x-tolerance args (lambda () 0.00001)))
          (y-tolerance (get-keyword #:y-tolerance args (lambda () 0.00001))))
      (let* ((x-low 0)
             (fx-low (p-function x-low))
             (x-high 1)
             (fx-high (p-function x-high)))
        ; set initial bounding values
        (let loop ()
          (unless ((if increasing? <= >=) fx-low p-value fx-high)
            (set! x-low x-high)
            (set! fx-low fx-high)
            (set! x-high (* 2.0 x-high))
            (set! fx-high (p-function x-high))
            (loop)))
        ; binary search
        (let loop ()
          (let* ((x-mid (/ (+ x-low x-high) 2.0))
                 (fx-mid (p-function x-mid))
                 (y-diff (abs (- fx-mid p-value)))
                 (x-diff (- x-high x-low)))
            (if (or (< x-diff x-tolerance)
                    (< y-diff y-tolerance))
              x-mid
              ;; depending on whether p-function is monotonically increasing with x,
              ;; if the function is above the desired p-value ... 
              (begin
                (if ((if increasing? > <) p-value fx-mid)
                  ;; then critical value is in the upper half
                  (begin (set! x-low x-mid)
                         (set! fx-low fx-mid))
                  ;; otherwise it's in the lower half
                  (begin (set! x-high x-mid)
                         (set! fx-high fx-mid)))
                (loop))))))))

  ;; FISHER-Z-TRANSFORM
  ;; Rosner 458
  ;; Transforms the correlation coefficient to an approximately 
  ;; normal distribution.
  (define (fisher-z-transform r)
    (* 0.5 (log (/ (+ 1 r) (- 1 r)))))

  ;; taken from TSPL 3
  (define (list-sort comparison items)
    (define (dosort pred? ls n)
      (if (= n 1)
        (list (car ls))
        (let ((i (quotient n 2)))
          (domerge pred?
                   (dosort pred? ls i)
                   (dosort pred? (list-tail ls i) (- n i))))))
    (define (domerge pred? l1 l2)
      (cond ((null? l1) l2)
            ((null? l2) l1)
            ((pred? (car l2) (car l1))
             (cons (car l2) (domerge pred? l1 (cdr l2))))
            (else
              (cons (car l1) (domerge pred? (cdr l1) l2)))))
    (if (null? items)
      items
      (dosort comparison items (length items))))

  ;; PERMUTATIONS
  ;; How many ways to take n things taken k at a time, when order matters
  ;; Rosner 88
  (define (permutations n k)
    (fold * 1 (iota k n -1)))

  (define (position item items)
    (let ((index (list-index (lambda (x) (equal? item x))
                             items)))
      (if (number? index)
        index
        (error "Position: item not in list"))))

  (define (cumsum sequence)
    (if (null? sequence)
        0
        (reverse (fold (lambda (x ax) (cons (+ x (car ax)) ax)) (list (car sequence)) (cdr sequence)))))

  (define (sign x)
    (cond ((negative? x) -1)
          ((positive? x) 1)
          ((zero? x) 0)
          (else '())))

  (define (square x) 
    (* x x))

  ;; TODO
  (define (underflow-goes-to-zero x)
    x)

  (define (vector-sort comparison items)
    (list->vector (list-sort comparison (vector->list items))))

  ;; RANDOM-NORMAL
  ;; returns a random number with mean and standard-distribution as specified.
  (define (random-normal mean sd)
    (+ mean (* sd (/ (random 1000000) 1000000))))

  ;; RANDOM-PICK
  ;; Random selection from list
  (define (random-pick items)
    (if (and (list? items) (not (null? items)))
      (list-ref items (random (length items)))
      #f))

  ;; RANDOM-SAMPLE
  ;; Return a random sample of size N from sequence, without replacement.  
  ;; If N is equal to or greater than the length of the sequence, return 
  ;; the entire sequence.
  (define (random-sample n items)
    (cond ((<= n 0) 
           '())
          ((>= n (length items)) 
           items)
          (else
            (let loop ((remaining items)
                       (kept '()))
              (if (= (length kept) n)
                kept
                (let ((one (random-pick remaining)))
                  (loop (delete one remaining)
                        (cons one kept))))))))

  ;; RANDOM-WEIGHTED-SAMPLE Return a random sample of size M from
  ;; sequence of length N, without replacement, where each element has
  ;; a defined probability of selection (weight) W.  If M is equal to
  ;; or greater to N, return the entire sequence.
  (define (random-weighted-sample m items weights)
    (let ((n (length items)))
      (cond ((<= m 0) '())
            ((>= m n) items)
            (else
             (let* ((keys (map (lambda (w) (expt (random-uniform) (/ 1 w))) weights))
                    (sorted-items (list-sort (lambda (x y) (> (car x) (car y))) (zip keys items))))
               (map cadr (take sorted-items m)))
             ))
      ))

               
  ;; ---------------------------------------------------------------------------
  ;; Descriptive statistics

  ;; MEAN
  ;; Rosner 10
  (define (mean sequence)
    (if (null? sequence)
      0
      (/ (fold + 0 sequence) (length sequence))))

  ;; MEDIAN
  ;; Rosner 12 (and 19)
  (define (median sequence)
    (percentile sequence 50))

  ;; MODE
  ;; Rosner 14
  ;; Returns two values: a list of the modes and the number of times they occur
  (define (mode sequence)
    (if (null? sequence)
      (error "Mode: Sequence must not be null")
      (let ((count-table (make-hash-table eqv?))
            (modes '())
            (mode-count 0))
        (for-each (lambda (item) 
                    (hash-table-set! count-table
                                     item
                                     (+ 1 (hash-table-ref count-table item (lambda () 0)))))
                  sequence)
        (for-each (lambda (key) 
                    (let ((val (hash-table-ref count-table key (lambda () #f))))
                      (cond ((> val mode-count) ; keep mode
                             (set! modes (list key))
                             (set! mode-count val))
                            ((= val mode-count) ; store multiple modes
                             (set! modes (cons key modes))))))
                  (hash-table-keys count-table))
        (cond ((every number? modes) (set! modes (list-sort < modes)))
              ((every string? modes) (set! modes (list-sort string< modes)))
              )
        (values modes mode-count))))

  ;; GEOMETRIC-MEAN
  ;; Rosner 16
  (define (geometric-mean sequence . args)
    (let ((base (if (null? args) 10 (car args))))
      (expt base (mean (map (lambda (x) (/ (log x)
                                           (log base))) 
                            sequence)))))

  ;; RANGE
  ;; Rosner 18
  (define (range sequence)
    (if (null? sequence)
      0
      (- (fold max (car sequence) (cdr sequence))
         (fold min (car sequence) (cdr sequence)))))

  ;; PERCENTILE
  ;; Rosner 19
  (define (percentile sequence percent)
    (if (null? sequence)
      (error "Percentile: Sequence must not be null")
      (let* ((sorted-vec (vector-sort < (apply vector sequence)))
             (n (vector-length sorted-vec))
             (k (* n (/ percent 100)))
             (floor-k (floor k)))
        (if (= k floor-k)
          (/ (+ (vector-ref sorted-vec k)
                (vector-ref sorted-vec (- k 1)))
             2)
          (vector-ref sorted-vec floor-k)))))

  ;; VARIANCE
  ;; Rosner 21
  (define (variance sequence)
    (if (< (length sequence) 2)
      (error "variance: sequence must contain at least two elements")
      (let ((mean1 (mean sequence)))
        (/ (fold + 0 (map (lambda (x) (square (- mean1 x))) sequence))
           (- (length sequence) 1)))))

  ;; STANDARD-DEVIATION
  ;; Rosner 21
  (define (standard-deviation sequence)
    (sqrt (variance sequence)))

  ;; COEFFICIENT-OF-VARIATION
  ;; Rosner 24
  (define (coefficient-of-variation sequence)
    (* 100 
       (/ (standard-deviation sequence)
          (mean sequence))))

  ;; STANDARD-ERROR-OF-THE-MEAN
  ;; Rosner 172
  (define (standard-error-of-the-mean sequence)
    (/ (standard-deviation sequence)
       (sqrt (length sequence))))

  ;; MEAN-SD-N
  ;; Combined calculation, returns mean, standard deviation and length of 
  ;; sequence of numbers
  (define (mean-sd-n sequence)
    (values (mean sequence)
            (standard-deviation sequence)
            (length sequence)))

  ;; ---------------------------------------------------------------------------
  ;; Distributional functions

  ;; BINOMIAL-PROBABILITY
  ;; exact: Rosner 93, approximate 105
  ;;
  ;; P(X=k) for X a binomial random variable with parameters n & p.
  ;; Binomial expectations for seeing k events in N trials, each having 
  ;; probability p.  Use the Poisson approximation if N>100 and P<0.01.
  (define (binomial-probability n k p)
    (if (and (> n 100)
             (< p 0.01))
      (poisson-probability (* n p) k)
      (* (combinations n k)
         (expt p k)
         (expt (- 1 p) (- n k)))))

  ;; BINOMIAL-CUMULATIVE-PROBABILITY
  ;; Rosner 94
  ;;
  ;; P(X<k) for X a binomial random variable with parameters n & p.
  ;; Binomial expectations for fewer than k evens in N trials, each 
  ;; having probability p.
  (define (binomial-cumulative-probability n k p)
    (let loop ((sum-upto-k-1 0.0)
               (i 0))
      (if (= i k)
        sum-upto-k-1
        (loop (+ sum-upto-k-1 (binomial-probability n i p))
              (+ 1 i)))))

  ;; BINOMIAL-GE-PROBABILITY
  ;; Rosner 94
  ;;
  ;; The probability of k or more occurrences in N events, each with 
  ;; probability p.
  (define (binomial-ge-probability n k p)
    (- 1 (binomial-cumulative-probability n k p)))

  ;; for convenience later
  (define (binomial-le-probability n k p)
    (let ((sum-up-to-k 0))
      (let loop ((i 0))
        (if (= i (+ 1 k))
          sum-up-to-k
          (set! sum-up-to-k (+ sum-up-to-k (binomial-probability n i p)))))))

  ;; POISSON-PROBABILITY
  ;; Rosner 100
  ;;
  ;; Probability of seeing k events over a time period when the expected 
  ;; number of events over that time is mu.
  (define (poisson-probability mu k)
    (/ (* (exp (- mu)) (expt mu k))
       (factorial k)))

  ;; POISSON-CUMULATIVE-PROBABILITY
  ;; Rosner 197
  ;;
  ;; Probability of seeing fewer than K events over a time period when the 
  ;; expected number of events over that time is mu.
  (define (poisson-cumulative-probability mu k)
    (if (< k 170)
      (let loop ((sum 0)
                 (x 0))
        (if (= x k)
          sum
          (loop (+ sum (poisson-probability mu x))
                (+ x 1))))
      (- 1 (let-values (((gi ignore) (gamma-incomplete k mu))) gi))))

  ;; POISSON-GE-PROBABILITY
  ;; Probability of X or more events when expected number of events is mu.
  (define (poisson-ge-probability mu x)
    (- 1 (poisson-cumulative-probability mu x)))

  ;; NORMAL-PDF
  ;; Rosner 115
  ;; The probability density function (PDF) for a normal distribution 
  ;; with mean mu and variance sigma-squared at point x.
  (define (normal-pdf x mu sigma-squared)
    (* (/ (sqrt (* 2 PI sigma-squared)))
       (exp (- (/ (square (- x mu))
                  (* 2 sigma-squared))))))

  ;; CONVERT-TO-STANDARD-NORMAL
  ;; Rosner 130
  ;; Convert X from a Normal distribution with mean mu and variance sigma
  ;; to standard normal
  (define (convert-to-standard-normal x mu sigma)
    (/ (- x mu) sigma))

  ;; PHI
  ;; the CDF of standard normal distribution
  ;; Rosner 125
  (define (phi x)
    (* 0.5 (+ 1.0 (error-function (/ x (sqrt 2.0))))))

  ;; Z
  ;; The inverse normal function, P(X<Zu) = u where X is distributed as 
  ;; the standard normal.  Uses binary search.
  ;; Rosner 128
  (define (z percentile . args)
    (let ((epsilon (get-keyword #:epsilon args (lambda () 1e-15))))
      (let loop ((min-value -9e0)
                 (max-value 9e0)
                 (guess 0.0))
        (if (< (- max-value min-value) epsilon)
          guess
          (if (< (phi guess) percentile)
            (loop guess max-value (mean (list guess max-value)))
            (loop min-value guess (mean (list min-value guess))))))))

  ;; T-DISTRIBUTION
  ;; Rosner 178
  ;; Returns the point which is the indicated percentile in the T distribution
  ;; with dof degrees of freedom
  (define (t-distribution dof percentile)
    (find-critical-value
      (lambda (x) (t-significance x dof #:tails ':positive))
      (- 1 percentile)))

  ;; CHI-SQUARE
  ;; Rosner 187
  ;; Returns the point which is the indicated percentile in the Chi Square
  ;; distribution with dof degrees of freedom.
  (define (chi-square dof percentile)
    (find-critical-value (lambda (x) (chi-square-cdf x dof))
                         (- 1 percentile)
                         #:increasing #t))

  ;; CHI-SQUARE-CDF
  ;; Computes the left hand tail area under the chi square
  ;; distribution under dof degrees of freedom up to X. 
  (define (chi-square-cdf x dof)
    (let-values (((cdf ignore) (gamma-incomplete (* 0.5 dof) (* 0.5 x))))
                cdf))

  ;; ---------------------------------------------------------------------------
  ;; Confidence intervals
  ;;

  ;; BINOMIAL-PROBABILITY-CI
  ;; Rosner 193 (approximate) & 194 (exact)

  ;; Confidence intervals on a binomial probability.  If a binomial
  ;; probability of p has been observed in N trials, what is the 1-alpha
  ;; confidence interval around p?  Approximate (using normal theory
  ;; approximation) when npq >= 10 unless told otherwise

  (define (binomial-probability-ci n p alpha . args)
    (let ((exact (get-keyword #:exact? args (lambda () #f))))
      (if (and (> (* n p (- 1 p)) 10) 
               (not exact))
        (let ((difference (* (z (- 1 (/ alpha 2)))
                             (sqrt (/ (* p (- 1 p)) n)))))
          (values (- p difference) (+ p difference)))
        (values (find-critical-value
                  (lambda (p1) (binomial-cumulative-probability n (floor (* p n)) p1))
                  (- 1 (/ alpha 2)))
                (find-critical-value
                  (lambda (p2) (binomial-cumulative-probability n (+ 1 (floor (* p n))) p2))
                  (/ alpha 2))))))

  ;; POISSON-MU-CI
  ;; Confidence interval for the Poisson parameter mu
  ;; Rosner 197
  ;;
  ;; Given x observations in a unit of time, what is the 1-alpha confidence
  ;; interval on the Poisson parameter mu (= lambda*T)?
  ;;
  ;; Since find-critical-value assumes that the function is monotonic
  ;; increasing, adjust the value we are looking for taking advantage of
  ;; reflectiveness
  (define (poisson-mu-ci x alpha)
    (values
      (find-critical-value
        (lambda (mu) (poisson-cumulative-probability mu (- x 1)))
        (- 1 (/ alpha 2)))
      (find-critical-value
        (lambda (mu) (poisson-cumulative-probability mu x))
        (/ alpha 2))))

  ;; NORMAL-MEAN-CI
  ;; Confidence interval for the mean of a normal distribution
  ;; Rosner 180
  ;; The 1-alpha percent confidence interval on the mean of a normal
  ;; distribution with parameters mean, sd & n. 
  (define (normal-mean-ci mean sd n alpha)
    (let ((t-value (t-distribution (- n 1) (- 1 (/ alpha 2)))))
      (values (- mean (* t-value (/ sd (sqrt n))))
              (+ mean (* t-value (/ sd (sqrt n)))))))

  ;; NORMAL-MEAN-CI-ON-SEQUENCE
  ;;
  ;; The 1-alpha confidence interval on the mean of a sequence of numbers
  ;; drawn from a Normal distribution.
  (define (normal-mean-ci-on-sequence sequence alpha)
    (let-values (((mean sd n) (mean-sd-n sequence)))
                (normal-mean-ci mean sd n alpha)))

  ;; NORMAL-VARIANCE-CI
  ;; Rosner 190
  ;; The 1-alpha confidence interval on the variance of a sequence of numbers
  ;; drawn from a Normal distribution.
  (define (normal-variance-ci variance n alpha)
    (let ((chi-square-low (chi-square (- n 1) (- 1 (/ alpha 2))))
          (chi-square-high (chi-square (- n 1) (/ alpha 2)))
          (the-numerator (* (- n 1) variance)))
      (values (/ the-numerator chi-square-low) 
              (/ the-numerator chi-square-high))))

  ;; NORMAL-VARIANCE-CI-ON-SEQUENCE
  ;;
  (define (normal-variance-ci-on-sequence sequence alpha)
    (let ((variance (variance sequence))
          (n (length sequence)))
      (normal-variance-ci variance n alpha)))

  ;; NORMAL-SD-CI
  ;; Rosner 190
  ;; As above, but a confidence inverval for the standard deviation.
  (define (normal-sd-ci sd n alpha)
    (let-values (((low high) (normal-variance-ci (square sd) n alpha)))
                (values (sqrt low) (sqrt high))))

  ;; NORMAL-SD-CI-ON-SEQUENCE
  (define (normal-sd-ci-on-sequence sequence alpha)
    (let ((sd (standard-deviation sequence))
          (n (length sequence)))
      (normal-sd-ci sd n alpha)))

  ;; ---------------------------------------------------------------------------
  ;; Hypothesis testing 
  ;;

  ;; Z-TEST
  ;; Rosner 228

  ;; The significance of a one sample Z test for the mean of a normal
  ;; distribution with known variance.  mu is the null hypothesis mean, x-bar
  ;; is the observed mean, sigma is the standard deviation and N is the number
  ;; of observations.  If tails is :both, the significance of a difference
  ;; between x-bar and mu.  If tails is :positive, the significance of x-bar
  ;; is greater than mu, and if tails is :negative, the significance of x-bar
  ;; being less than mu.  Returns a p value.
  (define (z-test x-bar n . args)
    (let ((mu (get-keyword #:mu args (lambda () 0)))
          (sigma (get-keyword #:sigma args (lambda () 1)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let ((z (/ (- x-bar mu) (/ sigma (sqrt n)))))
        (case tails
          ((:both) (if (< z 0)
                     (* 2 (phi z))
                     (* 2 (- 1 (phi z)))))
          ((:negative) (phi z))
          ((:positive) (- 1 (phi z)))))))

  ;; Z-TEST-ON-SEQUENCE
  ;; Returns a p value for significance of a sample compared with 
  ;; given mean and standard deviation for the null hypothesis.
  (define (z-test-on-sequence sequence . args)
    (let ((mu (get-keyword #:mu args (lambda () 0)))
          (sigma (get-keyword #:sigma args (lambda () 1)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let ((x-bar (mean sequence))
            (n (length sequence)))
        (z-test x-bar n #:mu mu #:sigma sigma #:tails tails))))

  ;; T-TEST-ONE-SAMPLE
  ;; T-TEST-ONE-SAMPLE-ON-SEQUENCE
  ;; Rosner 216

  ;; The significance of a one sample T test for the mean of a normal
  ;; distribution with unknown variance.  X-bar is the observed mean, sd is
  ;; the observed standard deviation, N is the number of observations and mu
  ;; is the test mean.  -ON-SAMPLE is the same, but calculates the observed
  ;; values from a sequence of numbers.
  (define (t-test-one-sample x-bar sd n mu . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (t-significance  (/ (- x-bar mu) (/ sd (sqrt n))) (- n 1) #:tails tails)))

  (define (t-test-one-sample-on-sequence sequence mu . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (let-values (((mean sd n) (mean-sd-n sequence)))
                  (t-test-one-sample mean sd n mu #:tails tails))))

  ;; T-TEST-PAIRED
  ;; Rosner 276

  ;; The significance of a paired t test for the means of two normal
  ;; distributions in a longitudinal study.  D-bar is the mean difference, sd
  ;; is the standard deviation of the differences, N is the number of pairs. 
  (define (t-test-paired d-bar sd n . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (t-significance (/ d-bar (/ sd (sqrt n))) (- n 1) #:tails tails)))

  ;; T-TEST-PAIRED-ON-SEQUENCES
  ;; Rosner 276

  ;; The significance of a paired t test for means of two normal distributions
  ;; in a longitudinal study.  Before is a sequence of before values, after is
  ;; the sequence of paired after values (which must be the same length as the
  ;; before sequence).
  (define (t-test-paired-on-sequences before after . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (let-values (((mean sd n) (mean-sd-n (map - before after))))
                  (t-test-paired mean sd n #:tailed tails))))

  ;; T-TEST-TWO-SAMPLE
  ;; Rosner  282, 294, 297 

  ;; The significance of the difference of two means (x-bar1 and x-bar2) with
  ;; standard deviations sd1 and sd2, and sample sizes n1 and n2 respectively.
  ;; The form of the two sample t test depends on whether the sample variances
  ;; are equal or not.   If the variable variances-equal? is :test, then we
  ;; use an F test and the variance-significance-cutoff to determine if they
  ;; are equal.  If the variances are equal, then we use the two sample t test
  ;; for equal variances.  If they are not equal, we use the Satterthwaite
  ;; method, which has good type I error properties (at the loss of some
  ;; power).  
  (define (t-test-two-sample x-bar1 sd1 n1 x-bar2 sd2 n2 . args)
    (let ((variances-equal? (get-keyword #:variances-equal? args (lambda () ':test)))
          (variances-significance-cutoff (get-keyword #:variance-significance-cutoff args (lambda () 0.05)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let ((t-statistic #f)
            (dof #f))
        (if (case variances-equal?
              ((:test)
               (> (f-test (square sd1) n1 (square sd2) n2 #:tails tails)
                  variances-significance-cutoff))
              ((#t :yes :equal)
               #t)
              ((#f :no :unequal)
               #f))
          (let ((s (sqrt (/ (+ (* (- n1 1) (square sd1))
                               (* (- n2 1) (square sd2)))
                            (+ n1 n2 -2)))))
            (set! t-statistic (/ (- x-bar1 x-bar2)
                                 (* s (sqrt (+ (/ n1) (/ n2))))))
            (set! dof (+ n1 n2 -2)))
          (let ((variance-ratio-1 (/ (square sd1) n1))
                (variance-ratio-2 (/ (square sd2) n2)))
            (set! t-statistic (/ (- x-bar1 x-bar2)
                                 (sqrt (+ variance-ratio-1 variance-ratio-2))))
            (set! dof (round (/ (square (+ variance-ratio-1 variance-ratio-2))
                                (+ (/ (square variance-ratio-1) (- n1 1))
                                   (/ (square variance-ratio-2) (- n2 1))))))))
        (t-significance t-statistic dof #:tails tails))))

  ;; T-TEST-TWO-SAMPLE-ON-SEQUENCES
  ;; Same as above, but providing the sequences rather than the summaries
  (define (t-test-two-sample-on-sequences sequence1 sequence2 . args)
    (let ((variance-significance-cutoff (get-keyword #:variance-significance-cutoff args (lambda () 0.05)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let-values (((x-bar-1 sd1 n1) (mean-sd-n sequence1))
                   ((x-bar-2 sd2 n2) (mean-sd-n sequence2)))
                  (t-test-two-sample x-bar-1 sd1 n1 x-bar-2 sd2 n2
                                     #:variances-equal? ':test 
                                     #:variance-significance-cutoff variance-significance-cutoff 
                                     #:tails tails))))

  ;; F-TEST
  ;; Rosner 290
  ;; F test for the equality of two variances
  (define (f-test variance1 n1 variance2 n2 . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (let ((significance (f-significance (/ variance1 variance2) (- n1 1) (- n2 1)
                                          (not (eq? tails ':both)))))
        (case tails
          ((:both) significance)
          ((:positive) (if (> variance1 variance2) significance (- 1 significance)))
          ((:negative) (if (< variance1 variance2) significance (- 1 significance)))))))

  ;; CHI-SQUARE-TEST-ONE-SAMPLE
  ;; Rosner 246
  ;; The significance of a one sample Chi square test for the variance of a 
  ;; normal distribution.  Variance is the observed variance, N is the number 
  ;; of observations, and sigma-squared is the test variance.
  (define (chi-square-test-one-sample variance n sigma-squared . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (let ((cdf (chi-square-cdf (/ (* (- n 1) variance)
                                    sigma-squared)
                                 (- n 1))))
        (case tails
          ((:negative)
           cdf)
          ((:positive)
           (- 1 cdf))
          ((:both)
           (if (<= variance sigma-squared)
             (* 2 cdf)
             (* 2 (- 1 cdf))))))))

  ;; BINOMIAL-TEST-ONE-SAMPLE
  ;; Rosner 249
  ;; The significance of a one sample test for the equality of an observed 
  ;; probability p-hat to an expected probability p under a binomial 
  ;; distribution with N observations.  Use the normal theory approximation if 
  ;; n*p(1-p) > 10 (unless the exact flag is true).
  (define (binomial-test-one-sample p-hat n p . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both)))
          (exact (get-keyword #:exact? args (lambda () #f))))
      (let ((q (- 1 p)))
        (if (and (> (* n p q) 10) (not exact))
          (let ((z (/ (- p-hat p) (sqrt (/ (* p q) n)))))
            (case tails
              ((:negative) (phi z))
              ((:positive) (- 1 (phi z)))
              ((:both) (* 2 (if (<= p-hat p) (phi z) (- 1 (phi z)))))))
          (let* ((observed (round (* p-hat n)))
                 (probability-more-extreme
                   (if (<= p-hat p)
                     (binomial-cumulative-probability n observed p)
                     (binomial-ge-probability n observed p))))
            (case tails
              ((:negative :positive) probability-more-extreme)
              ((:both) (min (* 2 probability-more-extreme) 1.0))))))))

  ;; BINOMIAL-TEST-TWO-SAMPLE
  ;; Rosner 357
  ;; Are the observed probabilities of an event (p-hat1 and p-hat2) in N1/N2
  ;; trials different?  The normal theory method implemented here.  The exact 
  ;; test is Fisher's contingency table method, below.
  (define (binomial-test-two-sample p-hat1 n1 p-hat2 n2 . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both)))
          (exact (get-keyword #:exact? args (lambda () #f))))
      (let* ((p-hat (/ (+ (* p-hat1 n1) (* p-hat2 n2)) (+ n1 n2)))
             (q-hat (- 1 p-hat))
             (z (/ (- (abs (- p-hat1 p-hat2)) (+ (/ (* 2 n1)) (/ (* 2 n2))))
                   (sqrt (* p-hat q-hat (+ (/ n1) (/ n2)))))))
        (if (and (> (* n1 p-hat q-hat) 5)
                 (> (* n2 p-hat q-hat) 5)
                 (not exact))
          (* (- 1 (phi z)) (if (eq? tails ':both) 2 1))
          (fisher-exact-test (inexact->exact (round (* p-hat1 n1)))
                             (inexact->exact (round (* (- 1 p-hat1) n1)))
                             (inexact->exact (round (* p-hat2 n2)))
                             (inexact->exact (round (* (- 1 p-hat2) n2)))
                             tails)))))

  ;; FISHER-EXACT-TEST
  ;; Rosner 371
  ;; Fisher's exact test.  Gives a p value for a particular 2x2 contingency table
  (define (fisher-exact-test a b c d . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (define (table-probability ta tb tc td)
        (let ((tn (+ ta tb tc td)))
          (/ (* 1.0 (factorial (+ ta tb)) (factorial (+ tc td))
                (factorial (+ ta tc)) (factorial (+ tb td)))
             (* 1.0 (factorial tn) (factorial ta) (factorial tb)
                (factorial tc) (factorial td)))))
      (let* ((row-margin1 (+ a b))
             (row-margin2 (+ c d))
             (column-margin1 (+ a c))
             (column-margin2 (+ b d))
             (n (+ a b c d))
             (table-probabilities (make-vector (+ 1 (min row-margin1
                                                         row-margin2
                                                         column-margin1
                                                         column-margin2))
                                               0)))
        ;; rearrange so that the first row and column marginals are 
        ;; smallest.  Only need to change first margins and a.
        (cond ((and (< row-margin2 row-margin1)
                    (< column-margin2 column-margin1))
               (set! a d)
               (set! row-margin1 row-margin2)
               (set! column-margin1 column-margin2))
              ((< row-margin2 row-margin1)
               (set! a c)
               (set! row-margin1 row-margin2))
              ((< column-margin2 column-margin1)
               (set! a b)
               (set! column-margin1 column-margin2)))
        (let loop ((i 0))
          (unless (= i (vector-length table-probabilities))
            (let* ((test-a i)
                   (test-b (- row-margin1 i))
                   (test-c (- column-margin1 i))
                   (test-d (- n (+ test-a test-b test-c))))
              (vector-set! table-probabilities
                           i 
                           (table-probability test-a test-b test-c test-d)))
            (loop (+ 1 i))))
        (let ((above 0.0)
              (below 0.0))
          (let loop ((i 0))
            (unless (= i (vector-length table-probabilities))
              (if (< i (+ 1 a))
                (set! above (+ above (vector-ref table-probabilities i)))
                (set! below (+ below (vector-ref table-probabilities i))))
              (loop (+ 1 i))))
          (case tails
            ((:both) (* 2 (min above below)))
            ((:positive) below)
            ((:negative) above))))))

  ;; MCNEMARS-TEST
  ;; Rosner 379 and 381

  ;; McNemar's test for correlated proportions, used for longitudinal 
  ;; studies.  Look only at the number of discordant pairs (one treatment 
  ;; is effective and the other is not).  If the two treatments are A 
  ;; and B, a-discordant-count is the number where A worked and B did not,
  ;; and b-discordant-count is the number where B worked and A did not.
  (define (mcnemars-test a-discordant-count b-discordant-count . args)
    (let ((exact (get-keyword #:exact? args (lambda () #f))))
      (let ((n (+ a-discordant-count b-discordant-count)))
        (if (and (> n 20) (not exact))
          (let ((x2 (/ (square (- (abs (- a-discordant-count b-discordant-count)) 1))
                       n)))
            (- 1 (chi-square-cdf x2 1)))
          (cond ((= a-discordant-count b-discordant-count) 
                 1.0)
                ((< a-discordant-count b-discordant-count)
                 (* 2 (binomial-le-probability n a-discordant-count 0.5)))
                (else
                  (* 2 (binomial-ge-probability n a-discordant-count 0.5))))))))

  ;; POISSON-TEST-ONE-SAMPLE
  ;; Rosner 256 (approximation on 259)
  ;; The significance of a one sample test for the equality of an observed 
  ;; number of events (observed) and an expected number mu under the 
  ;; poisson distribution.  Normal theory approximation is not that great, 
  ;; so don't use it unless told.
  (define (poisson-test-one-sample observed mu . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both)))
          (approximate (get-keyword #:approximate? args (lambda () #f))))
      (if approximate
        (let ((x-square (/ (square (- observed mu)) mu)))
          (- 1 (chi-square-cdf x-square 1)))
        (let ((probability-more-extreme 
                (if (< observed mu)
                  (poisson-cumulative-probability mu observed)
                  (poisson-ge-probability mu observed))))
          (case tails
            ((:negative :positive) probability-more-extreme)
            ((:both) (min (* 2 probability-more-extreme) 1.0)))))))

  ;; SIGN-TEST
  ;; Rosner 335-7
  ;; Really, just a special case of the binomial one sample test with p = 1/2.
  ;; The normal theory version has a correction factor to make it a better 
  ;; approximation.
  (define (sign-test plus-count minus-count . args)
    (let ((exact (get-keyword #:exact? args (lambda () #f)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let* ((n (+ plus-count minus-count))
             (p-hat (/ plus-count n)))
        (if (or (< n 20) exact)
          (binomial-test-one-sample p-hat n 0.5 :tails tails :exact? #t)
          (let ((area (- 1 (phi (/ (- (abs (- plus-count minus-count)) 1)
                                   (sqrt n))))))
            (if (eq? tails ':both)
              (* 2 area)
              area))))))

  ;; SIGN-TEST-ON-SEQUENCE
  ;; Same as above, but takes two sequences and tests whether the entries 
  ;; in one are different (greater or less) than the other.
  (define (sign-test-on-sequence sequence1 sequence2 . args)
    (let ((exact (get-keyword #:exact? args (lambda () #f)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let* ((differences (map - sequence1 sequence2))
             (plus-count (length (filter positive? differences)))
             (minus-count (length (filter negative? differences))))
        (sign-test plus-count minus-count :exact? exact :tails tails))))

  ;; WILCOXON-SIGNED-RANK-TEST
  ;; Rosner 341
  ;; A test on the ranking of positive and negative differences (are the
  ;; positive differences significantly larger/smaller than the negative
  ;; ones). Assumes a continuous and symmetric distribution of differences,
  ;; although not a normal one.  This is the normal theory approximation,
  ;; which is only valid when N > 15.

  ;; This test is completely equivalent to the Mann-Whitney test.
  (define (wilcoxon-signed-rank-test differences . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (let* ((nonzero-differences (filter (lambda (n) (not (zero? n))) differences))
             (sorted-list (list-sort (lambda (x y) (< (car x) (car y)))
                                     (map (lambda (dif)
                                            (list (abs dif)
                                                  (sign dif)))
                                          nonzero-differences)))
             (distinct-values (delete-duplicates (map car sorted-list)))
             (ties '()))
        (when (< (length nonzero-differences) 16)
          (error 
            "This Wilcoxon Signed-Rank Test (normal approximation method) requires nonzero N > 15"))

        ; add avg-rank to the sorted values
        (for-each (lambda (value)
                    (let ((first (position value (map car sorted-list)))
                          (last (position value (reverse (map car sorted-list)))))
                      (if (= first last)
                        (append (find (lambda (item) (= (car item) value))
                                      sorted-list)
                                (list (+ 1 first)))
                        (let ((number-tied (+ 1 (- last first)))
                              (avg-rank (+ 1 (/ (+ first last) 2)))) ; + 1 since 0 based
                          (set! ties (cons number-tied ties))
                          (let loop ((i 0)
                                     (result '()))
                            (if (= i number-tied)
                              (reverse result)
                              (loop (+ 1 i)
                                    (cons (cons (list-ref (+ first i) sorted-list)
                                                (list avg-rank))
                                          result))))))))
                  distinct-values)
        (set! ties (reverse ties))
        (let* ((direction (if (eq? tails ':negative) -1 1))
               (r1 (fold + 0
                         (map (lambda (entry) 
                                (if (= (cadr entry) direction)
                                  (caddr entry)
                                  0))
                              sorted-list)))
               (n (length nonzero-differences))
               (expected-r1 (/ (* n (+ 1 n)) 4))
               (ties-factor (if ties
                              (/ (fold + 0 
                                       (map (lambda (ti) (- (* ti ti ti) ti))
                                            ties))
                                 48)
                              0))
               (var-r1 (- (/ (* n (+ 1 n) (+ 1 (* 2 n))) 24) ties-factor))
               (T-score (/ (- (abs (- r1 expected-r1)) 0.5) (sqrt (var-r1)))))
          (* (if (eq? tails ':both) 2 1)
             (- 1 (phi T-score)))))))

  (define (wilcoxon-signed-rank-test-on-sequences sequence1 sequence2 . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (wilcoxon-signed-rank-test (map - sequence1 sequence2) tails)))

  ;; CHI-SQUARE-TEST-RXC
  ;; Rosner 395
  ;; Takes contingency-table, an RxC array, and returns the significance of
  ;; the relationship between the row variable and the column variable.  Any
  ;; difference in proportion will cause this test to be significant --
  ;; consider using the test for trend instead if you are looking for a
  ;; consistent change.
  ;; contingency-table is an array, as defined using srfi-63
  (define (chi-square-test-rxc contingency-table)
    (let* ((rows (car (array-dimensions contingency-table)))
           (columns (cadr (array-dimensions contingency-table)))
           (row-marginals (make-vector rows 0.0))
           (column-marginals (make-vector columns 0.0))
           (total 0.0)
           (expected-lt-5 0)
           (expected-lt-1 0)
           (expected-values (make-array '#(0) rows columns))
           (x2 0.0))
      (let loop ((i 0)
                 (j 0))
        (cond ((= j columns)
               (loop (+ 1 i) 0))
              ((= i rows)
               '())
              (else
                (let ((cell (array-ref contingency-table i j)))
                  (vector-set! row-marginals i cell)
                  (vector-set! column-marginals j cell)
                  (set! total (+ total cell))))))
      (let loop ((i 0)
                 (j 0))
        (cond ((= j columns)
               (loop (+ 1 i) 0))
              ((= i rows)
               '())
              (else
                (let ((expected (/ (* (vector-ref row-marginals i) (vector-ref column-marginals j))
                                   total)))
                  (when (< expected 1) (set! expected-lt-1 (+ 1 expected-lt-1)))
                  (when (< expected 5) (set! expected-lt-5 (+ 1 expected-lt-5)))
                  (array-set! expected-values i j expected)))))
      (when (positive? expected-lt-1)
        (error "This test cannot be used when an expected value is less than one"))
      (when (> expected-lt-5 (/ (* rows columns) 5))
        (error "This test cannot be used when more than 1/5 of the expected values are less than 5."))
      (let loop ((i 0)
                 (j 0))
        (cond ((= j columns)
               (loop (+ 1 i) 0))
              ((= i rows) 
               '())
              (else
                (set! x2 (/ (square (- (array-ref contingency-table i j)
                                       (array-ref expected-values i j)))
                            (array-ref expected-values i j))))))
      (- 1 (chi-square-cdf x2 (* (- rows 1) (- columns 1))))))

  ;; CHI-SQUARE-TEST-FOR-TREND
  ;; Rosner 398
  ;; This test works on a 2xk table and assesses if there is an increasing or 
  ;; decreasing trend.  Arguments are equal sized lists counts.  Optionally, 
  ;; provide a list of scores, which represent some numeric attribute of the 
  ;; group.  If not provided, scores are assumed to be 1 to k.
  (define (chi-square-test-for-trend row1-counts row2-counts . args)
    (let ((scores (if (and (not (null? args))
                           (= 1 (length args)))
                    (car args)
                    (let loop ((i 0)
                               (res '()))
                      (if (= i (length row1-counts))
                        (reverse res)
                        (loop (+ 1 i)
                              (cons (+ 1 i) res)))))))
      (let* ((ns (map + row1-counts row2-counts))
             (p-hats (map / row1-counts ns))
             (n (fold + 0 ns))
             (p-bar (/ (fold + 0 row1-counts) n))
             (q-bar (- 1 p-bar))
             (s-bar (mean scores))
             (a (fold + 0.0
                      (map (lambda (p-hat ni s)
                             (* ni (- p-hat p-bar) (- s s-bar)))
                           p-hats ns scores)))
             (b (* 1.0 p-bar q-bar (- (fold + 0 (map (lambda (ni s) (* ni (square s)))
                                                 ns scores))
                                  (/ (square (fold + 0 (map (lambda (ni s) (* ni s))
                                                            ns scores)))
                                     n))))
             (x2 (/ (square a) b))
             (significance (- 1 (chi-square-cdf x2 1))))
        (when (< (* p-bar q-bar n) 5)
          (error 
            "This test is only applicable when N * p-bar * q-bar >= 5"))
        (format #t "~%The trend is ~a, p=~a~&" (if (< a 0) "decreasing" "increasing") significance)
        significance)))

  ;; ---------------------------------------------------------------------------
  ;; Sample size estimates
  ;;

  ;; T-TEST-ONE-SAMPLE-SSE
  ;; Rosner 238
  ;; Returns the number of subjects needed to test whether the mean of a 
  ;; normally distributed sample mu is different from a null hypothesis mean 
  ;; mu-null and variance variance, with alpha, 1-beta and tails as specified.
  (define (t-test-one-sample-sse mu mu-null variance . args)
    (let ((alpha (get-keyword #:alpha args (lambda () 0.05)))
          (one-beta (get-keyword #:1-beta args (lambda () 0.95)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let ((z-beta (z one-beta))
            (z-alpha (z (- 1 (if (eq? tails ':both) (/ alpha 2) alpha)))))
        (inexact->exact 
          (ceiling (/ (* variance (square (+ z-beta z-alpha)))
                      (square (- mu-null mu))))))))

  ;; T-TEST-TWO-SAMPLE-SSE
  ;; Rosner 308
  ;; Returns the number of subjects needed to test whether the mean mu1 of a 
  ;; normally distributed sample (with variance variance1) is different from a 
  ;; second sample with mean mu2 and variance variance2, with alpha, 1-beta 
  ;; and tails as specified.  It is also possible to set a sample size ratio 
  ;; of sample 1 to sample 2.
  (define (t-test-two-sample-sse mu1 variance1 mu2 variance2 . args)
    (let ((sample-ratio (get-keyword #:sample-ratio args (lambda () 1)))
          (alpha (get-keyword #:alpha args (lambda () 0.05)))
          (one-beta (get-keyword #:1-beta args (lambda () 0.95)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let* ((delta2 (square (- mu1 mu2)))
             (z-term (square (+ (z one-beta)
                                (z (- 1 (if (eq? tails ':both)
                                          (/ alpha 2)
                                          alpha))))))
             (n1 (ceiling (/ (* (+ variance1 (/ variance2 sample-ratio)) z-term)
                             delta2))))
        (values (inexact->exact n1)
                (inexact->exact (ceiling (* sample-ratio n1)))))))

  ;; T-TEST-PAIRED-SSE
  ;; Rosner 311
  ;; Returns the number of subjects needed to test whether the differences 
  ;; with mean difference-mu and variance difference-variance, with alpha, 
  ;; 1-beta and tails as specified.
  (define (t-test-paired-sse difference-mu difference-variance . args)
    (let ((alpha (get-keyword #:alpha args (lambda () 0.05)))
          (one-beta (get-keyword #:1-beta args (lambda () 0.95)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (ceiling (/ (* 2 difference-variance
                     (square (+ (z one-beta)
                                (z (- 1 (if (eq? tails ':both)
                                          (/ alpha 2)
                                          alpha))))))
                  (square difference-mu)))))

  ;; BINOMIAL-TEST-ONE-SAMPLE-SSE
  ;; Rosner 254
  ;; Returns the number of subjects needed to test whether an observed 
  ;; probability is significantly different from a particular binomial 
  ;; null hypothesis with a significance alpha and a power 1-beta.
  (define (binomial-test-one-sample-sse p-estimated p-null . args)
    (let ((alpha (get-keyword #:alpha args (lambda () 0.05)))
          (one-beta (get-keyword #:1-beta args (lambda () 0.95)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let ((q-null (- 1 p-null))
            (q-estimated (- 1 p-estimated)))
        (inexact->exact
          (ceiling 
            (/ (* p-null
                  q-null
                  (square (+ (z (- 1 (if (eq? tails ':both)
                                       (/ alpha 2)
                                       alpha)))
                             (* (z one-beta)
                                (sqrt (/ (* p-estimated q-estimated)
                                         (* p-null q-null)))))))
               (square (- p-estimated p-null))))))))

  ;; BINOMIAL-TEST-TWO-SAMPLE-SSE
  ;; Rosner 384
  ;; The number of subjects needed to test if two binomial probabilities 
  ;; are different at a given significance alpha and power 1-beta.  The 
  ;; sample sizes can be unequal; the p2 sample is sample-sse-ratio * the 
  ;; size of the p1 sample.  It can be a one tailed or two tailed test.
  (define (binomial-test-two-sample-sse p1 p2 . args)
    (let ((alpha (get-keyword #:alpha args (lambda () 0.05)))
          (sample-ratio (get-keyword #:sample-ratio args (lambda () 1)))
          (one-beta (get-keyword #:1-beta args (lambda () 0.95)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let* ((q1 (- 1 p1))
             (q2 (- 1 p2))
             (delta (abs (- p1 p2)))
             (p-bar (/ (+ p1 (* sample-ratio p2)) (+ 1 sample-ratio)))
             (q-bar (- 1 p-bar))
             (z-alpha (z (- 1 (if (eq? tails ':both) (/ alpha 2) alpha))))
             (z-beta (z one-beta))
             (n1 (ceiling
                   (/ (square (+ (* (sqrt (* p-bar q-bar (+ 1 (/ sample-ratio))))
                                    z-alpha)
                                 (* (sqrt (+ (* p1 q1) (/ (* p2 q2) sample-ratio)))
                                    z-beta)))
                      (square delta)))))
        (values n1 (ceiling (* sample-ratio n1))))))

  ;; BINOMIAL-TEST-PAIRED-SSE
  ;; Rosner 387

  ;; Sample size estimate for the McNemar (discordant pairs) test.  Pd is the
  ;; projected proportion of discordant pairs among all pairs, and Pa is the
  ;; projected proportion of type A pairs among discordant pairs.  alpha,
  ;; 1-beta and tails are as above.  Returns the number of individuals
  ;; necessary; that is twice the number of matched pairs necessary.
  (define (binomial-test-paired-sse pd pa . args)
    (let ((alpha (get-keyword #:alpha args (lambda () 0.05)))
          (one-beta (get-keyword #:1-beta args (lambda () 0.95)))
          (tails (get-keyword #:tails args (lambda () ':both))))
      (let ((qa (- 1 pa))
            (z-alpha (z (- 1 (if (eq? tails ':both) (/ alpha 2) alpha))))
            (z-beta (z one-beta)))
        (ceiling (/ (square (+ z-alpha (* 2 z-beta (sqrt (* pa qa)))))
                    (* 2 (square (- pa 0.5)) pd))))))

  ;; CORRELATION-SSE
  ;; Rosner 463
  ;;
  ;; Returns the size of a sample necessary to find a correlation of 
  ;; expected value rho with significance alpha and power 1-beta.
  (define (correlation-sse rho . args)
    (let ((alpha (get-keyword #:alpha args (lambda () 0.05)))
          (one-beta (get-keyword #:1-beta args (lambda () 0.95))))
      (inexact->exact
        (ceiling (+ 3 (/ (square (+ (z (- 1 alpha)) (z one-beta)))
                         (square (fisher-z-transform rho))))))))

  ;; ---------------------------------------------------------------------------
  ;; Correlation and regression
  ;;

  ;; LINEAR-REGRESSION
  ;; Rosner 31, 441 for t-test
  ;; Computes the regression equation for a least squares fit of a line to a 
  ;; sequence of points (each a list of two numbers, e.g. '((1.0 0.1) (2.0 0.2)))
  ;; and reports the intercept, slope, correlation coefficient r, R^2, and 
  ;; the significance of the difference of the slope from 0.
  (define (linear-regression points)
    (unless (> (length points) 2)
      (error "Requires at least three points"))
    (let ((xs (map car points))
          (ys (map cadr points)))
      (let* ((x-bar (mean xs))
             (y-bar (mean ys))
             (n (length points))
             (Lxx (fold + 0
                        (map (lambda (xi) (square (- xi x-bar))) xs)))
             (Lyy (fold + 0
                        (map (lambda (yi) (square (- yi y-bar))) ys)))
             (Lxy (fold + 0
                        (map (lambda (xi yi) (* (- xi x-bar) (- yi y-bar)))
                             xs ys)))
             (b (if (zero? Lxx) 0 (/ Lxy Lxx)))
             (a (- y-bar (* b x-bar)))
             (reg-ss (* b Lxy))
             (res-ms (/ (- Lyy reg-ss) (- n 2)))
             (r (/ Lxy (sqrt (* Lxx Lyy))))
             (r2 (/ reg-ss Lyy))
             (t-test (/ b (sqrt (/ res-ms Lxx))))
             (t-sign (t-significance t-test (- n 2) #:tails ':both)))
        (format #t "~%Intercept = ~f, slope = ~f, r = ~f, R^2 = ~f, p = ~f~%"
                a b r r2 t-sign)
        (values a b r r2 t-sign))))

  ;; CORRELATION-COEFFICIENT
  ;; Also called Pearson Correlation
  (define (correlation-coefficient points)
    (let* ((xs (map car points))
           (ys (map cadr points))
           (x-bar (mean xs))
           (y-bar (mean ys)))
      (/ (fold + 0 (map (lambda (xi yi) (* (- xi x-bar)
                                           (- yi y-bar)))
                        xs
                        ys))
         (sqrt (* (fold + 0 (map (lambda (xi) (square (- xi x-bar)))
                                 xs))
                  (fold + 0 (map (lambda (yi) (square (- yi y-bar)))
                                 ys)))))))


  ;; CORRELATION-TEST-TWO-SAMPLE
  ;; Rosner 464
  ;; Test if two correlation coefficients are different.  Uses Fisher's Z test.
  (define (correlation-test-two-sample r1 n1 r2 n2 . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (let* ((z1 (fisher-z-transform r1))
             (z2 (fisher-z-transform r2))
             (my-lambda (/ (- z1 z2)
                           (sqrt (+ (/ (- n1 3))
                                    (/ (- n2 3)))))))
        (case tails
          ((:both) (* 2 (if (<= my-lambda 0) (phi my-lambda) (- 1 (phi my-lambda)))))
          ((:positive) (- 1 (phi my-lambda)))
          ((:negative) (phi my-lambda))))))

  (define (correlation-test-two-sample-on-sequences points1 points2 . args)
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (let ((r1 (correlation-coefficient points1))
            (n1 (length points1))
            (r2 (correlation-coefficient points2))
            (n2 (length points2)))
        (correlation-test-two-sample r1 n1 r2 n2 tails))))

  ;; SPEARMAN-RANK-CORRELATION
  ;; Rosner 498

  ;; Spearman rank correlation computes the relationship between a pair of
  ;; variables when one or both are either ordinal or have a distribution that
  ;; is far from normal.   It takes a list of points (same format as
  ;; linear-regression) and returns the spearman rank correlation coefficient
  ;; and its significance. 
  (define (spearman-rank-correlation points)
    (let ((xis (map car points))
          (yis (map cadr points)))
      (let* ((n (length points))
             (sorted-xis (list-sort < xis))
             (sorted-yis (list-sort < yis))
             (average-x-ranks (map (lambda (x) (average-rank x sorted-xis)) xis))
             (average-y-ranks (map (lambda (y) (average-rank y sorted-yis)) yis))
             (mean-x-rank (mean average-x-ranks))
             (mean-y-rank (mean average-y-ranks))
             (Lxx (fold + 0 
                        (map (lambda (xi-rank) (square (- xi-rank mean-x-rank)))
                             average-x-ranks)))
             (Lyy (fold + 0
                        (map (lambda (yi-rank) (square (- yi-rank mean-y-rank)))
                             average-y-ranks)))
             (Lxy (fold + 0
                        (map (lambda (xi-rank yi-rank)
                               (* (- xi-rank mean-x-rank)
                                  (- yi-rank mean-y-rank)))
                             average-x-ranks average-y-ranks)))
             (rs (if (> (* Lxx Lyy) 0) (/ Lxy (sqrt (* Lxx Lyy))) 0)) ; TODO: think about rs = 1
             (ts (if (= 1 rs) 1 (/ (* rs (sqrt (- n 2))) (sqrt (- 1 (square rs))))))
             (p (t-significance ts (- n 2) #:tails ':both)))
        (format #t "~%Spearman correlation coefficient ~A, p = ~A~%" rs p)
        (values rs p))))

  ;; ---------------------------------------------------------------------------
  ;; Significance test functions
  ;;

  (define (t-significance t-statistic dof . args)
    (set! t-statistic (exact->inexact t-statistic))
    (set! dof (exact->inexact dof))
    (let ((tails (get-keyword #:tails args (lambda () ':both))))
      (let ((a (beta-incomplete (* 0.5 dof) 0.5 (/ dof (+ dof (square t-statistic))))))
        (case tails
          ((:both) 
           a)
          ((:positive)
           (if (positive? t-statistic)
             (* 0.5 a)
             (- 1.0 (* 0.5 a))))
          ((:negative)
           (if (positive? t-statistic)
             (- 1.0 (* 0.5 a))
             (* 0.5 a)))))))

  (define (f-significance f-statistic numerator-dof denominator-dof . args)
    (let ((one-tailed? (get-keyword #:one-tailed? args (lambda () #f))))
      (let ((tail-area (beta-incomplete (* 0.5 denominator-dof)
                                        (* 0.5 numerator-dof)
                                        (/ denominator-dof
                                           (+ denominator-dof 
                                              (* numerator-dof f-statistic))))))
        (if one-tailed? 
          (if (< f-statistic 1)
            (- 1 tail-area)
            tail-area)
          (begin (set! tail-area (* 2.0 tail-area))
                 (if (> tail-area 1.0)
                   (- 2.0 tail-area)
                   tail-area))))))

  (rng-init)
  
  ) ; end of library


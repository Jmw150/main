;; By Claude Marinier, calculates and prints the currently largest known prime number

(cond-expand
  ((and chicken (not full-numeric-tower)) (use numbers))
  (else #f))

(display "Calculating...")
(define big-prime (time (- (expt 2 74207281) 1)))

;; This caused pathological behaviour in Burnikel/Ziegler division,
;; while being lightning fast with "traditional" division.
(display "Perf sanity check...")
(time (begin (quotient (- (expt 2 74207281) 1) (expt 10 100)) #f))

(display "Converting to hex...")
(time (begin (number->string big-prime 16) #f))

;; This will error out on 32-bit systems because the resulting string
;; is too large to be represented (it's 22MiB, max string is 16 MiB).

(display "Converting to decimal...")
(time (begin (number->string big-prime) #f))

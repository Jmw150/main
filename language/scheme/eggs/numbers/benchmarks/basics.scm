;; This is a ridiculously simple benchmark which tests the most
;; primitive/fundamental basic numeric operations.  If these are
;; already slow, you're doomed anyway.

(cond-expand
  ((and chicken (not full-numeric-tower)) (use numbers))
  (else #f))

(define s1 (make-string 28321 #\8))
(define n1 (string->number s1))
(define s2 (make-string 10000 #\9))
(define n2 (string->number s2))

;; Ugly hack to avoid using a macro (yay, Gambit) and avoid simple
;; optimisations that remove all calls to some procedures.
(define (run-procedure proc times)
  (do ((i 0 (+ i 1))
       (n1 n1 (- n1 1)))
      ((= i times) #f)
    (if (zero? (proc n1 n2)) (print "ZERO"))))

(print "+")
(time (run-procedure + 10000))

(print "-")
(time (run-procedure - 10000))

(print "*")
(time (run-procedure * 100))

(print "quotient")
(time (run-procedure quotient 100))

(print "remainder")
(time (run-procedure remainder 100))

(print "GCD")
(time (run-procedure gcd 100))

(print "expt")
(time (expt 17 1000000))

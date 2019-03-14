(import (scheme base)
        (scheme write)
        (srfi 1 lists)
        (only (srfi 13 strings) string-pad-right)
        (srfi 27 random-bits))
 
(define (analytical-function n)
  (define (factorial n)
    (fold * 1 (iota n 1)))
  ; 
  (fold (lambda (i sum)
          (+ sum
             (/ (factorial n) (expt n i) (factorial (- n i)))))
        0 
        (iota n 1)))
 
(define (simulation n runs)
  (define (single-simulation)
    (random-source-randomize! default-random-source)
    (let ((vec (make-vector n #f)))
      (let loop ((count 0)
                 (num (random-integer n)))
        (if (vector-ref vec num)
          count
          (begin (vector-set! vec num #t)
                 (loop (+ 1 count)
                       (random-integer n)))))))
  ;;
  (let loop ((total 0)
             (run runs))
    (if (zero? run)
      (/ total runs)
      (loop (+ total (single-simulation))
            (- run 1)))))
 
(display " N   average   formula   (error) \n")
(display "=== ========= ========= =========\n")
(for-each 
  (lambda (n)
    (let ((simulation (inexact (simulation n 10000)))
          (formula (inexact (analytical-function n))))
      (display 
        (string-append
          " "
          (string-pad-right (number->string n) 3)
          "   "
          (string-pad-right (number->string simulation) 6)
          "   "
          (string-pad-right (number->string formula) 6)
          "   ("
          (string-pad-right 
            (number->string (* 100 (/ (- simulation formula) formula)))
            5)
          "%)"))
      (newline)))
  (iota 20 1))

"
 N   average   formula   (error) 
=== ========= ========= =========
 1     1.0      1.0      (0.0  %)
 2     1.5018   1.5      (0.120%)
 3     1.8863   1.8888   (-0.13%)
 4     2.2154   2.2187   (-0.15%)
 5     2.5082   2.5104   (-0.08%)
 6     2.7613   2.7746   (-0.48%)
 7     3.036    3.0181   (0.591%)
 8     3.2656   3.2450   (0.634%)
 9     3.455    3.4583   (-0.09%)
 10    3.682    3.6602   (0.595%)
 11    3.8233   3.8523   (-0.75%)
 12    4.0409   4.0360   (0.119%)
 13    4.2471   4.2123   (0.825%)
 14    4.3577   4.3820   (-0.55%)
 15    4.5351   4.5458   (-0.23%)
 16    4.7181   4.7042   (0.294%)
 17    4.8877   4.8578   (0.614%)
 18    5.0239   5.0070   (0.336%)
 19    5.1216   5.1521   (-0.59%)
 20    5.2717   5.2935   (-0.41%)
"

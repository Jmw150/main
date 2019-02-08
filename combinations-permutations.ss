(define (combinations n k)
  (do ((i 0 (+ 1 i))
       (res 1 (/ (* res (- n i))
                 (- k i))))
    ((= i k) res)))
 
(define (permutations n k)
  (do ((i 0 (+ 1 i))
       (res 1 (* res (- n i))))
    ((= i k) res)))
 
(display "P(4,2) = ") (display (permutations 4 2)) (newline)
(display "P(8,2) = ") (display (permutations 8 2)) (newline)
(display "P(10,8) = ") (display (permutations 10 8)) (newline)
(display "C(10,8) = ") (display (combinations 10 8)) (newline)
(display "C(20,8) = ") (display (combinations 20 8)) (newline)
(display "C(60,58) = ") (display (combinations 60 58)) (newline)
(display "P(1000,10) = ") (display (permutations 1000 10)) (newline)
(display "P(1000,20) = ") (display (permutations 1000 20)) (newline)
(display "P(15000,2) = ") (display (permutations 15000 3)) (newline)
(display "C(1000,10) = ") (display (combinations 1000 10)) (newline)
(display "C(1000,999) = ") (display (combinations 1000 999)) (newline)
(display "C(1000,1000) = ") (display (combinations 1000 1000)) (newline)
(display "C(15000,14998) = ") (display (combinations 15000 14998)) (newline)
 
"
P(4,2) = 12
P(8,2) = 56
P(10,8) = 1814400
C(10,8) = 45
C(20,8) = 125970
C(60,58) = 1770
P(1000,10) = 955860613004397508326213120000
P(1000,20) = 825928413359200443640727373872992573951185652339949568000000
P(15000,2) = 3374325030000
C(1000,10) = 263409560461970212832400
C(1000,999) = 1000
C(1000,1000) = 1
C(15000,14998) = 112492500
"

(use javahack)

(java-run debug: #t)

(define s (java String.class))
(pp s)
(define s1 ((java String.) "hello!"))
(pp s1)
(do ((n 2 (sub1 n))) ((zero? n))
  (pp ((java .hashCode) s1)) )
(set! s #f)
(set! s1 #f) 

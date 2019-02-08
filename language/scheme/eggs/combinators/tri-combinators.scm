;;;; tri-combinators.scm
;;;; Kon Lovett, Jul '10

(module tri-combinators

  (;export
    tri tri2 tri3 tri-each tri-all)

  (import
    scheme
    chicken)

;;; Hook

;;; Fork

;; Trinary

(define tri
  (case-lambda
    ((c f g h)  (lambda (x) (c (f x) (g x) (h x))))
    ((f g h)    (lambda (c) (tri c f g h)))
    ((c)        (lambda (f g h) (tri c f g h)))
    (()         (lambda (c) (tri c)))))

(define tri2
  (case-lambda
    ((c f g h)  (lambda (x y) (c (f x y) (g x y) (h x y))))
    ((f g h)    (lambda (c) (tri2 c f g h)))
    ((c)        (lambda (f g h) (tri2 c f g h)))
    (()         (lambda (c) (tri2 c)))))

(define tri3
  (case-lambda
    ((c f g h)  (lambda (x y z) (c (f x y z) (g x y z) (h x y z))))
    ((f g h)    (lambda (c) (tri3 c f g h)))
    ((c)        (lambda (f g h) (tri3 c f g h)))
    (()         (lambda (c) (tri3 c)))))

(define (tri-each c f)
  (lambda (x y z) (c (f x) (f y) (f z))) )

(define (tri-all c f g h)
  (lambda xs (c (apply f xs) (apply g xs) (apply h xs))) )

) ;module tri-combinators

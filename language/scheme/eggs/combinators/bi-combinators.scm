;;;; bi-combinators.scm
;;;; Kon Lovett, Jul '10

(module bi-combinators

  (;export
    bi bi2 bi3 bi-each bi-all)

  (import
    scheme
    chicken)

#|
;;; Hook

;; Binary

(define (bi-each-left c f)
  (lambda (x y) (c (f x) (f y) x y)) )

(define (bi-each-right c f)
  (lambda (x y) (c x y (f x) (f y))) )

(define (bi-all-left c f g)
  (lambda xs (apply c (apply f xs) (apply g xs) xs)) )

(define (bi-all-right c f g)
  (lambda xs (apply c (append xs (list (apply f xs) (apply g xs))))) )
|#

;;; Fork

;; Binary

(define bi
  (case-lambda
    ((c f g)  (lambda (x) (c (f x) (g x))))
    ((f g)    (lambda (c) (bi c f g)))
    ((c)      (lambda (f g) (bi c f g)))
    (()       (lambda (c) (bi c)))))

(define bi2
  (case-lambda
    ((c f g)  (lambda (x y) (c (f x y) (g x y))))
    ((f g)    (lambda (c) (bi2 c f g)))
    ((c)      (lambda (f g) (bi2 c f g)))
    (()       (lambda (c) (bi2 c)))))

(define bi3
  (case-lambda
    ((c f g)  (lambda (x y z) (c (f x y z) (g x y z))))
    ((f g)    (lambda (c) (bi3 c f g)))
    ((c)      (lambda (f g) (bi3 c f g)))
    (()       (lambda (c) (bi3 c)))))

(define (bi-each c f)
  (lambda (x y) (c (f x) (f y))) )

(define (bi-all c f g)
  (lambda xs (c (apply f xs) (apply g xs))) )

) ;module bi-combinators

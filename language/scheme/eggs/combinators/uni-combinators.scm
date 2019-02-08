;;;; uni-combinators.scm
;;;; Kon Lovett, Jul '10

(module uni-combinators

  (;export
    uni uni2 uni3 uni-each uni-all)

  (import
    scheme
    chicken)

#|
;;; Hook

;; Unary

(define uni-left
  (case-lambda
    ((c f)  (lambda (x) (c (f x) x)))
    ((c)    (lambda (f) (uni-left c f)))
    (()     (lambda (c) (uni-left c)))))

(define uni-right
  (case-lambda
    ((c f)  (lambda (x) (c x (f x))))
    ((c)    (lambda (f) (uni-right c f)))
    (()     (lambda (c) (uni-right c)))))

(define uni2-left
  (case-lambda
    ((c f)  (lambda (x y) (c (f x y) x y)))
    ((c)    (lambda (f) (uni2-left c f)))
    (()     (lambda (c) (uni2-left c)))))

(define uni2-right
  (case-lambda
    ((c f)  (lambda (x y) (c x y (f x y))))
    ((c)    (lambda (f) (uni2-right c f)))
    (()     (lambda (c) (uni2-right c)))))

(define uni3-left
  (case-lambda
    ((c f)  (lambda (x y z) (c (f x y z) x y z)))
    ((c)    (lambda (f) (uni3-left c f)))
    (()     (lambda (c) (uni3-left c)))))

(define uni3-right
  (case-lambda
    ((c f)  (lambda (x y z) (c x y z (f x y z))))
    ((c)    (lambda (f) (uni3-right c f)))
    (()     (lambda (c) (uni3-right c)))))

(define (uni-each-left c f)
  (lambda (x) (c (f x) x)) )

(define (uni-each-right c f)
  (lambda (x) (c x (f x))) )

(define (uni-all-left c f)
  (lambda xs (apply c (apply f xs) xs)) )

(define (uni-all-right c f)
  (lambda xs (apply c (append xs (list (apply f xs))))) )
|#

;;; Fork

;; Unary

(define uni
  (case-lambda
    ((c f)  (lambda (x) (c (f x))))
    ((c)    (lambda (f) (uni c f)))
    (()     (lambda (c) (uni c)))))

(define uni2
  (case-lambda
    ((c f)  (lambda (x y) (c (f x y))))
    ((c)    (lambda (f) (uni2 c f)))
    (()     (lambda (c) (uni2 c)))))

(define uni3
  (case-lambda
    ((c f)  (lambda (x y z) (c (f x y z))))
    ((c)    (lambda (f) (uni3 c f)))
    (()     (lambda (c) (uni3 c)))))

(define (uni-each c f)
  (lambda (x) (c (f x))) )

(define (uni-all c f)
  (lambda xs (c (apply f xs))) )

) ;module uni-combinators

;;;; arguments-helpers.inc
;;;; Kon Lovett, Jul '10

;;; Helpers

(define-inline (chain-recur fns xs)
  ; assume the length of fns is << so recursion depth is also <<
  (let recur ((fns fns))
    (if (null? fns) xs
      (apply (car fns) (recur (cdr fns))) ) ) )

(define-inline (chain-func fns)
  (cond
    ((null? fns)
      identity )
    ((null? (cdr fns))
      (let ((f (car fns)))
        (lambda (xs) (apply f xs)) ) )
    (else
      (lambda (xs) (chain-recur fns xs)) ) ) )

(define-inline (each-func fns)
  (cond
    ((null? fns)
      identity )
    ((null? (cdr fns))
      (let ((f (car fns)))
        (lambda (xs) (map (cut f <>) xs)) ) )
    (else
      (let ((fns (apply circular-list fns)))
        (lambda (xs) (map (cut <> <>) fns xs)) ) ) ) )

(define-inline (all-func fns)
  (cond
    ((null? fns)
      identity )
    ((null? (cdr fns))
      (let ((f (car fns)))
        (lambda (xs) (list (apply f xs))) ) )
    (else
      (lambda (xs) (map (cut apply <> xs) fns)) ) ) )

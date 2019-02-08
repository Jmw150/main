;;;; logical-combinators.scm
;;;; Kon Lovett, Mar '09

(module logical-combinators

  (;export
    andf
    orf)

  (import scheme chicken data-structures srfi-1)

  (declare
    (type
      (andf (procedure (#!rest) *))
      (orf (procedure (#!rest) *)) ) )

;; Eager 'or' & 'and'

(define (andf . args)
  (let loop ((args args) (prev #t))
    (if (null? args) prev
        (let ((cur (car args)))
          (and cur
               (loop (cdr args) cur) ) ) ) ) )

(define (orf . args)
  (let loop ((args args))
    (and (not (null? args))
         (or (car args)
             (loop (cdr args)) ) ) ) )

) ;module logical-combinators

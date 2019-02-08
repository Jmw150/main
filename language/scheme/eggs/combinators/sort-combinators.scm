;;;; sort-combinators.scm
;;;; Kon Lovett, Mar '09

;; Issues
;;
;; - group/key is not a combinator

(module sort-combinators (;export
  group-by group/key
  make-equal/key make-less-than/key)

  (import
    scheme
    chicken
    (only srfi-1 span)
    (only bi-combinators bi-each))

  (require-library srfi-1 bi-combinators)

  (declare
    (type
      (group-by (procedure ((procedure (*) *) #!optional (procedure (* *) boolean)) (procedure (list) list)))
      (group/key (procedure ((procedure (*) *) list #!optional (procedure (* *) boolean)) list))
      (make-less-than/key (procedure ((procedure (*) *) #!optional (procedure (* *) boolean)) (procedure (* *) boolean)))
      (make-equal/key (procedure ((procedure (*) *) #!optional (procedure (* *) boolean)) (procedure (* *) boolean))) ) )

;;

;kinda violates the argument list orientation of comibinators
(define (group-by proc #!optional (equals equal?))
  (lambda (ls)
    (let loop ((ls ls) (acc '()))
      (if (null? ls) acc #;(reverse! acc)
          (let ((key (proc (car ls))))
            (receive (grouped rest) (span (lambda (item) (equals key (proc item))) ls)
              (loop rest (cons grouped acc)) ) ) ) ) ) )

;; Group a list of elements by some key attribute.
;;
;; The list must be in sorted order with respect to the key.
;;
;; examples:
;; (group/key identity '(1 2 3 3 4 4 4)) --> ((1) (2) (3 3) (4 4 4))
;; (group/key car '((a 1) (a 2) (b 1))) --> '(((a 1) (a 2)) ((b 1)))

(define (group/key keyproc ls #!optional (equals equal?))
  ((group-by keyproc equals) ls) )

;; Define a less-than function for a sort of a structured sequence.
;;
;; E.g. to sort a list of lists by their first items, using
;; string-case-insensitive comparison:
;; (sort ls (make-less-than/key first string-ci<?))

(define (make-less-than/key keyproc #!optional (less-than <))
  (bi-each less-than keyproc) )

;; Define a equal function for a sort of a structured sequence.
;;
;; E.g. to sort a list of lists by their first items, using
;; string-case-insensitive comparison:
;; (make-hash-table (o string-ci-hash first) (make-equal/key first string-ci=?))

(define (make-equal/key keyproc #!optional (equals =))
  (bi-each equals keyproc) )

) ;module sort-combinators

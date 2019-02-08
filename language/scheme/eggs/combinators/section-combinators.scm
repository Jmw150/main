;;;; section-combinators.scm
;;;; Kon Lovett, Jul '10

(module section-combinators

  (;export
    left-section right-section
    crop-left crop-right
    reversed
    arguments-chain arguments-each arguments-all)

  (import
    scheme
    chicken
    (only srfi-1 drop drop-right circular-list)
    (only data-structures identity))

  (require-library srfi-1)

  (declare
    (type
      (left-section (procedure ((procedure (#!rest) *) #!rest) (procedure (#!rest) *)))
      (right-section (procedure ((procedure (#!rest) *) #!rest) (procedure (#!rest) *)))
      (reversed (procedure ((procedure (#!rest) *)) (procedure (#!rest) *)))
      (crop-left (procedure ((procedure (#!rest) *) fixnum) (procedure (#!rest) *)))
      (crop-right (procedure ((procedure (#!rest) *) fixnum) (procedure (#!rest) *)))
      (arguments-chain (procedure (#!rest) (procedure (#!rest) *)))
      (arguments-each (procedure (#!rest) (procedure (#!rest) list)))
      (arguments-all (procedure (#!rest) (procedure (#!rest) list))) ) )

;;; Section

(define (left-section fn . args)
  (lambda xs (apply fn (append args xs))) )

; (reverse (append (reverse args) (reverse xs))) = (append xs args)
(define (right-section fn . args)
  (lambda xs (apply fn (append xs args))) )

;;; Crop

; (compose fn (right-section drop n) list)
(define (crop-left fn n)
  (lambda xs (apply fn (drop xs n))) )

; (compose fn (right-section drop-right n) list)
(define (crop-right fn n)
  (lambda xs (apply fn (drop-right xs n))) )

;;; Reverse

; (compose fn reverse list)
(define (reversed fn)
  (lambda xs (apply fn (reverse xs))) )

;;; Argument

  (include "arguments-helpers.inc")

;; arguments-chain

; ((arguments-chain f g) arg...) -> (apply f (apply g arg...))
; ((arguments-chain f) arg...) -> (apply f arg...)
; ((arguments-chain) arg...) -> (list arg...)

(define (arguments-chain . fns)
  (let ((fn (chain-func fns)))
    (lambda xs (fn xs)) ) )

;; arguments-each

; ((arguments-each f g h) a b c d e) -> (list (f a) (g b) (h c) (f d) (g e))
; ((arguments-each) arg...) -> (list arg...)

(define (arguments-each . fns)
  (let ((fn (each-func fns)))
    (lambda xs (fn xs)) ) )

;; arguments-all

; ((arguments-all f g h) a b c) -> (list (f a b c) (g a b c) (h a b c))
; ((arguments-all) arg...) -> (list arg...)

(define (arguments-all . fns)
  (let ((fn (all-func fns)))
    (lambda xs (fn xs)) ) )

) ;module section-combinators

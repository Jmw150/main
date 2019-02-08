;;;; generic-section-combinators.scm
;;;; Kon Lovett, Jul '10

!IN PROGRESS!

(module generic-section-combinators

  (;export
    left-hook-each right-hook-each
    left-hook-each+ right-hook-each+
    left-hook-argument-chain right-hook-argument-chain
    left-hook-argument-chain+ right-hook-argument-chain+
    fork-each fork-all
    fork-each+ fork-all+)

  (import
    (except scheme map)
    chicken
    (only data-structures identity)
    (only srfi-1 circular-list map))

  (require-library data-structures srfi-1)

  (declare
    (type
      (left-hook-each (procedure ((procedure (#!rest) *) #!rest) (procedure (#!rest) *)))
      (right-hook-each (procedure ((procedure (#!rest) *) #!rest) (procedure (#!rest) *)))
      (left-hook-each+ (procedure (#!rest) (procedure (#!rest) *)))
      (right-hook-each+ (procedure (#!rest) (procedure (#!rest) *)))
      (left-hook-argument-chain (procedure ((procedure (#!rest) *) #!rest) (procedure (#!rest) *)))
      (right-hook-argument-chain (procedure ((procedure (#!rest) *) #!rest) (procedure (#!rest) *)))
      (left-hook-argument-chain+ (procedure (#!rest) (procedure (#!rest) *)))
      (right-hook-argument-chain+ (procedure (#!rest) (procedure (#!rest) *)))
      (fork-each (procedure ((procedure (#!rest) *) #!rest) (procedure (#!rest) *)))
      (fork-all (procedure ((procedure (#!rest) *) #!rest) (procedure (#!rest) *)))
      (fork-each+ (procedure (#!rest) (procedure (#!rest) *)))
      (fork-all+ (procedure (#!rest) (procedure (#!rest) *))) ))

  (include "arguments-helpers.inc")

;;; Hook

(define (left-arguments-X . fns)
  (lambda xs ((X-funcs (cons fns list)) xs)) )

(define (right-arguments-X . fns)
  (lambda xs ((X-funcs (cons list fns)) xs)) )

?????
(left-hook-X c fn0 ... fnn) = (arguments-chain c (arguments-X fn0 ... fnn list))
(right-hook-X c fn0 ... fnn) = (arguments-chain c (arguments-X list fn0 ... fnn))

;; left-hook-each

; ((left-hook-each c f g) arg...) -> (apply c (f arg0) (g arg1) ... argn...)
; ((left-hook-each c f) arg...) -> (apply c (f arg0) ... (f argn) arg...)
; ((left-hook-each c) arg...) -> (apply c arg...)

(define (left-hook-each c . fns)
  (if (null? fns) (lambda xs (apply c xs))
    (let ((fn (each-func fns)))
      (lambda xs (apply c (append (list (fn xs)) xs))) ) ) )

;; right-hook-each

; ((right-hook-each c f g) arg...) -> (apply c argn... (f arg0) (g arg1) ...)
; ((right-hook-each c f) arg...) -> (apply c arg... (f arg0) ... (f argn))
; ((right-hook-each c) arg...) -> (apply c arg...)

(define (right-hook-each c . fns)
  (if (null? fns) (lambda xs (apply c xs))
    (let ((fn (each-func fns)))
      (lambda xs (apply c (append xs (list (fn xs))))) ) ) )

;; left-hook-each+ a left-hook-each that curries it's functions

; (left-hook-each+ c func...) -> (apply left-hook-each c func...)
; (left-hook-each+ c) -> (lambda (func...) (apply left-hook-each+ c func...))
; (left-hook-each+) -> (lambda (c) (left-hook-each+ c))

(define (left-hook-each+ . fns)
  (if (null? fns) (lambda (c) (left-hook-each+ c))
    (let ((c (car fns)) (fns (cdr fns)))
      (if (null? fns) (lambda fns (apply left-hook-each+ c fns))
        (apply left-hook-each c fns) ) ) ) )

;; right-hook-each+ a left-hook-each that curries it's functions

; (right-hook-each+ c func...) -> (apply right-hook-each c func...)
; (right-hook-each+ c) -> (lambda (func...) (apply right-hook-each+ c func...))
; (right-hook-each+) -> (lambda (c) (right-hook-each+ c))

(define (right-hook-each+ . fns)
 (if (null? fns) (lambda (c) (right-hook-each+ c))
    (let ((c (car fns)) (fns (cdr fns)))
      (if (null? fns) (lambda fns (apply right-hook-each+ c fns))
        (apply right-hook-each c fns) ) ) ) )

;; left-hook-argument-chain

; ((left-hook-argument-chain c f g) arg...) -> (apply c (apply f (apply g arg...)) arg...)
; ((left-hook-argument-chain c f) arg...) -> (apply c (apply f arg...) arg...)
; ((left-hook-argument-chain c) arg...) -> (apply c arg...)

(define (left-hook-argument-chain c . fns)
  (let ((c (car fns))
        (fns (cdr fns)) )
    (if (null? fns) (lambda xs (apply c xs))
      (lambda xs (apply c (chain-recur fns xs) xs)) ) ) )

;; right-hook-argument-chain

; ((right-hook-argument-chain c f g) arg...) -> (apply c arg... (apply f (apply g arg...)))
; ((right-hook-argument-chain c f) arg...) -> (apply c arg... (apply f arg...))
; ((right-hook-argument-chain c) arg...) -> (apply c arg...)

(define (right-hook-argument-chain c . fns)
  (let ((c (car fns))
        (fns (cdr fns)) )
    (if (null? fns) (lambda xs (apply c xs))
      (lambda xs (apply c (append xs (list (chain-recur fns xs))))) ) ) )

;; left-hook-argument-chain+ a left-hook-argument-chain that curries it's functions

; (left-hook-argument-chain+ c func...) -> (apply left-hook-argument-chain c func...)
; (left-hook-argument-chain+ c) -> (lambda (func...) (apply left-hook-argument-chain+ c func...))
; (left-hook-argument-chain+) -> (lambda (c) (left-hook-argument-chain+ c))

(define (left-hook-argument-chain+ . fns)
  (if (null? fns) (lambda (c) (left-hook-argument-chain+ c))
    (let ((c (car fns)) (fns (cdr fns)))
      (if (null? fns) (lambda fns (apply left-hook-argument-chain+ c fns))
        (apply left-hook-argument-chain c fns) ) ) ) )

;; right-hook-argument-chain+ a right-hook-argument-chain that curries it's functions

; (right-hook-argument-chain+ c func...) -> (apply right-hook-argument-chain c func...)
; (right-hook-argument-chain+ c) -> (lambda (func...) (apply right-hook-argument-chain+ c func...))
; (right-hook-argument-chain+) -> (lambda (c) (right-hook-argument-chain+ c))

(define (right-hook-argument-chain+ . fns)
 (if (null? fns) (lambda (c) (right-hook-argument-chain+ c))
    (let ((c (car fns)) (fns (cdr fns)))
      (if (null? fns) (lambda fns (apply right-hook-argument-chain+ c fns))
        (apply right-hook-argument-chain c fns) ) ) ) )

;;; Fork

;; fork-each

; (fork-each c func...) -> (lambda xs (apply c (apply (apply arguments-each func...) xs)))

(define (fork-each c . fns)
  (let ((fn (each-func fns)))
    (lambda xs (apply c (fn xs))) ) )

;; fork-all

; (fork-all c func...) -> (lambda xs (apply c (apply (apply arguments-all func...) xs)))

(define (fork-all c . fns)
  (let ((fn (all-func fns)))
    (lambda xs (apply c (fn xs))) ) )

;; fork-each+ a fork-each that curries it's functions

; (fork-each+ c func...) -> (apply fork-each c func...)
; (fork-each+ c) -> (lambda (func...) (apply fork-each+ c func...))
; (fork-each+) -> (lambda (c) (fork-each+ c))

(define (fork-each+ . fns)
  (if (null? fns) (lambda (c) (fork-each+ c))
    (let ((c (car fns)) (fns (cdr fns)))
      (if (null? fns) (lambda fns (apply fork-each+ c fns))
        (apply fork-each c fns) ) ) ) )

;; fork-all+ a fork-all that curries it's functions

; (fork-all+ c func...) -> (apply fork-all c func...)
; (fork-all+ c) -> (lambda (func...) (apply fork-all+ c func...))
; (fork-all+) -> (lambda (c) (fork-all+ c))

(define (fork-all+ . fns)
  (if (null? fns) (lambda (c) (fork-all+ c))
    (let ((c (car fns)) (fns (cdr fns)))
      (if (null? fns) (lambda fns (apply fork-all+ c fns))
        (apply fork-all c fns) ) ) ) )

) ;module generic-section-combinators

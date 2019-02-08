;;;; stack.scm
;;;; Kon Lovett, Mar '09
;;;; Kon Lovett, May '17

;;;; Stack data structure (LIFO queue) where the value is mutable,
;;;; rather than usual pattern of the variable.

;; Issues
;;
;; - All operations inlined & primitive due to high-performance nature.

;;;

(module stack

(;export
  make-stack
  list->stack
  stack->list
  stack?
  stack-empty?
  stack-count
  stack-peek
  stack-empty!
  stack-poke!
  stack-push!
  stack-cut!
  stack-pop!
  stack-map
  stack-map
  stack-for-each
  stack-literal-form)

(import scheme)

(import
  (only chicken
    make-parameter
    warning
    :
    void
    declare
    define-inline
    define-constant
    define-for-syntax
    include
    optional let-optionals  ;due to #!optional implementation
    unless when
    define-record-printer
    define-reader-ctor))

(import
  (only ports with-output-to-port)
  (only extras format))

(import
  (only type-errors define-error-type error-list error-fixnum))
(require-library type-errors)

(declare
  (bound-to-procedure
    ##sys#signal-hook ) )

(include "chicken-primitive-object-inlines")
(include "inline-type-checks")

;; Stack Support

(define-inline (%make-stack) (%make-structure 'stack '() 0))

(define-inline (%stack? obj) (%structure-instance? obj 'stack))

(define-inline (%valid-stack? obj)
  (and
    #;(%stack? obj)
    (%fx= 3 (%structure-length obj))
    (%list? (%stack-list obj)) ) )

;; Stack List

(define-inline (%stack-list stk) (%structure-ref stk 1))

(define-inline (%stack-list-empty? stk) (%null? (%stack-list stk)))

(define-inline (%stack-list-set! stk ls) (%structure-set! stk 1 ls))

(define-inline (%stack-list-empty! stk) (%structure-set!/immediate stk 1 '()))

;; Stack Count

(define-inline (%stack-count stk) (%structure-ref stk 2))

(define-inline (%stack-count-set! stk cnt) (%structure-set!/immediate stk 2 cnt))

(define-inline (%stack-count-inc! stk cnt) (%stack-count-set! stk (%fx+ (%stack-count stk) cnt)))

(define-inline (%stack-count-dec! stk cnt) (%stack-count-set! stk (%fx- (%stack-count stk) cnt)))

;; Stack Operations

(define-inline (%stack-empty? stk) (%stack-list-empty? stk))

(define-inline (%stack-empty! stk)
  (%stack-count-set! stk 0)
  (%stack-list-empty! stk) )

(define-inline (%stack-pop! stk)
  (%stack-count-dec! stk 1)
	(let ((ls (%stack-list stk)))
		(%stack-list-set! stk (%cdr ls))
		(%car ls) ) )

(define-inline (%stack-push/1! stk obj)
  (%stack-count-inc! stk 1)
	(%stack-list-set! stk (%cons obj (%stack-list stk))) )

(define-inline (%stack-push! stk ls)
  (if (%null? (%cdr ls))
    (%stack-push/1! stk (%car ls))
    (%list-for-each/1 (lambda (x) (%stack-push/1! stk x)) ls) ) )

(define-inline (%stack-node-ref loc stk idx)
  (let ((pr (%list-pair-ref (%stack-list stk) idx)))
		(if (%pair? pr)
		  pr
      (error-outside-range loc idx 0 (%stack-count stk)) ) ) )

;; Helpers

(define-inline (%check-stack loc obj)
  (unless (%stack? obj) (error-stack loc obj))
  (unless (%valid-stack? obj) (error-corrupted-stack loc obj))
  obj )

(define-inline (%check-stack-underflow loc stk)
  (when (%stack-empty? stk) (error-stack-underflow loc stk))
  stk )

(define-inline (%check-fixnum-index loc lfx fx hfx)
  (unless (%fxclosed-left? lfx fx hfx) (error-outside-range loc fx lfx hfx))
  (void) )

;;;

(define-error-type stack)

(define (error-corrupted-stack loc obj)
  (##sys#signal-hook #:runtime-error loc "stack corrupted" obj) )

(define (error-stack-underflow loc stk)
  (##sys#signal-hook #:limit-error loc "stack underflow" stk) )

(define (error-outside-range loc obj low high)
  (##sys#signal-hook #:bounds-error loc "out of range" obj low high) )

;;;

(: make-stack (-> (struct stack)))
(define (make-stack)
  (%make-stack) )

(: list->stack (list -> (struct stack)))
(define (list->stack ls)
  (%check-list 'list->stack ls)
	(let ((stk (%make-stack)))
    (%stack-count-set! stk (%length ls))
    (%stack-list-set! stk (%list-copy ls))
    stk ) )

(: stack? (* -> boolean))
(define (stack? obj) (%stack? obj))

(: stack-empty? ((struct stack) -> boolean))
(define (stack-empty? stk)
	(%stack-empty? (%check-stack 'stack-empty? stk)) )

(: stack-count ((struct stack) -> fixnum))
(define (stack-count stk)
	(%stack-count (%check-stack 'stack-count stk)) )

(: stack-peek ((struct stack) #!optional fixnum -> *))
(define (stack-peek stk #!optional (idx 0))
	(%car (%stack-node-ref 'stack-peek (%check-stack 'stack-peek stk) idx)) )

(: stack-empty! ((struct stack) -> undefined))
(define (stack-empty! stk)
	(%stack-empty! (%check-stack 'stack-empty! stk)) )

(: stack-poke! ((struct stack) * #!optional fixnum -> undefined))
(define (stack-poke! stk obj #!optional (idx 0))
	(%set-car!/mutate (%stack-node-ref 'stack-poke! (%check-stack 'stack-poke! stk) idx) obj) )

(: stack-push! ((struct stack) #!rest * -> undefined))
(define (stack-push! stk #!rest ls)
	(unless (%null? ls) (%stack-push! (%check-stack 'stack-push! stk) ls)) )

(: stack-cut! ((struct stack) fixnum #!optional fixnum -> list))
(define (stack-cut! stk start #!optional (end (%stack-count stk)))
  (%check-stack 'stack-cut! stk)
  (%check-fixnum 'stack-cut! start)
  (%check-fixnum 'stack-cut! end)
  (%check-fixnum-index 'stack-cut! 0 start end)
  (%check-fixnum-index 'stack-cut! start end (%fx+ (%stack-count stk) 1))
  (let ((cnt (%fx- end start)))
    (%stack-count-dec! stk cnt)
    ; From the top?
    (if (%fx= 0 start)
      ;then removing leading elements
      (let* ((spr (%stack-list stk))
             (epr (%list-pair-ref spr (%fx- cnt 1)))
             (ls spr))
        (%stack-list-set! stk (%cdr epr))
        (%set-cdr!/immediate epr '())
        ls )
      ;else removing interior elements
      (let* ((spr (%stack-node-ref 'stack-cut! stk (%fx- start 1)))
             (epr (%list-pair-ref spr cnt))
             (ls (%cdr spr)))
        (%set-cdr!/mutate spr (%cdr epr))
        (%set-cdr!/immediate epr '())
        ls ) ) ) )

(: stack-pop! ((struct stack) -> *))
(define (stack-pop! stk)
  (%check-stack 'stack-pop! stk)
	(%check-stack-underflow 'stack-pop! stk)
	(%stack-pop! stk) )

(: stack->list ((struct stack) -> list))
(define (stack->list stk)
	(%list-copy (%stack-list (%check-stack 'stack->list stk))) )

(: stack-fold ((struct stack) procedure * -> *))
(define (stack-fold stk func init)
	(%list-fold/1 func init (%stack-list (%check-stack 'stack-fold stk))) )

(: stack-map ((struct stack) procedure -> list))
(define (stack-map stk func)
	(%list-map/1 func (%stack-list (%check-stack 'stack-map stk))) )

(: stack-for-each ((struct stack) procedure -> undefined))
(define (stack-for-each stk proc)
	(%list-for-each/1 proc (%stack-list (%check-stack 'stack-for-each stk))) )

;;; Read/Print Syntax

(define-record-printer (stack stk out)
  (format out (stack-literal-format) (%stack-list stk)) )

(define-reader-ctor 'stack list->stack)

(define stack-literal-form
  (make-parameter 'srfi-10
    (lambda (x)
      (case x
        ((SRFI-10 srfi-10)
          'srfi-10 )
        ((UNREAD unread)
          'unread )
        (else
          (warning 'stack-literal-format "invalid form symbol; 'srfi-10 or 'unread" x)
          (stack-literal-format))))))

(define-constant SRFI-10-FORMAT "#,(stack ~A)")
(define-constant UNREAD-FORMAT "#<stack ~A>")

(define (stack-literal-format)
  (case (stack-literal-form)
    ((srfi-10)
      SRFI-10-FORMAT )
    (else
      UNREAD-FORMAT ) ) )

) ;module stack

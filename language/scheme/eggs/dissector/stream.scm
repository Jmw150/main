;;;;;; Streams

;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.

;;; --------------------
;;; First, redefinition of the lazy stuff.

(define-record-type rtd/promise
  (make-promise frozen? value)
  promise?
  (frozen? promise-frozen? set-promise-frozen?!)
  (value   promise-value   set-promise-value!))

(define (eager x) (make-promise #t x))

(define-syntax lazy
  (syntax-rules ()
    ((lazy ?expression)
     (make-promise #f (lambda () ?expression)))))
#;(define-macro (lazy expression)
  `(make-promise #f (lambda () ,expression)))

(define-syntax delay
  (syntax-rules ()
    ((delay ?expression)
     (lazy (eager ?expression)))))
#;(define-macro (delay expression)
  `(lazy (eager ,expression)))

(define (clobber-promise! promise promise*)
  (set-promise-frozen?! promise (promise-frozen? promise*))
  (set-promise-value!   promise (promise-value   promise*)))

(define (force promise)
  (cond ((not (promise? promise))
         promise)                       ;?
        ((promise-frozen? promise)
         (promise-value promise))
        (else
         (clobber-promise! promise ((promise-value promise)))
         (force promise))))

;;; --------------------
;;; Streams

(define-syntax stream-cons
  (syntax-rules ()
    ((stream-cons ?car ?cdr)
     (delay (cons ?car ?cdr)))))
#;(define-macro (stream-cons a d)
  `(delay (cons ,a ,d)))

(define stream-nil (delay '()))

(define-syntax stream
  (syntax-rules ()
    ((stream)
     stream-nil)
    ((stream ?elt1 ?elt2 ...)
     (stream-cons ?elt1 (stream ?elt2 ...)))))
#;(define-macro (stream . elts)
  (let recur ((elts elts))
    (if (null? elts)
        'stream-nil
        `(stream-cons ,(car elts)
                      ,(recur (cdr elts))))))

(define-syntax stream*
  (syntax-rules ()
    ((stream* ?tail)
     ?tail)
    ((stream* ?elt1 ?elt2 ...)
     (stream-cons ?elt1 (stream* ?elt2 ...)))))
#;(define-macro (stream* elt1 . elt2+)
  (let recur ((elt1 elt1) (elt2+ elt2+))
    (if (null? elt2+)
        elt1
        `(stream-cons ,elt1
                      ,(recur (car elt2+)
                              (cdr elt2+))))))

(define (stream-car s) (car (force s)))
(define (stream-cdr s) (cdr (force s)))

(define (stream-null? s) (null? (force s)))
(define (stream-pair? s) (pair? (force s)))

(define (stream-car+cdr stream)
  (values (stream-car stream) (stream-cdr stream)))

(define (stream-maybe-drop stream count)
  (cond ((zero? count)         stream)
        ((stream-null? stream) #f)
        (else (stream-maybe-drop (stream-cdr stream) (- count 1)))))

(define (stream-drop stream count)
  (cond ((stream-maybe-drop stream count))
        (else (error "Stream index out of bounds"
                     count stream 'stream-drop))))

(define (stream-length<? stream len)
  (cond ((zero? len)           #f)
        ((stream-null? stream) #t)
        (else (stream-length<? (stream-cdr stream) (- len 1)))))

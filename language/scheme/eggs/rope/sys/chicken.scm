;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; CHICKEN module for rope.scm.
;;;
;;; See the README and rope.scm for more information.
;;;
;;; Copyright (c) 2013, Evan Hanson
;;; BSD-style license. See LICENSE for details.
;;;

(module rope
  (empty-rope current-maximum-leaf-length
   string->rope rope->string
   rope-length rope-depth
   rope rope? rope=? rope-null?
   rope-balanced? rope-balance
   subrope
   rope-ref rope-set!
   rope-reverse
   rope-append rope-concatenate
   rope-fold rope-for-each
   read-rope make-rope-iterator
   open-input-rope open-output-rope get-output-rope)
  (import scheme chicken srfi-1 srfi-13 ports extras)
  (require-library srfi-1 srfi-13)

  (define-type rope (or (struct rope-node) (struct rope-leaf)))

  (: empty-rope rope)
  (: current-maximum-leaf-length  (#!optional fixnum -> number))
  (: rope                         (#!rest string -> rope))
  (: string->rope                 (string #!optional fixnum fixnum -> rope))
  (: rope->string                 (rope #!optional fixnum fixnum -> string))
  (: rope?                        (* -> boolean : rope))
  (: rope=?                       (rope rope #!rest rope -> boolean))
  (: rope-null?                   (rope -> boolean))
  (: rope-length                  (rope -> fixnum))
  (: rope-ref                     (rope fixnum -> char))
  (: rope-set!                    (rope fixnum char -> void))
  (: subrope                      (rope fixnum #!optional fixnum -> rope))
  (: rope-append                  (#!rest rope -> rope))
  (: rope-concatenate             ((list-of rope) -> rope))
  (: rope-reverse                 (rope -> rope))
  (: rope-depth                   (rope -> fixnum))
  (: rope-balanced?               (rope -> boolean))
  (: rope-balance                 (rope -> rope))
  (: rope-fold                    ((any #!rest any -> any) any rope #!rest rope -> any))
  (: rope-for-each                ((any #!rest any -> undefined) rope #!rest rope -> void))
  (: read-rope                    (#!optional fixnum input-port -> rope))
  (: make-rope-iterator           (rope -> (-> (or char eof))))
  (: open-input-rope              (rope -> input-port))
  (: open-output-rope             (--> output-port))
  (: get-output-rope              (#!optional output-port -> rope))

  (include "src/foldling/rope.scm")

  (define (printer o p)
    (display "#<rope>" p))

  (define-record-printer node printer)
  (define-record-printer leaf printer)

  (define (open-input-rope r)
    (make-input-port (make-rope-iterator r) (lambda () #t) void))

  (define read-rope
    (case-lambda
      (()
       (read-rope most-positive-fixnum (current-input-port)))
      ((len)
       (read-rope len (current-input-port)))
      ((len port)
       (let ((mll (current-maximum-leaf-length)))
         (let lp ((i len)
                  (a '()))
           (if (zero? i)
               (rope-concatenate (reverse a))
               (let* ((part (read-string (min i mll) port))
                      (plen (string-length part)))
                 (if (zero? plen)
                     (lp 0 a)
                     (lp (- i plen)
                         (cons (make-leaf part plen) a)))))))))))

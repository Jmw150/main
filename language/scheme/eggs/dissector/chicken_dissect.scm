;;;;;; Object -> stream of its components

;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.

(define (dissect-components object)
  (cond ((undissectable? object)
         stream-nil)
        ((procedure? object)
         (dissect-procedure object))
        ((symbol? object)
         (dissect-symbol object))
        ((##sys#pointer? object)
         (stream (cons 'address
                       (##sys#peek-unsigned-integer object 0))))
        ((d-tagged-pointer? object)
         (stream (cons 'address
                       (##sys#peek-unsigned-integer object 0))
                 (cons 'tag
                       (##sys#peek-unsigned-integer object 1))))
        ((port? object)
         (dissect-port object))
        ((pair? object)
         (dissect-pair object))
        ((srfi-9-record? object)
         (dissect-srfi-9-record object))
        ((srfi-9-record-type? object)
         (dissect-srfi-9-record-type object))
        (else
         (dissect-unnamed-slots object 0))))

(define (undissectable? object)
  (or (##sys#immediate? object)
      (byte-block? object)))

(define (dissect-unnamed-slots object origin)
  (let ((size (##sys#size object)))
    (let recur ((i origin))
      (lazy (if (>= i size)
                stream-nil
                (stream-cons (cons #f (##sys#slot object i))
                             (recur (+ i 1))))))))

(define (dissect-procedure proc)
  (stream-cons (cons 'address (##sys#peek-unsigned-integer proc 0))
               (dissect-unnamed-slots proc 1)))

(define (dissect-symbol symbol)
  (let ((tail (stream (cons 'string (##sys#slot symbol 1)))))
    (if (##sys#symbol-has-toplevel-binding? symbol)
        (stream-cons (cons 'toplevel-value (##sys#slot symbol 0))
                     tail)
        tail)))

(define (dissect-port port)
  (stream* (cons 'fp          (##sys#peek-unsigned-integer port 0))
           (cons 'input-port? (##sys#slot port 1))
           (cons 'class       (##sys#slot port 2))
           (cons 'name        (##sys#slot port 3))
           (cons 'row         (##sys#slot port 4))
           (cons 'column      (##sys#slot port 5))
           (cons 'at-end?     (##sys#slot port 6))
           (cons 'type        (##sys#slot port 7))
           (cons 'closed?     (##sys#slot port 8))
           (cons 'data        (##sys#slot port 9))
           (dissect-unnamed-slots port 10)))

(define (dissect-pair pair)
  (cond ((null? (cdr pair))
         (stream (cons #f (car pair))))
        ((pair? (cdr pair))
         (dissect-list pair))
        (else
         (stream (cons 'car (car pair))
                 (cons 'cdr (cdr pair))))))

;++ At some point, this should support circular lists, but because the
;++ Chicken printer doesn't (and therefore we never get past the main
;++ object print-out), this isn't so much of an issue just yet.
(define (dissect-list l)
  (let recur ((l l))
    (lazy (cond ((null? l)
                 stream-nil)
                ((pair? l)
                 (stream-cons (cons #f (car l))
                              (recur (cdr l))))
                (else
                 (stream (cons 'dotted-cdr l)))))))

;++ Is the precision in these predicates really necessary?
(define (srfi-9-record? x)
  (and (##sys#structure? x 'record)
       (> (##sys#size x) 1)
       (srfi-9-record-type? (##sys#slot x 1))))

(define (srfi-9-record-type? x)
  (and (##sys#structure? x 'record-type)
       (= (##sys#size x) 3)))

(define (dissect-srfi-9-record record)
  (stream-cons
   (cons 'type (##sys#slot record 1))
   (let recur ((fields (##sys#slot (##sys#slot record 1) 2))
               (i 2))
     (lazy (if (or (null? fields)
                   (>= i                ; Just in case.
                       (##sys#size record)))
               stream-nil
               (stream-cons (cons (car fields)
                                  (##sys#slot record i))
                            (recur (cdr fields) (+ i 1))))))))

(define (dissect-srfi-9-record-type rtd)
  (stream (cons 'name   (##sys#slot rtd 1))
          (cons 'fields (##sys#slot rtd 2))))

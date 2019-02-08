;;;;;; Utilities used by the Dissector

;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.

(define (read-objects-from-string string limit)
  (let ((port (open-input-string string)))
    (let recur ((count 0))
      (receive (ok? elt)
               (carefully-read port)
        (cond ((not ok?)          #f)   ; Order is important: ELT will
              ((eof-object? elt) '())   ;   be an EOF if not OK?, but
              ((> count limit)          ;   not necessarily vice versa.
               (error "Too many items read"
                      `(maximum is ,limit)))
              (else (cons elt (recur (+ count 1)))))))))

(define (length>=? l len)
  (let loop ((l l) (len len))
    (cond ((zero? len) #t)
          ((null? l)   #f)
          (else        (loop (cdr l) (- len 1))))))

(define (length=? l len)
  (let loop ((l l) (len len))
    (cond ((null? l)   (zero? len))
          ((zero? len) #f)
          (else        (loop (cdr l) (- len 1))))))

(define (any? f l)
  (and (not (null? l))
       (or (f (car l)) (any? f (cdr l)))))

(define (pad-string s width)
  (string-append (make-string (- width (string-length s))
                              #\space)
                 s))

(define (maybe-drop lst count)
  (cond ((null? lst)   #f)              ; This case must come first:
        ((zero? count) lst)             ;   COUNT may be 0 if LST is ()
        (else          (maybe-drop (cdr lst) (- count 1)))))

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; Support code for rope.scm on R7RS implementations.
;;;
;;; See the README and rope.scm for more information.
;;;
;;; Copyright (c) 2013-2016, Evan Hanson
;;; BSD-style license. See LICENSE for details.
;;;

(define (void . args)
  (if #f #t))

(define string-reverse
  (case-lambda
    ((s1)
     (string-reverse s1 0 (string-length s1)))
    ((s1 s)
     (string-reverse s1 s (string-length s1)))
    ((s1 s e)
     (let* ((len (- e s))
            (str (make-string len)))
       (do ((s s (+ s 1))
            (e (- len 1) (- e 1)))
           ((< e 0) str)
         (string-set! str e (string-ref s1 s)))))))

(define (fold f a l)
  (do ((l l (cdr l))
       (a a (f (car l) a)))
      ((null? l) a)))

(define (split-at l n)
  (do ((l l (cdr l))
       (n n (- n 1))
       (a '() (cons (car l) a)))
      ((<= n 0)
       (values (reverse a) l))))

(define (take l n)
  (call-with-values
   (lambda () (split-at l n))
   (lambda (l r) l)))

(define (any p l)
  (let r ((l l))
    (and (pair? l)
         (or (p (car l))
             (r (cdr l))))))

(define (every p l)
  (or (null? l)
      (let r ((a (car l))
              (d (cdr l)))
        (if (null? d)
            (p a)
            (and (p a)
                 (r (car d)
                    (cdr d)))))))

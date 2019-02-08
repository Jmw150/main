;;;;;; Compatibility module for Chicken

;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.


(define unspecific void)

(define (carefully-read port)
  (handle-exceptions c (values #f #!eof)
    (values #t (read port))))

(define (with-exceptions-printed-to-port port thunk)
  (handle-exceptions c (print-error-message c port) (thunk)))

(define (call-with-limited-output-port base-port width receiver)
  (let ((so-far 0)
        (real-width (- width 4)))       ; Deal with the extra " ---".
    (letrec ((my-write-string
              (lambda (output)
                (cond ((> real-width (+ so-far (string-length output)))
                       (write-string output #f base-port)
                       (set! so-far (+ so-far (string-length output))))
                      (else
                       (write-string (substring output 0
                                                (- real-width
                                                   so-far))
                                     #f
                                     base-port)
                       (write-string " ---" #f base-port)
                       (set! my-write-string
                             (lambda (output) (void))))))))
      (receiver
       (make-output-port (lambda (output)
                           (my-write-string output))
                         (lambda ()
                           (close-output-port base-port))
                         (lambda ()
                           (flush-output base-port)))))))

(define (byte-block? x) (##core#inline "C_byteblockp" x))
(define (d-tagged-pointer? x) (##core#inline "C_taggedpointerp" x))

(define dissector-sort sort)

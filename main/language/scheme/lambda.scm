#!/usr/bin/scheme-r5rs
; #! /usr/bin/scheme --script

; (define a 5)


; (display "hello") (newline)

; (display a) (newline)

(define funk (lambda (x) (+ x 1)))


(define main (lambda (x) (display (funk 3)) ))

; see! Scheme is better at lisp than common lisp.

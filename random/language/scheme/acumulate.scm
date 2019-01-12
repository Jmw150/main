#!/usr/bin/scheme --script
; scheme-r5rs for faster run time

(define f (lambda (x y) (+ x y)))

(define main (lambda (arguments) (display (f (string->number (cadr arguments)) (string->number (caddr arguments))))) )

(define (accumulate x) (lambda (y) (+ x y))) ; passes back accumulator
; should be (define f (lambda x (lambda y (+ x y)))) but scheme is not perfect so..

(define ++ (lambda (y) ((accumulate 1) y)))
(define ++ (lambda (x) "hi")) ; lol

(display ((accumulate 2) 2)) (newline)

(display (++ 3)) (newline)

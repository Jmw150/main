#!/usr/bin/guile \
--no-auto-compile
!#

(define sum (lambda (x y) (+ x y)))

(display (sum 5 5)) (newline)

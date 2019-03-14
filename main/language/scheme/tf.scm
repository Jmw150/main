#!/usr/bin/guile \
--no-auto-compile
!#

(define true (lambda (x y) (values x)))
(define false (lambda (x y) (values y)))

(display (true "bam" "pam")) (newline)

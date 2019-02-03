#!/usr/bin/guile \
--no-auto-compile
!#

(define howMany (lambda (list) (if (null? list) 0 (+ 1 (howMany (cdr list))))))



(display (howMany (command-line))) (newline)

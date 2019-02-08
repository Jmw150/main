; KANREN prelude specific to Chicken Scheme
;
; $Id: gauche-specific.scm,v 4.50 2005/02/12 00:05:05 oleg Exp $

(define errorf error)

; like cout << arguments << args
; where argument can be any Scheme object. If it's a procedure
; (without args) it's executed rather than printed (like newline)

(define (cout . args)
  (for-each (lambda (x)
              (if (procedure? x) (x) (display x)))
            args))

;(define cerr cout)
(define (cerr . args)
  (for-each (lambda (x)
              (if (procedure? x) (x (current-output-port))
		(display x (current-output-port))))
            args))

(define nl (string #\newline))



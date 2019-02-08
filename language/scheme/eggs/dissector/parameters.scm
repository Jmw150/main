;;;;;; Parameters relevant to the Dissector

;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.

;;; The prompt for input to the dissector
(define dissection-prompt
  (make-parameter "dissect: "
                  (lambda (new-prompt)
                    (if (string? new-prompt)
                        new-prompt
                        (error "Bad dissection prompt"
                               new-prompt)))))

;;; The number of entries in one menu display.
(define dissection-menu-section-size
  (make-parameter 8
                  (lambda (new-size)
                    (if (and (integer?  new-size)
                             (exact?    new-size)
                             (positive? new-size))
                        new-size
                        (error "Bad dissection menu section size"
                               new-size)))))

;;; The function to print a dissection's overview.  This takes two
;;; arguments: the object to print and the port to print it to.
(define dissection-overview-printer
  (make-parameter (lambda (focus port)
                    (call-with-limited-output-port port
                        (dissector-right-margin)
                      (lambda (port)
                        (write focus port)))
                    (newline port)
                    (flush-output port))
                  (lambda (new-printer)
                    (if (procedure? new-printer)
                        new-printer
                        (error "Bad dissection overview printer"
                               new-printer)))))

;;; The function to print a dissected object's components.  This takes
;;; three arguments: the object to print, the number of characters
;;; already printed to the port on that line, and the port to print it
;;; to.
(define dissection-menu-entry-printer
  (make-parameter (lambda (component chars port)
                    (call-with-limited-output-port port
                        (- (dissector-right-margin) chars)
                      (lambda (port)
                        (write component port))))
                  (lambda (new-printer)
                    (if (procedure? new-printer)
                        new-printer
                        (error "Bad dissected component printer"
                               new-printer)))))

;;; The right margin for printing objects.
(define dissector-right-margin
  (make-parameter 71
                  (lambda (new-margin)
                    (if (and (integer? new-margin)
                             (exact?   new-margin)
                             (<   0    new-margin))
                        new-margin
                        (error "Bad right margin" new-margin)))))

;;;;;; Main entry point to the Dissector

;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.

;;; The main entry point.
(define (dissect object . in+out)
  (let-optionals* in+out ((inport (current-input-port))
                          (outport (current-output-port)))
    ;; Double-parentheses here so we can jump out and tail call the
    ;; thunk that's thrown back.  (Want Feeley's interface, damnit!)
    ((call-with-current-continuation
       (lambda (quit)
         (lambda ()
           (let ((dissection
                  (make-dissection object
                                   (prepare-dissection-menu object)
                                   '() quit inport outport)))
             (display-dissection dissection)
             (dissection-loop dissection))))))))

;;;;;; Dissection state

;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.

(define-record-type rtd/dissection
  (make-dissection focus menu history quit-cont inport outport)
  dissection?
  (focus dissection-focus set-dissection-focus!)
  (menu dissection-menu set-dissection-menu!)
  (history dissection-history set-dissection-history!)
  (quit-cont dissection-quit-cont)
  (inport dissection-inport)
  (outport dissection-outport))

(define (dissection-push! dissection object)
  (set-dissection-history! dissection
                           (cons (dissection-focus dissection)
                                 (dissection-history dissection)))
  (set-dissection-focus! dissection object)
  (set-dissection-menu! dissection (prepare-dissection-menu object)))

(define (dissection-pop! dissection)
  (let ((history (dissection-history dissection)))
    (if (null? history)
        (error "No more objects in dissection's history" dissection)
        (let ((focus (car history)))
          (set-dissection-history! dissection (cdr history))
          (set-dissection-focus! dissection focus)
          (set-dissection-menu! dissection
                                (prepare-dissection-menu focus))))))

(define (dissection-pop-multiple! dissection count)
  (let ((history (dissection-history dissection)))
    (cond ((maybe-drop history (- count 1))
           => (lambda (history*)
                (let ((focus (car history*)))
                  (set-dissection-history! dissection (cdr history*))
                  (set-dissection-focus! dissection focus)
                  (set-dissection-menu!
                   dissection (prepare-dissection-menu focus)))))
          (else
           (error "Too many history elements popped" count)))))



;;; --------------------
;;; Evaluating Scheme code, manipulating the focus object

(define (dissection-apply dissection expression)
  (call-with-values (lambda ()
                      (eval expression (interaction-environment)))
    (case-lambda
      ((function)
       (receive results
                (function (dissection-focus dissection))
         (let ((port (dissection-outport dissection)))
           (cond ((null? results)
                  (display "; No values retrned" port))
                 ((null? (cdr results))
                  (write (car results) port))
                 (else
                  (display "; " port)
                  (write (length results) port)
                  (display " values returned" port)
                  (for-each (lambda (result)
                              (newline port)
                              (write result port))
                            results)))
           (newline port)
           (flush-output port))))
      (results
       (error "Wrong number of values returned"
              results)))))

(define (dissection-apply/dissect dissection expression)
  (call-with-values (lambda ()
                      (eval expression (interaction-environment)))
    (case-lambda
      ((function)
       (receive results
                (function (dissection-focus dissection))
         (cond ((null? results)
                (error "Can't dissect zero values"))
               ((null? (cdr results))
                (dissection-push! dissection (car results))
                (display-dissection dissection))
               (else
                (let ((port (dissection-outport dissection)))
                  (display "; Dissecting " port)
                  (write (length results)  port)
                  (display " values"       port)
                  (newline                 port)
                  (dissection-push! dissection results)
                  (display-dissection dissection))))))
      (results
       (error "Wrong number of values returned"
              results)))))



;;; --------------------
;;; Printing the dissection state

(define (display-dissection dissection)
  (let ((port (dissection-outport dissection)))
    ((dissection-overview-printer) (dissection-focus dissection) port)
    (if (not (undissectable? (dissection-focus dissection)))
        (display-dissection-menu (dissection-menu dissection) port))))



;;; --------------------
;;; Main dissection loop

(define (dissection-loop dissection)
  (let ((inport  (dissection-inport  dissection))
        (outport (dissection-outport dissection)))
    (let loop ()
      (display (dissection-prompt) outport)
      (flush-output outport)
      (read-dissection-command inport
        (lambda stuff                   ; EOF case: throw back to where
          ((dissection-quit-cont        ;   the original dissection
            dissection)                 ;   occurred.
           (lambda () (apply values stuff))))
                       
        (lambda (line)                  ; Invalid line case: retry
          ;; Debugging changes/additions are marked with ;++
          (display "Invalid dissection command line" outport)
          (write-char
;++        #\:
           #\.
           outport)
          (newline outport)
;++       (display "    " outport)
;++       (display line outport)
;++       (newline outport)
          (flush-output outport)
          (loop))
        loop                            ; Blank line case
        (lambda (command-name args)     ; Success case
          (carefully-handle-dissection-command command-name dissection
                                               args)
          (loop))))))



;;; --------------------
;;; Dissector commands

;;; General dissection commands

(define-dissection-command 'print '(p)
  "Prints out the entirety of the current dissection."
  #f #f
  0
  display-dissection)

(define-dissection-command 'overview '(o)
  "Prints the focus value, without a menu."
  #f #f
  0
  (lambda (dissection)
    ((dissection-overview-printer)
     (dissection-focus dissection)
     (dissection-outport dissection))))

(define-dissection-command 'up '(u)
  "Moves back up the history of dissected objects."
  "[<count>]"
  '("Moves COUNT elements back up the history of dissected objects."
    "If COUNT is absent, it defaults to 1.")
  '(0 1)
  (case-lambda
    ((dissection)
     (dissection-pop! dissection)
     (display-dissection dissection))
    ((dissection count)
     (cond ((not (and (integer? count)
                      (exact?   count)
                      (<=   0   count)))
            (error "Invalid count"
                   '(expected exact nonnegative integer)))
           ((= count 1)
            (dissection-pop! dissection))
           ((not (zero? count))
            (dissection-pop-multiple! dissection count)))
     (display-dissection dissection))))

(define-dissection-command 'history '(h)
  "Prints the dissection history."
  #f #f
  0
  (lambda (dissection)
    (let ((port (dissection-outport dissection)))
      (call-with-limited-output-port port (dissector-right-margin)
        (lambda (port)
          (write (dissection-history dissection) port)))
      (newline port)
      (flush-output port))))

(define-dissection-command 'quit '(q exit)
  "Quits the dissection."
  #f #f
  0
  (lambda (dissection)
    ((dissection-quit-cont dissection) unspecific)))

(define-dissection-command 'return '(r)
  "Quits the dissection and returns current focus object to toplevel."
  #f #f
  0
  (lambda (dissection)
    ((dissection-quit-cont dissection)
     (lambda () (dissection-focus dissection)))))



;;; Evaluating Scheme code, manipulating the focus object

(define-dissection-command 'eval '(e scheme)
  "Evaluates an expression."
  "<expression>"
  '("Evalutes EXPRESSION in the interaction environment and prints the"
    "results.  This does not modify the current dissection.")
  1
  (lambda (dissection expression)
    (dissection-apply dissection
                      `(lambda (,(gensym)) ,expression))))

(define-dissection-command 'apply '(a)
  "Apply a function to the focus object."
  "<expression>"
  '("Evaluates EXPRESSION in the interaction environment, which should"
    "produce a unary function, and applies it to the current focus"
    "object.  This does not modify the current dissection.")
  1
  dissection-apply)

(define-dissection-command 'dissect '(d)
  "Dissect a completely new object."
  "<expression>"
  '("Evaluates EXPRESSION in the interaction environment and dissects"
    "the value that is produced.  EXPRESSION may evaluate to one or"
    "more values.  With one value, that value is dissected; with more,"
    "a list of the values is dissected.")
  1
  (lambda (dissection expression)
    (dissection-apply/dissect dissection
                              `(lambda (,(gensym)) ,expression))))

(define-dissection-command 'apply/dissect '(ad)
  "Apply a function to the focus object & dissect its result."
  "<expression>"
  '("Evaluates EXPRESSION in the interaction environment, which should"
    "produce a unary function, and applies it to the current focus"
    "object.  It must return at least one value.  If it returns one"
    "value, that value is dissected; if it returns more than one, a"
    "list containing the values is dissected.")
  1
  dissection-apply/dissect)

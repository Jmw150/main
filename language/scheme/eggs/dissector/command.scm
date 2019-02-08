;;;;;; Dissection commands

;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.

;++ Come up with a better naming strategy for command-related things...

(define (read-dissection-command port
                                 k-eof k-failure k-blank k-success)
  (let ((line (read-line port)))
    (cond ((eof-object? line)
           (k-eof))
          ((= (string-length line) 0)
           (k-blank))
          (else
           (let ((command-name.args
                  (read-objects-from-string line 20)))
             (if (and command-name.args
                      (pair? command-name.args)
                      (symbol? (car command-name.args))
                      (list? (cdr command-name.args)))
                 (k-success (car command-name.args)
                            (cdr command-name.args))
                 (k-failure line)))))))

(define-record-type rtd/dissection-command
  (make-dissection-command name aliases
                           quick-help args-help long-help
                           argc proc)
  dissection-command?
  (name dissection-command-name)
  (aliases dissection-command-aliases)
  (quick-help dissection-command-quick-help)
  (args-help dissection-command-args-help)
  (long-help dissection-command-long-help)
  (argc dissection-command-argc)
  (proc dissection-command-proc))

(define *dissection-commands* '())
(define (define-dissection-command name aliases
                                   quick-help args-help long-help
                                   argc proc)
  (set! *dissection-commands*
        (cons (make-dissection-command name aliases
                                       quick-help args-help long-help
                                       argc proc)
              *dissection-commands*)))
(define (dissection-command name)
  (let loop ((commands *dissection-commands*))
    (cond ((null? commands)
           (error "No such dissection command" name))
          ((or (eq? (dissection-command-name (car commands)) name)
               (memq name (dissection-command-aliases (car commands))))
           (car commands))
          (else
           (loop (cdr commands))))))

(define (carefully-handle-dissection-command command-name dissection
                                             arguments)
  (with-exceptions-printed-to-port (dissection-outport dissection)
    (lambda ()
      (really-handle-dissection-command command-name dissection
                                        arguments))))

(define (really-handle-dissection-command command-name dissection
                                          arguments)
  (let* ((command (dissection-command command-name))
         (argc (dissection-command-argc command))
         (proc (dissection-command-proc command)))
    (cond ((not argc) #t)
          ((integer? argc)
           (cond ((negative? argc)
                  (if (not (length>=? arguments (- -1 argc)))
                      (error "Too few arguments to command"
                             `(expected at least ,(- -1 argc)))))
                 ((not (length=? arguments argc))
                  (error "Wrong number of arguments to command"
                         `(expected ,argc)))))
          (else
           (if (not (any? (lambda (count) (length=? arguments count))
                          argc))
               (error "Wrong number of arguments to command"
                      `(expected any of ,argc)))))
    (apply proc dissection arguments)))



;;; --------------------
;;; Displaying command help

;++ The help messages really ought to be fit into your terminal width.

(define (display-help-synopsis port)
  (display "This is the interactive Chicken dissector." port)
  (newline port)
  (newline port)
  (display "Supported dissector commands:" port)
  (newline port)
  (for-each (lambda (command)
              (display "   " port)
              (write (dissection-command-name command) port)
              (let ((aliases (dissection-command-aliases command)))
                (cond ((not (null? aliases))
                       (display " " port)
                       (write aliases port))))
              (display " - " port)
              (display (dissection-command-quick-help command) port)
              (newline port))
            (dissector-sort *dissection-commands*
              (lambda (cmd-a cmd-b)
                (string<? (symbol->string
                           (dissection-command-name cmd-a))
                          (symbol->string
                           (dissection-command-name cmd-b))))))
  (newline port)
  (display "For help on an individual command, use: ? <command>" port)
  (newline port)
  (flush-output port))

(define (display-command-help command port)
  (display "Dissector command: ")
  (display (dissection-command-name command) port)
  (cond ((dissection-command-args-help command)
         => (lambda (args-help)
              (display " " port)
              (display args-help port))))
  (let ((aliases (dissection-command-aliases command)))
    (cond ((not (null? aliases))
           (newline port)
           (display "      " port)
           (write (cons 'aliases: aliases) port))))
  (newline port)
  (for-each (lambda (line)
              (display "   " port)
              (display line  port)
              (newline port))
            (cond ((dissection-command-long-help command))
                  (else
                   (list (dissection-command-quick-help command)))))
  (flush-output port))

(define-dissection-command 'help '(?)
  "Print help for commands."
  "[<command>]"
  '("If COMMAND is absent, prints out a brief help synopsis for every"
    "supported command; otherwise prints out help for COMMAND.")
  '(0 1)
  (case-lambda
    ((dissector)
     (display-help-synopsis (dissection-outport dissector)))
    ((dissector command)
     (display-command-help (dissection-command command)
                           (dissection-outport dissector)))))


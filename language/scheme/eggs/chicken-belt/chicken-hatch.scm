#!/bin/sh
#| -*- mode: scheme -*-
exec csi -s $0 "$@"
|#

(use matchable posix srfi-1 srfi-13)

(include "utils.scm")

(define egg-name #f)
(define egg-dir #f)
(define egg-category #f)
(define egg-license #f)
(define egg-author #f)
(define egg-synopsis #f)

(define available-categories
  '((lang-exts . "Language extensions")
    (graphics . "Graphics")
    (debugging . "Debugging tools")
    (logic . "Logic programming")
    (net . "Networking")
    (io . "Input/Output")
    (db . "Databases")
    (os . "OS interface")
    (ffi . "Interfacing to other languages")
    (web . "Web programming")
    (xml . "XML processing")
    (doc-tools . "Documentation tools")
    (egg-tools . "Egg tools")
    (math . "Mathematical libraries")
    (oop . "Object-oriented programming")
    (data . "Algorithms and data-structures")
    (parsing . "Data formats and parsing")
    (tools . "Tools")
    (sound . "Sound")
    (testing . "Unit-testing")
    (crypt . "Cryptography")
    (ui . "User interface toolkits")
    (code-generation . "Code generation")
    (macros . "Macros and meta-syntax")
    (misc . "Miscellaneous")
    (hell . "Concurrency and parallelism")
    (obsolete . "Unsupported or redundant")))

(define (usage #!optional (print printf-newline) message)
  (print "~AUsage: ~A [OPTION ...] EGG-NAME
Create an egg directory named EGG-NAME in the current directory.

Options:
  -c, --category
    the egg's category

  -l, --license
    the license the egg can be copied and used under

  -h, --help
    show this help"
         (if message
             (string-append message "\n\n")
             "")
         (pathname-file (program-name))))

(let loop ((args (command-line-arguments)))
  (match args
    (()
     (unless egg-name
       (usage fail "Missing EGG-NAME")))
    (((or "-h" "--help") rest ...)
     (usage)
     (exit))
    (((or "-c" "--category") rest ...)
     (when (null? rest)
       (fail "Missing category option argument"))
     (set! egg-category (string->symbol (car rest)))
     (loop (cdr rest)))
    (((or "-l" "--license") rest ...)
     (when (null? rest)
       (fail "Missing license argument"))
     (set! egg-license (car rest))
     (loop (cdr rest)))
    ((name rest ...)
     (set! egg-name name)
     (loop rest))))

(unless egg-dir
  (set! egg-dir (make-pathname (current-directory) egg-name)))

(when (file-exists? egg-name)
  (fail "Egg directory already exists: ~A" egg-dir))

(unless egg-category
  (let loop ()
    (for-each
     (lambda (idx cat)
       (printf "~A) ~A (~A)~%" idx (car cat) (cdr cat)))
     (iota (length available-categories))
     available-categories)
    (newline)
    (display "Choose egg category: ")
    (let* ((choice (read-line))
           (choice (and (not (eof-object? choice))
                        (string->number choice)))
           (choice (and choice
                        (< choice (length available-categories))
                        (list-ref available-categories choice))))
      (if choice
          (set! egg-category (car choice))
          (loop)))))

(unless (assq egg-category available-categories)
  (fail "Invalid egg category: ~A" egg-category))

(define (prompt-for prompt #!optional default)
  (let loop ()
    (newline)
    (display prompt)
    (let ((input (read-line)))
      (if (or (eof-object? input)
              (equal? (string-trim-both input) ""))
          (or default (loop))
          input))))

(unless egg-license
  (set! egg-license
        (prompt-for "License (default is \"BSD\", same as Chicken's): " "BSD")))

(unless egg-author
  (set! egg-author (prompt-for "Your name: ")))

(unless egg-synopsis
  (set! egg-synopsis (prompt-for "Egg synopsis: ")))

(define egg-symbol
  (string->symbol egg-name))

(define egg-name.scm
  (string-append egg-name ".scm"))

(define egg-name.so
  (string-append egg-name ".so"))

(define egg-name.import.scm
  (string-append egg-name ".import.scm"))

(define egg-name.import.so
  (string-append egg-name ".import.so"))

(define (write-egg-file extension content)
  (call-with-output-file (make-pathname egg-dir egg-name extension)
    (lambda (out)
      (display content out)
      (newline out))))

(define (write-string x)
  (with-output-to-string (lambda () (write x))))

(create-directory egg-dir #t)

(write-egg-file "setup"
#<#EOF
(compile -d0 -O2 -J -s #(write-string (string->symbol egg-name.scm)))
(compile -d0 -O2 -s #(write-string (string->symbol egg-name.import.scm)))

(install-extension
 '#(write-string egg-symbol)
 '#(write-string (list egg-name.so egg-name.import.so))
 '((version "0.0.1")))
EOF
)

(write-egg-file "meta"
#<#EOF
((synopsis #(write-string egg-synopsis))
 (author #(write-string egg-author))
 (category #egg-category)
 (license #(write-string egg-license))
 (depends)
 (test-depends)
 (foreign-depends))
EOF
)

(write-egg-file "scm"
#<#EOF
(module #(write-string egg-symbol)

()

(import chicken scheme)

)
EOF
)

(newline)
(print "Successfully hatched " egg-name "!")

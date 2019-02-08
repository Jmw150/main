#!/bin/sh
#| -*- mode: scheme -*-
exec csi -s $0 "$@"
|#

(use extras posix matchable)
(require-library setup-api)
(import (only setup-api remove-directory))
(include "chicken-env")
(include "utils")

(define (usage #!optional (print printf-newline))
  (print "Usage: ~A [OPTION ...] NAME
Build Chicken in current directory and install it to $CHICKENS/NAME.

Options:
  -b, --bootstrap
    build and use a bootstrap Chicken

  -c, --chicken CHICKEN_NAME
    use $CHICKENS/CHICKEN_NAME/bin/chicken for compiling

  -n, --no-spotless
    don't run make spotless before building

  -d, --debug
    make a debug build

  -t, --test
    test the build after installation

  -h, --help
    show this help"
         (pathname-file (program-name))))

(define build-boot-chicken? #f)
(define debug-build? #f)
(define chicken-name #f)
(define chicken-bin #f)
(define spotless? #t)
(define test? #f)

(when (null? (command-line-arguments))
  (usage fail))

(let loop ((args (command-line-arguments)))
  (match args
    (((or "-b" "--bootstrap") rest ...)
     (set! build-boot-chicken? #t)
     (loop rest))
    (((or "-d" "--debug") rest ...)
     (set! debug-build? #t)
     (loop rest))
    (((or "-n" "--no-spotless") rest ...)
     (set! spotless? #f)
     (loop rest))
    (((or "-t" "--test") rest ...)
     (set! test? #t)
     (loop rest))
    (((or "-c" "--chicken") rest ...)
     (when (null? rest)
       (printf-error "Missing argument for -c~%")
       (usage fail))
     (set! chicken-bin (make-pathname (make-pathname chicken-coop (car rest)) "bin/chicken"))
     (loop (cdr rest)))
    (((or "-h" "--help") rest ...)
     (usage)
     (exit))
    ((name) (=> skip)
     (if (equal? #\- (string-ref name 0))
         (skip)
         (set! chicken-name name)))
    (rest
     (unless (null? rest)
       (printf-error "Invalid arguments: ~S~%" rest)
       (usage fail)))))

(assert-chicken-coop-exists)

(unless chicken-name
  (printf-error "Missing NAME~%")
  (usage fail))

(when (equal? chicken-link chicken-name)
  (fail "Invalid installation name: ~S" chicken-name))

(define chicken-path
  (normalize-pathname (make-pathname chicken-coop chicken-name)))

(define (run name . args)
  (receive (pid success? status)
      (process-wait (process-run name args))
    (unless (and success? (zero? status))
      (exit 1))))

(define purge? #f)

(when (file-exists? chicken-path)
  (printf "Chicken already exists: ~A" chicken-path)
  (if (yes-or-no? "Continue? This will purge the existing directory before installation." #f #f exit)
      (set! purge? #t)
      (exit)))

(when spotless?
  (run "make" "spotless"))

(when chicken-bin
  (setenv "CHICKEN" chicken-bin))

(when build-boot-chicken?
  (run "make" "boot-chicken")
  (setenv "CHICKEN" "./chicken-boot")
  (run "make" "spotless"))

(when debug-build?
  (setenv "DEBUGBUILD" "1"))

(setenv "PREFIX" chicken-path)

(run "make")

(when purge?
  (remove-directory chicken-path))

(create-directory chicken-path)
(run "make" "install")

(when test?
  (run "make" "check"))

#!/bin/sh
#| -*- mode: scheme -*-
exec csi -s $0 "$@"
|#

(use srfi-1 posix data-structures)
(include "chicken-env")

(assert-chicken-coop-exists)

(define verbose? #f)
(define target-chicken #f)

(define (available-chickens)
  (filter (lambda (p) (not (equal? chicken-link p)))
          (directory chicken-coop)))

(for-each
  (lambda (arg)
    (cond ((equal? "-v" arg)
           (set! verbose? #t))
          ((member arg (available-chickens))
           (set! target-chicken arg))
          (else
           (fail "Invalid argument: ~S" arg))))
  (command-line-arguments))

(define (current-chicken path link)
  (let ((p (make-pathname path link)))
    (and (symbolic-link? p)
         (read-symbolic-link p))))

(define (set-current-chicken chicken link)
  (let ((symlink (make-pathname chicken-coop link)))
    (when (file-exists? symlink)
      (delete-file symlink))
    (create-symbolic-link chicken symlink)))

(define (print-chicken-version chicken)
  (let* ((csi (make-pathname chicken-coop chicken))
         (csi (make-pathname csi "bin"))
         (csi (make-pathname csi "csi")))
    (with-input-from-pipe
        (string-concatenate (list csi " -n -p " "'(chicken-version #t)'"))
      (lambda () (printf "\t~a~%" (read-line))))))

(if target-chicken
  (set-current-chicken target-chicken chicken-link)
  (let* ((all-chicks (sort (available-chickens) string<?))
         (current (list-index (cut equal? (current-chicken chicken-coop chicken-link) <>) all-chicks)))
    (let select ((abort #f))
      (if (equal? abort #\return)
          (begin
            (print "Aborted.")
            (exit 0))
          (begin
            (for-each (lambda (c n)
                        (printf "~a [~a]: ~a~%"
                                (if (equal? n current) "->" "  ")
                                n c)
                        (when verbose?
                          (print-chicken-version c)))
                      all-chicks
                      (iota (length all-chicks)))
            (newline)
            (print* "Select a new Chicken, press ENTER to abort: ")
            (let ((choice-raw (read-line)))
              (if (equal? choice-raw "")
                  (exit)
                  (let ((num (string->number choice-raw)))
                    (if (and
                         num
                         (<= 0 num)
                         (< num (length all-chicks)))
                        (begin
                          (print "Setting current Chicken to " (list-ref all-chicks num))
                          (set-current-chicken (list-ref all-chicks
                                                         num)
                                               chicken-link))
                        (select choice-raw))))))))))

;;;; chicken-bug.scm - Bug report-generator
;
; Copyright (c) 2008-2017, The CHICKEN Team
; All rights reserved.
;
; Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following
; conditions are met:
;
;   Redistributions of source code must retain the above copyright notice, this list of conditions and the following
;     disclaimer. 
;   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
;     disclaimer in the documentation and/or other materials provided with the distribution. 
;   Neither the name of the author nor the names of its contributors may be used to endorse or promote
;     products derived from this software without specific prior written permission. 
;
; THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
; OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
; AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR
; CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
; CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
; SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
; THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
; POSSIBILITY OF SUCH DAMAGE.


(require-extension srfi-13 posix tcp data-structures utils extras)


(define-constant +bug-report-file+ "chicken-bug-report.~a-~a-~a")

(define-foreign-variable +cc+ c-string "C_TARGET_CC")
(define-foreign-variable +cxx+ c-string "C_TARGET_CXX")
(define-foreign-variable +c-include-path+ c-string "C_INSTALL_INCLUDE_HOME")

(define (user-id)
  (cond-expand
   (mingw32 "<not available>")
   (else (user-information (current-user-id)))))

(define (collect-info)
  (print "\n--------------------------------------------------\n")
  (print "This is a bug report generated by chicken-bug(1).\n")
  (print "Date:\t" (seconds->string (current-seconds)) "\n\n")
  (printf "User information:\t~s~%~%" (user-id))
  (print "Host information:\n")
  (print "\tmachine type:\t" (machine-type))
  (print "\tsoftware type:\t" (software-type))
  (print "\tsoftware version:\t" (software-version))
  (print "\tbuild platform:\t" (build-platform) "\n")
  (print "CHICKEN version is:\n" (chicken-version #t) "\n")
  (print "Home directory:\t" (chicken-home) "\n")
  (printf "Include path:\t~s~%~%" ##sys#include-pathnames)
  (print "Features:")
  (for-each
   (lambda (lst) 
     (display "\n  ")
     (for-each 
      (lambda (f)
	(printf "~a~a" f (make-string (fxmax 1 (fx- 16 (string-length f))) #\space)) )
      lst) )
   (chop (sort (map keyword->string ##sys#features) string<?) 5))
  (print "\n\nchicken-config.h:\n")
  (with-input-from-file (make-pathname +c-include-path+ "chicken-config.h")
    (lambda ()
      (display (read-all)) ) )
  (newline)
  (when (and (string=? +cc+ "gcc") (feature? 'unix))
    (print "CC seems to be gcc, trying to obtain version...\n")
    (with-input-from-pipe "gcc -v 2>&1"
      (lambda ()
	(display (read-all)))))
  (newline) )

(define (usage code)
  (print #<<EOF
usage: chicken-bug [FILENAME ...]

  -help  -h            show this message
  -to-stdout           write bug report to standard output
  -                    read description from standard input

Generates a bug report file from user input or alternatively
from the contents of files given on the command line.

EOF
) 
  (exit code) )

(define (user-input)
  (when (##sys#tty-port? (current-input-port))
    (print #<<EOF
This is the CHICKEN bug report generator. Please enter a detailed
description of the problem you have encountered and enter CTRL-D (EOF)
or a line consisting only of "." to finish. Press CTRL-C to abort the program. You can
also pass the description from a file (just abort now and re-invoke
"chicken-bug" with one or more input files given on the command-line)

EOF
) )
  (let loop ((data '()))
    (let ((ln (read-line)))
      (cond ((or (eof-object? ln) (string=? "." ln))
	     (string-concatenate-reverse data) )
	    (else (loop (cons ln data)))))))

(define (justify n)
  (let ((s (number->string n)))
    (if (> (string-length s) 1)
	s
	(string-append "0" s))))

(define (main args)
  (let ((msg "")
	(files #f)
	(stdout #f))
    (for-each
     (lambda (arg)
       (cond ((string=? "-" arg) 
	      (set! files #t)
	      (set! msg (string-append msg "\n\nUser input:\n\n" (user-input))) )
	     ((member arg '("--help" "-h" "-help"))
	      (usage 0) )
	     ((string=? "-to-stdout" arg)
	      (set! stdout #t) )
	     (else
	      (set! files #t)
	      (set! msg 
		(string-append
		 msg
		 "\n\nFile added: " arg "\n\n"
		 (read-all arg) ) ) ) ) )
     args)
    (unless files
      (set! msg (string-append msg "\n\n" (user-input))))
    (newline)
    (let* ((lt (seconds->local-time (current-seconds)))
	   (day (vector-ref lt 3))
	   (mon (vector-ref lt 4))
	   (yr (vector-ref lt 5)) )
      (if stdout
	  (begin
	    (print msg)
	    (collect-info))
	  (generate-report 
	   (sprintf +bug-report-file+ (+ 1900 yr) (justify mon) (justify day))
	   (with-output-to-string
	     (lambda ()
	       (print msg)
	       (collect-info))))))))

(define (generate-report fname msg)
  (with-output-to-file fname
    (lambda () (print msg)))
  (print "\nA bug report has been written to `" fname "'."))

(main (command-line-arguments))

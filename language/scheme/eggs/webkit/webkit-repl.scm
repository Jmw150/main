;; -*- mode: Scheme; -*-
;;
;; This file is part of WebKit for CHICKEN
;; Copyright (c) 2011 by Thomas Chust.  All rights reserved.
;;
;; Permission is hereby granted, free of charge, to any person
;; obtaining a copy of this software and associated documentation
;; files (the Software), to deal in the Software without restriction,
;; including without limitation the rights to use, copy, modify,
;; merge, publish, distribute, sublicense, and/or sell copies of the
;; Software, and to permit persons to whom the Software is furnished
;; to do so, subject to the following conditions:
;; 
;; The above copyright notice and this permission notice shall be
;; included in all copies or substantial portions of the Software.
;; 
;; THE SOFTWARE IS PROVIDED ASIS, WITHOUT WARRANTY OF ANY KIND,
;; EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
;; MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
;; NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
;; BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
;; ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
;; CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
;; SOFTWARE.

(require-extension
 srfi-18 files extras webkit)

(define-record-type html
  (html xexpr) html?
  (xexpr html-xexpr))

(define interact
  (letrec ((open-output-element
	    (lambda (elt class)
	      (make-output-port
	       (lambda (str)
		 ((jso-ref elt 'appendChild)
		  (xexpr->jso
		   `(span ((class ,class)) ,str)
		   (jso-ref elt 'ownerDocument))))
	       void)))
	   (interact
	    (lambda (eval cmd in-elt out-elt)
	      (thread-join!
	       (thread-start!
		(make-thread
		 (lambda ()
		   (let ((input (open-output-element in-elt "input"))
			 (result (open-output-element out-elt "result"))
			 (output (open-output-element out-elt "output"))
			 (error (open-output-element out-elt "error")))
		     (handle-exceptions
		      exn (begin
			    (print-error-message exn error)
			    (print-call-chain error)
			    #f)
		      (display cmd input)
		      (let ((v (parameterize ((current-input-port
					       (open-input-string cmd))
					      (current-output-port
					       output)
					      (current-error-port
					       error))
				 (eval (read)))))
			(cond
			 ((eqv? v (void))
			  (void))
			 ((html? v)
			  ((jso-ref out-elt 'appendChild)
			   (xexpr->jso
			    (html-xexpr v)
			    (jso-ref out-elt 'ownerDocument))))
			 (else
			  (pretty-print v result))))
		      #t)))))))))
    interact))

(define (initialize-repl-window! window)
  (let ((chicken (jso-new (jso-ref window 'Object))))
    (set! (jso-ref chicken 'version) (chicken-version #t))
    (set! (jso-ref chicken 'interact) interact)
    (set! (jso-ref chicken 'eval) eval)
    (set! (jso-ref chicken 'expand) expand)
    (set! (jso-ref window 'chicken) chicken)))

(make-window
 (string-append
  "file://"
  (make-absolute-pathname (repository-path) "webkit-repl.html"))
 #:width 640 #:height 480
 #:scrollbar-visible? #t #:status-visible? #f
 #:initialize! initialize-repl-window!)

(main-loop)

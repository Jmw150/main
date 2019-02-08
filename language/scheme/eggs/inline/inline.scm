;;;; inline.scm
;
; Copyright (c) 2003-2013, Felix L. Winkelmann
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


(module inline (inline inline-compile inline-eval inline-cache)

(import scheme chicken foreign)
(use bind simple-sha1 files extras utils posix data-structures)

(define-syntax inline
  (syntax-rules ()
    ((_ text more ...)
     (cond-expand
       (compiling (bind* ,text))
       (else (inline-compile text more ...)) ) )))

(define (inline-eval x . o)
  (inline-compile x (if (pair? o) (car o) "") #t))

(define +default-inline-cache-name+
  (or (get-environment-variable "CHICKEN_INLINE_CACHE")
      (make-pathname (get-environment-variable "HOME") ".chicken-inline")))

(define windows-shell (foreign-value "C_WINDOWS_SHELL" bool))
(define inline-cache (make-parameter +default-inline-cache-name+))

(define catalog '())	; ((#(HASH OPTIONS TEXT) . PROC) ...)

(define (inline-compile text . more)
  (let* ([opts (if (pair? more) (car more) "")]
	 [scheme? (and (pair? more) (pair? (cdr more)) (cadr more))]
	 [hc (string->sha1sum (if scheme? (->string text) text))]
	 [tmp-sym (and scheme? (string->symbol (string-append "inline#" hc)))]
	 [fname (make-pathname (inline-cache) (->string hc) "scm")]
	 [p (vector hc opts text)]
	 [a (member p catalog)] )
    (define (doload fname)
      (load (pathname-replace-extension fname ##sys#load-dynamic-extension)) )
    (unless a
      (let ([tmp (create-temporary-file "scm")]
	    (cmd (sprintf "csc ~A -s -O2 -d1 ~A -R bind" fname opts)))
	(with-output-to-file tmp
	  (lambda ()
	    (printf "; ~A~%" cmd)
	    (if scheme?
                (pp `(define (,tmp-sym) ,text))
                (pp `(bind* ,text)))) )
	(ensure-cache)
	(if (and (file-exists? fname) (files-equal? tmp fname))
	    (begin
	      (delete-file* tmp)
	      (doload fname)
	      (update-inline-catalog p) )
	    (begin
	      (system*
	       "~a ~A ~A"
	       (if windows-shell "move" "mv")
	       (qs tmp) (qs fname))
	      (system* cmd)
	      (doload fname)
	      (update-inline-catalog p) ) ) ) )
    (if scheme?
        ((eval tmp-sym))
        (void)) ) )

(define (update-inline-catalog key)
  (unless (member key catalog)
    (set! catalog (cons key catalog)) ) )

(define (files-equal? a b)
  (and (= (file-size a) (file-size b))
       (if windows-shell
	   (string=? (read-all a) (read-all b))
	   (zero? (system (sprintf "cmp -s ~A ~A" (qs a) (qs b)))) )))

(define (ensure-cache)
  (unless (file-exists? (inline-cache))
    (create-directory (inline-cache) #t) ) )

)

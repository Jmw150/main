;;
;;  A parser for a simple ML-like language.
;;
;;  Based on the code and paper by Xavier Leroy (2000): A modular
;;  module system. Journal of Functional Programming, 10, pp 269-303
;;  doi:10.1017/S0956796800003683
;;
;;
;; Copyright 2010-2012 Ivan Raikov and the Okinawa Institute of
;; Science and Technology.
;;
;; This program is free software: you can redistribute it and/or
;; modify it under the terms of the GNU General Public License as
;; published by the Free Software Foundation, either version 3 of the
;; License, or (at your option) any later version.
;;
;; This program is distributed in the hope that it will be useful, but
;; WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
;; General Public License for more details.
;;
;; A full copy of the GPL license can be found at
;; <http://www.gnu.org/licenses/>.
;;


(module miniMLparse

	(parse)

	(import scheme chicken 
		(only srfi-1 fold combine every unzip2 filter-map)
		(only data-structures conc sort)
		(only extras fprintf))
	(require-extension extras static-modules miniML miniMLsyntax)


(define-values (type-variables reset-type-variables
	        find-type-variable instance typerepr
		begin-def end-def newvar generalize
		make-deftype make-valtype make-kind
		binop ternop path-star path-list path-arrow
		star-type list-type arrow-type label-type string-type bot-type)
  (core-utils))

(define-syntax tok
  (syntax-rules ()
    ((tok loc t) (make-lexical-token (quasiquote t) loc #f))
    ((tok loc t l) (make-lexical-token (quasiquote t) loc l))))


(include "miniML.grm.scm")
(include "miniML.l.scm")


(define (make-parse-error loc)
  (lambda (msg #!optional arg)
    (let ((loc-str (or (and loc (if (list? loc) (conc " " loc " ") (conc " (" loc ") "))) "")))
      (cond  [(not arg) (error loc-str msg)]
	     [(lexical-token? arg)
	      (error (conc "line " (let ((src  (lexical-token-source arg)))
				     (if (source-location? src) 
					 (source-location-line src)
					 src))
			   ": " msg) loc-str
		     (conc (lexical-token-category arg) 
			   (if (lexical-token-value arg) (conc " " (lexical-token-value arg)) "")))]
	     [else (error loc-str (conc msg arg))]
	     ))))

(define lexer-error error)

(define (rfield-compare x y) 
  (let ((xn (car x)) (yn (car y)))
    (string<? (if (ident? xn) (ident-name xn) (symbol->string xn))
	      (if (ident? yn) (ident-name yn) (symbol->string yn)))))

(define (parse loc s)
  (cond ((port? s)   (lexer-init 'port s))
	((string? s) (lexer-init 'string s))
	(else (error 'parse "bad argument type; not a string or port" s)) )
  (reverse (parser lexer (make-parse-error loc))) )

)

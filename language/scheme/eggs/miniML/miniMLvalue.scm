;;
;;  A type checker and interpreter for a simple ML-like language.
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

(module miniMLvalue

	( MLvalue? Const_v Closure_v Prim_v Tuple_v Record_v )

	(import scheme chicken)

	(require-extension datatype)
	(require-library srfi-1 miniML)
	(import
	        (only srfi-1 every)
		(only extras pp fprintf)
		(only miniML constant? term? core-syntax const->sxml term->sxml modterm->sxml moddef->sxml )
		)


(define (list-of pred) (lambda (x) (and (list? x) (every pred x))))
(define (pair-of pred) (lambda (x) (and (pair? x) (pred (car x)) (pred (cdr x)))))

(define (fieldval? v) 
  (and (pair? v) (symbol? (car v)) (MLvalue? (cdr v))))


(define-datatype MLvalue MLvalue?
  (Const_v    (c constant?))
  (Closure_v  (body term?) (env list?))
  (Prim_v     (v procedure?))
  (Tuple_v    (slots (lambda (x) (or (null? x) ((pair-of MLvalue?) x)))))
  (Record_v   (fields (list-of fieldval?)))
  )


(define-record-printer (MLvalue x out)
  (fprintf out "#<MLvalue ~S>"
	   (cases MLvalue x
		  (Const_v (c) `(Const ,c))
		  (Closure_v (body env) 
			     (if (null? env) `(Closure ,body ())
				 `(Closure ,body (,(car env) ...))))
		  (Prim_v (p) `(Prim ,p))
		  (Tuple_v (d) `(Tuple ,d))
		  (Record_v (fs) `(Record ,fs))
		  )))


)

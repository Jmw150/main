;; -*- mode: Scheme; -*-
;;
;; This file is part of SRFI-99 for CHICKEN
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
 srfi-99 test)

(test-group "procedural layer"

  (test-group "RTD creation"
    (test-assert "null record" (rtd? (make-rtd 'foo '#())))
    (test-error "bad name" (make-rtd 42 '#()))
    (test-error "bad fields" (make-rtd 'foo '#((murks quark))))
    (test-error "bad parent" (make-rtd 'foo '#() 'murks)))

  (test-group "RTD properties"
    (test "type name" 'foo (rtd-name (make-rtd 'foo '#())))
    (test "type UID" 'bar (rtd-uid (make-rtd 'foo '#() #f #:uid 'bar)))
    (test "unsealed type" #f (rtd-sealed? (make-rtd 'foo '#() #f)))
    (test "sealed type" #t (rtd-sealed? (make-rtd 'foo '#() #f #:sealed #t)))
    (test "transparent type" #f (rtd-opaque? (make-rtd 'foo '#() #f)))
    (test "opaque type" #t (rtd-opaque? (make-rtd 'foo '#() #f #:opaque #t)))
    (test "implicit immutable field" #f (rtd-field-mutable? (make-rtd 'foo '#(x)) 'x))
    (test "explicit immutable field" #f (rtd-field-mutable? (make-rtd 'foo '#((immutable x))) 'x))
    (test "implicit mutable field" #t (rtd-field-mutable? (make-rtd 'foo '#((x))) 'x))
    (test "explicit mutable field" #t (rtd-field-mutable? (make-rtd 'foo '#((mutable x))) 'x)))

  (test-group "RTD instances"
    (let ((t (make-rtd 'foo '#(x (y)))))
      (define make-t (rtd-constructor t))
      (define t? (rtd-predicate t))
      (define t-x (rtd-accessor t 'x))
      (define t-y (rtd-accessor t 'y))
      (test "instance detection" #t (t? (make-t 1 2)))
      (test "non-instance detection" #f (t? 'foo))
      (test "field access" 42 (t-x (make-t 42 23)))
      (test "field mutation" 23 (let ((r (make-t 42 0))) (set! (t-y r) 23) (t-y r)))
      (test-error "disallowed field mutation" (set! (t-x (make-t 42 23)) 0))))

  (test-group "RTD inheritance"
    (let* ((t0 (make-rtd 'foo '#(x y)))
	   (t1 (make-rtd 'bar '#(z) t0 #:sealed #t)))
      (define make-t1 (rtd-constructor t1 '#()))
      (define t0? (rtd-predicate t0))
      (define t1? (rtd-predicate t1))
      (test "direct field enumeration" '#(z) (rtd-field-names t1))
      (test "full field enumeration" '#(x y z) (rtd-all-field-names t1))
      (test "direct instance detection" #t (t1? (make-t1)))
      (test "indirect instance detection" #t (t0? (make-t1)))
      (test-error "disallowed derivation" (make-rtd 'baz '#() t1))))
  
  (test-group "properties"
    (let* ((p0 (make-rtp 42))
	   (p1 (make-rtp))
	   (t0 (make-rtd 'foo '#(x) #:property p0 23))
	   (t1 (make-rtd 'bar '#(y) t0 #:property p1 'y)))
      (define make-t0 (rtd-constructor t0 '#(x)))
      (define make-t1 (rtd-constructor t1 '#(y)))
      (test "direct type property access" 23 (p0 #f t0))
      (test "derived type property access" 23 (p0 #f t1))
      (test "direct instance property access" 23 (p0 (make-t0 1)))
      (test "derived instance property access" 23 (p0 (make-t1 1)))
      (test-error "illegal field property access" (p1 #f t1))
      (test "field property access" 2 (p1 (make-t1 2)))))

)

(test-group "syntactic layer" (let ()

  (define-record-type foo
    #t #t
    x (y))
  
  (test-assert "RTD" (rtd? foo))
  (test-assert "constructor" (procedure? make-foo))
  (test-assert "predicate" (procedure? foo?))
  (test-assert "immutable accessor" (procedure? foo-x))
  (test-assert "mutable accessor" (procedure? foo-y))
  (test-assert "mutable mutator" (procedure? foo-y-set!))
  (test-assert "mutable accessor setter" (procedure? (setter foo-y)))

))

(test-group "variants" (let ()

  (define-variant-type foo
    #t
    (foobar x)
    (foobaz x y))
  
  (test-assert "RTD" (rtd? foo))
  (test-assert "predicate" (procedure? foo?))
  (test-assert "variant constructors" (every procedure? (list foobar foobaz)))
  (test-assert "variant RTDs" (every rtd? (map procedure-data (list foobar foobaz))))
  (test "variant extraction" 2 (variant-case foo (foobaz 1 2)
				 ((foobar x) x)
				 ((foobaz y) y)))
  (test "else clause" 42 (variant-case foo (foobaz 1 2)
			   ((foobar x) x)
			   (else 42)))
  (test-error "match error" (variant-case foo (foobaz 1 2)
			      ((foobar x) x)))

))
	 
(test-exit)

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

(foreign-declare
 "#include <JavaScriptCore/JavaScript.h>")

(define-foreign-type jscontext
  (nonnull-c-pointer (struct "OpaqueJSContext")))

(define-foreign-type jsstring
  (nonnull-c-pointer (struct "OpaqueJSString")))

(define-foreign-type jsclass
  (nonnull-c-pointer (struct "OpaqueJSClass")))

(define-foreign-type jsvalue
  (c-pointer (const (struct "OpaqueJSValue"))))

(define-foreign-type jsobject
  (nonnull-c-pointer (struct "OpaqueJSValue")))

(define-foreign-type jsnames
  (nonnull-c-pointer (struct "OpaqueJSPropertyNameArray")))

(define-foreign-type jsname+
  (nonnull-c-pointer (struct "OpaqueJSPropertyNameAccumulator")))

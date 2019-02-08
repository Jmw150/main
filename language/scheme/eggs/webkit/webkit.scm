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

(require-library
 lolevel
 srfi-1 srfi-13 srfi-18 srfi-42 srfi-69 srfi-99 data-structures)

(module webkit-js
  (jscontext-invalidate!
   jso jso?
   jso-context jso-this jso-pointer
   current-jso
   collect-jserror!
   jsstring->string
   js->number js->string js->object js->value
   string->jsstring
   number->js string->js object->js value->js
   jso-new jso-apply
   jso-exists? jso-ref jso-set! jso-delete!
   jso-names jsnames-length jsnames-ref
   :jso jso-keys
   xexpr->jso jso->xexpr)
  (import
   scheme (except chicken define-record-type) foreign lolevel
   srfi-1 srfi-13 srfi-42 srfi-69 srfi-99 data-structures)
  (include
   "webkit-js-foreign.scm")
  (include
   "webkit-js.scm"))

(module webkit-gtk
  (current-main-loop-level
   main-loop main-loop-quit!
   make-window)
  (import
   scheme (except chicken define-record-type) foreign
   srfi-1 srfi-18 srfi-99 webkit-js)
  (include
   "webkit-js-foreign.scm")
  (include
   "webkit-gtk-foreign.scm")
  (include
   "webkit-gtk.scm"))

(module webkit
  (jso jso?
   current-jso
   jso-new jso-apply
   jso-exists? jso-ref jso-set! jso-delete!
   :jso jso-keys
   xexpr->jso jso->xexpr
   current-main-loop-level
   main-loop main-loop-quit!
   make-window)
  (import
   scheme (except chicken define-record-type)
   srfi-99 webkit-js webkit-gtk))

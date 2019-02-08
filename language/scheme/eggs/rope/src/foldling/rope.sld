;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;;;
;;; R7RS library for rope.scm.
;;;
;;; See the README and rope.scm for more information.
;;;
;;; Copyright (c) 2013-2016, Evan Hanson
;;; BSD-style license. See LICENSE for details.
;;;

(define-library (foldling rope)
  (import (scheme base)
          (scheme r5rs)
          (scheme case-lambda))
  (export empty-rope
          current-maximum-leaf-length
          string->rope rope->string
          rope-length rope-depth
          rope rope? rope=? rope-null?
          rope-balanced? rope-balance
          subrope
          rope-ref rope-set!
          rope-reverse
          rope-append rope-concatenate
          rope-fold rope-for-each
          read-rope make-rope-iterator
          open-output-rope get-output-rope)
  (include "r7rs-support.scm")
  (include "rope.scm"))

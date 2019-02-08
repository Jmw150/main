;;;; utf8-string-interpolation.scm  -*- Hen -*-
;;;; Kon Lovett, Sep '17

(module utf8-string-interpolation

(;export
  string-interpolate)

(import
  (except scheme read-char #;peek-char #;read)
  (except chicken reverse-list->string))

;refs interaction-environment parentheses-synonyms

(use
  (only utf8-srfi-13 string-concatenate-reverse #;reverse-list->string)
  (only utf8 #;peek-char read-char #;read list->string)
  (only (srfi 1) reverse!)
  (only data-structures ->string)
  (only type-checks check-string))

;;;

(define-inline (reverse-list->string clist)
  (list->string (reverse! clist)) )

(include "string-interpolation-body")

) ;utf8-string-interpolation

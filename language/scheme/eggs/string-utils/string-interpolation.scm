;;;; string-interpolation.scm  -*- Hen -*-
;;;; Kon Lovett, Sep '17

(module string-interpolation

(;export
  string-interpolate)

(import scheme chicken)

;refs interaction-environment parentheses-synonyms reverse-list->string

(use
  (only srfi-13 string-concatenate-reverse)
  (only data-structures ->string)
  (only type-checks check-string))

;;;

(include "string-interpolation-body")

) ;string-interpolation

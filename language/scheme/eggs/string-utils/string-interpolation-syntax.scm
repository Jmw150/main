;;;; string-interpolation-syntax.scm  -*- Hen -*-
;;;; Kon Lovett, Sep '17

(module string-interpolation-syntax

(;export
  set-sharp-string-interpolation-syntax)

(import scheme chicken)

;refs interaction-environment parentheses-synonyms

(use
  (only ports make-concatenated-port call-with-input-string)
  (only data-structures identity))

;;;

;(string --> string)
(: set-sharp-string-interpolation-syntax ((or boolean procedure) -> void))
(define (set-sharp-string-interpolation-syntax proc)
  (set-sharp-read-syntax! #\"
    (if (not proc)
      #f
      (let ((proc (if (boolean? proc) identity proc)))
        (lambda (rest-port)
          (call-with-input-string "\""
            (lambda (head-port)
              (let* ((port (make-concatenated-port head-port rest-port) )
                     (str (read port) ) )
                (proc str) ) ) ) ) ) ) ) )

) ;string-interpolation-syntax

(use extras posix)

(include "utils.scm")

(define chicken-coop (or (get-environment-variable "CHICKENS") "~/chickens"))
(define chicken-link "use-this")

(define (assert-chicken-coop-exists)
  (unless (and (file-exists? chicken-coop) (directory? chicken-coop))
    (fail "CHICKENS does not exist or is not a directory: ~S" chicken-coop)))

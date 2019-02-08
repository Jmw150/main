(define (printf-error msg . args)
  (display "ERROR: " (current-error-port))
  (apply fprintf (current-error-port) msg args)
  (newline (current-error-port)))

(define (printf-newline msg . args)
  (apply printf msg args)
  (newline))

(define (fail msg . args)
  (apply printf-error msg args)
  (newline (current-error-port))
  (exit 1))

;;;; string-interpolation-body.scm  -*- Hen -*-
;;;; Kon Lovett, Sep '17

;(: string-interpolate (string #!key (eval-env environment) (eval-tag char) --> string))
(: string-interpolate (string #!rest --> string))
(define (string-interpolate str
          #!key
          (eval-env (interaction-environment))
          (eval-tag #\#))
  (let ((strp (open-input-string (check-string 'string-interpolate str))))
    (parameterize ((parentheses-synonyms #t))
      (let loop ((ls '()) (sl #f))
        ;"inject" char in front
        (define (push-char ch)
          (if sl
            (cons ch sl)
            (list ch) ) )
        ;end of interp
        (define (end-str)
          (if sl
            (cons (reverse-list->string sl) ls)
            ls ) )
        ;in the text to interpolated
        (define (interpolate-body)
          (let ((ch (peek-char strp)))
            (cond
              ((eof-object? ch)
                (loop ls sl) )
              ;dup so identity
              ((char=? eval-tag ch)
                (begin
                  (read-char strp) ;drop char
                  (loop ls (push-char eval-tag)) ) )
              ;begin special eval region
              ((char=? #\{ ch)
                (loop
                  (cons (->string (eval (car (read strp)) eval-env)) (end-str))
                  #f) )
              ;end special eval region no matter what
              ;!!! we do not test for #\} !!!
              (else
                (loop
                  (cons (->string (eval (read strp) eval-env)) (end-str))
                  #f) ) ) ) )
        ;in the body or not
        (let ((ch (read-char strp)))
          (cond
            ;we're done
            ((eof-object? ch)
              (string-concatenate-reverse (end-str)) )
            ;we're interpolating
            ((char=? eval-tag ch)
              (interpolate-body) )
            ;ordinary char
            (else
              (loop ls (push-char ch)) ) ) ) ) ) ) )

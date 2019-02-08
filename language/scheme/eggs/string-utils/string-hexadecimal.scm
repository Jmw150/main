;;;; string-hexadecimal.scm  -*- Hen -*-
;;;; Kon Lovett, Aug '10
;;;; Kon Lovett, Aug '17

(module string-hexadecimal

(;export
  string->hex *string->hex
  hex->string *hex->string)

(import scheme chicken)
(use
  (only lolevel number-of-bytes)
  (only to-hex str_to_hex hex_to_str)
  (only type-checks check-natural-fixnum check-string))

(declare
  (bound-to-procedure
    ##sys#signal-hook
    ##sys#make-string))

;;;

(define-inline (fxzero? x)
  (fx= 0 x) )

;;;

(define (check-subvector-indexes loc start end)
  (unless
    (fx<=
      (check-natural-fixnum loc start 'start)
      (check-natural-fixnum loc end 'end))
    (##sys#signal-hook #:bounds-error loc "illegal subvector specification" start end) )
  #; ;cannot deal w/ (values start end)
  (void) )

;;

(: string->hex (string #!optional fixnum (or boolean fixnum) --> string))
;
(define (string->hex str #!optional (start 0) (end #f))
  (check-string 'string->hex str)
  (let ((end (or end (number-of-bytes str))))
    (check-subvector-indexes 'string->hex start end)
    (*string->hex str start end) ) )

(: hex->string (string #!optional fixnum --> string))
;
(define (hex->string str #!optional (start 0) (end #f))
  (let ((len (number-of-bytes (check-string 'hex->string str))))
    (unless (fxzero? (fxmod len 2))
      (error 'hex->string "too few characters" str) )
    (let ((end (or end len)))
      (check-subvector-indexes 'hex->string start end)
      (*hex->string str start end) ) ) )

;;

(: *string->hex (string fixnum fixnum --> string))
;
(define (*string->hex str start end)
  (let ((len (fx- end start)))
    (if (fxzero? len)
      ""
      (str_to_hex (##sys#make-string (fx* len 2)) str start len) ) ) )

(: *hex->string (string fixnum fixnum --> string))
;
(define (*hex->string str start end)
  (let ((len (fx- end start)))
    (if (fxzero? len)
      ""
      (hex_to_str (##sys#make-string (fx/ len 2)) str start len) ) ) )

#|
(use
  (only (srfi 1) drop drop-right)
  (only (srfi 13) string-pad string-concatenate  reverse-list->string))

(define (*string->hex str start end)
  (let* ((ls (string->list str) )
         (ls (drop ls start) )
         (strlen (string-length str) )
         (ls (drop-right ls (fx- strlen end)) ) )
    (string-concatenate
      (map
        (lambda (c)
          (string-pad (number->string (char->integer c) 16) 2 #\0))
      ls)) ) )

(define (*hex->string str)
  (let ((len (string-length str)))
    (let loop ((i 0) (ls '()))
      (if (fx<= len i)
        (reverse-list->string ls)
        (let ((ni (fx+ i 2) ))
          (loop ni (cons (integer->char (string->number (substring str i ni) 16)) ls)) ) ) ) ) )
|#

) ;module string-hexadecimal

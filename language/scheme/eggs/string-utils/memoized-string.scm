;;;; memoized-string.scm
;;;; Kon Lovett, Oct '17
;;;; Kon Lovett, Aug '10

(module memoized-string

;FIXME should export 'global-string', 'string' & 'make-string'
(;export
  global-string
  make-string+
  string+
  ;DEPRECATED
  memorize-string
  make-string*)

(import scheme chicken)
(use
  (only srfi-1 every)
  (only srfi-69
    make-hash-table
    string-hash
    hash-table-ref/default hash-table-set!)
  (only unicode-utils
    ascii-codepoint?
    *unicode-string
    generic-make-string)
  (only type-checks
    check-natural-fixnum check-char check-string))

;;

(define *empty-string* "")

;;

(: global-string (string -> string))
;
(define (global-string str)
  (*make-string+ (check-string 'global-string str)) )

;;

(: string+ (#!rest char -> string))
;
(define (string+ . chars)
  (let ((len (length chars)))
    (if (fx= 0 len)
      (*make-string+ 0 #f "")
      (begin
        (every (cut check-char 'string+ <>) chars)
        (*make-string+ len (car chars) (delay (*unicode-string chars))) ) ) ) )

;; Memeoized `make-string'

;len - length of string in chars
(: make-string+ (number #!optional char -> string))
;
(define (make-string+ len #!optional (fill #\space))
  (*make-string+
    (check-natural-fixnum 'make-string+ len)
    (check-char 'make-string+ fill)) )

;;

(: *make-string+ (#!rest -> string))
;
(define *make-string+
  (let ((+global-strings+ (make-hash-table equal?)))
    ;
    (define (ensure-index-entry len ch dat)
      (let ((key `(,len . ,ch)))
        (or
          (hash-table-ref/default +global-strings+ key #f)
          (let ((dat (force dat)))
            (hash-table-set! +global-strings+ key dat)
            dat ) ) ) )
    ;
    (define (ensure-string-entry len ch str)
      (let (
        (strtbl (ensure-index-entry len ch (delay (make-hash-table string=? string-hash))) )
        (str (force str) ) )
        (or
          (hash-table-ref/default strtbl str #f)
          (begin
            (hash-table-set! strtbl str str)
            str ) ) ) )
    ;
    (case-lambda
      ((str)
        (let* (
          (len (string-length str) )
          (ch (and (not (fx= 0 len)) (string-ref str 0)) ) )
          (*make-string+ len ch str) ) )
      ((len ch)
        (*make-string+ len ch (delay (generic-make-string len ch))) )
      ((len ch str)
        (if (fx= 0 len)
          *empty-string*
          (ensure-string-entry len ch str) ) ) ) ) )

;DEPRECATED

(: memorize-string (deprecated global-string))
(define memorize-string global-string)

(: make-string* (deprecated make-string+))
(define make-string* make-string+)

) ;module memoized-string

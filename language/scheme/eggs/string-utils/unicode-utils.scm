;;;; unicode-utils.scm  -*- Hen -*-
;;;; Kon Lovett, Aug '10

;; Issues
;;
;; - Implies Unicode support that is not present.

(declare
  (bound-to-procedure
    ##sys#size
    ##sys#string-append
    ##sys#char->utf8-string
    ##sys#unicode-surrogate?
    ##sys#surrogates->codepoint
    ##sys#fragments->string))

(module unicode-utils

(;export
  ascii-codepoint?
  unicode-char->string
  unicode-string *unicode-string
  generic-make-string
  unicode-make-string *unicode-make-string
  unicode-surrogate?
  unicode-surrogates->codepoint)

(import scheme chicken)
(use
  (only srfi-1 every make-list)
  (only srfi-13 string-concatenate)
  (only type-checks check-natural-fixnum check-char))

;; Simple UTF 8

;nul is not accepted!
(: ascii-codepoint? (* -> boolean : char))
;
(define (ascii-codepoint? ch)
  (and
    (char? ch)
    (let ((x (char->integer ch)))
      ;[1 7f] = (1 80)
      (and (fx< 0 x) (fx< x #x80)) ) ) )

(: unicode-char->string (char -> string))
;
(define (unicode-char->string ch)
  (##sys#char->utf8-string (check-char 'unicode-char->string ch)) )

;inefficient
(: unicode-string (#!rest (list-of char) -> string))
;
(define (unicode-string . chs)
  (if (null? chs)
    ""
    (begin
      (if (null? (cdr chs))
        (check-char 'unicode-string (car chs))
        (every (cut check-char 'unicode-string <>) chs) )
      (*unicode-string chs) ) ) )

(: unicode-make-string (fixnum #!optional char -> string))
;
(define (unicode-make-string len #!optional (fill #\space))
  (*unicode-make-string
    (check-natural-fixnum 'unicode-make-string len)
    (check-char 'unicode-make-string fill)) )

(define generic-make-string unicode-make-string)

(: unicode-surrogate? (* -> boolean : fixnum))
;
(define (unicode-surrogate? n)
  (and
    (fixnum? n)
    (##sys#unicode-surrogate? n) ) )

(: unicode-surrogates->codepoint (fixnum fixnum -> (or boolean fixnum)))
;
(define (unicode-surrogates->codepoint hi lo)
  (##sys#surrogates->codepoint
    (check-natural-fixnum 'unicode-surrogates->codepoint hi "high")
    (check-natural-fixnum 'unicode-surrogates->codepoint lo "low")) )

(: *unicode-make-string (fixnum char -> string))
;
(define (*unicode-make-string len fill)
  (cond
    ((fx= 0 len)
      "" )
    ((ascii-codepoint? fill)
      (##sys#make-string len fill) )
    (else
      (*unicode-string (make-list len fill)) ) ) )

(: *unicode-string ((list-of char) -> string))
;
(define (*unicode-string chs)
  (cond
    ((null? chs)
      "" )
    ((null? (cdr chs))
      (##sys#char->utf8-string (car chs)) )
    (else
      (let ((chs (map ##sys#char->utf8-string chs)))
        (##sys#fragments->string
          (foldl (lambda (l s) (fx+ l (##sys#size s))) 0 chs)
          chs) ) ) ) )

) ;module unicode-utils

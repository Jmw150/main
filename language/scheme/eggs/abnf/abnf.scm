;;
;;  Parser for the grammar defined in RFC4234, "Augmented BNF for
;;  Syntax Specifications: ABNF".
;;
;;
;;   Copyright 2009-2014 Ivan Raikov and the Okinawa Institute of Science
;;   and Technology.
;;
;;
;;   This program is free software: you can redistribute it and/or
;;   modify it under the terms of the GNU General Public License as
;;   published by the Free Software Foundation, either version 3 of
;;   the License, or (at your option) any later version.
;;
;;   This program is distributed in the hope that it will be useful,
;;   but WITHOUT ANY WARRANTY; without even the implied warranty of
;;   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
;;   General Public License for more details.
;;
;;   A full copy of the GPL license can be found at
;;   <http://www.gnu.org/licenses/>.


(module abnf 

	(
	 (concatenation lex:seq) (alternatives lex:bar) 
	 variable-repetition repetition repetition1 repetition-n
	 optional-sequence 

	 pass drop-consumed bind bind*

	 ( :: lex:seq) :?  :!  :*  :+ 

         <Input> make-<Input>         
         <Token> <CharLex> Input->Token Token->CharLex 
         <CoreABNF> CharLex->CoreABNF 

	 )

   (import scheme chicken data-structures extras srfi-69)

   (require-extension utf8 utf8-srfi-14 typeclass input-classes suffix-tree)

   (require-library lexgen)
   (import (only srfi-1 fold list-tabulate)
	   (prefix lexgen lex:))

;; the following is necessary because type classes are currently not
;; aware of module system prefixes
   (import (only lexgen <Token> <CharLex> Input->Token Token->CharLex ))


(define-class <CoreABNF> (<CharLex> L)  
  range set set-from-string char lit alpha 
  binary decimal hexadecimal ascii-char cr lf crlf ctl 
  dquote htab lwsp octet sp vchar unicode-vchar wsp 
  alternatives/prefix
  :s :c )


(define pass lex:pass)
(define drop-consumed lex:drop)

(define bind lex:bind)
(define bind* lex:bind*)


;;;; ABNF operators

;; Concatenation (RFC 4234, Section 3.1)
(define-syntax concatenation
  (syntax-rules () 
    ((_)     lex:pass)
    ((_ a)    a)
    ((_ a b)  (lex:seq a b))
    ((concatenation a b ...) 
     (lex:seq a (concatenation b ...)))
    ))
    
;; Alternatives (RFC 4234, Section 3.2)
(define-syntax alternatives
  (syntax-rules () 
    ((_)      lex:pass)
    ((_ a)    a)
    ((_ a b)  (lex:bar a b))
    ((alternatives a b ...) 
     (lex:bar a (alternatives b ...)))
    ))

;; Value range alternatives (RFC 4234, Section 3.4)
;; (part of the CoreABNF typeclass)
;;(define range lex:range)


;;  Specific repetition (RFC 4234, Section 3.7)
(define (repetition-n n p)
  (let ((ps (list-tabulate n (lambda (i) p))))
    (lex:lst ps)))

;; Variable repetition (RFC 4234, Section 3.6)

;; * repetition
(define (repetition p)  (lex:star p))

;; 1* repetition
(define repetition1 lex:pos)

(define (variable-repetition min max p)
  (if (< max min) (variable-repetition max min p)
      (let loop ((i (- max 1)) (k (+ min 1)) (r (if (positive? min) (repetition-n min p) lex:pass)))
	(cond ((>= i min)  (loop (- i 1) (+ k 1) (lex:bar (repetition-n k p) r)))
	      (else r)))))

		
(define optional-sequence lex:opt)


;;;; Terminal values (RFC 4234, Section 2.3)

;; Matches a literal string (case-insensitive)

(define=> (lit <CharLex>)
  (lambda (s)
    (let* ((f  (lambda (t) (tok t (lex:try char-ci=?))))
	   (ps (map f (if (string? s) (string->list s) s))))
      (lex:lst ps))))

;;;; Core Rules (RFC 4234, Appendix B)

;; Match any character of the alphabet.
(define=> (alpha <CharLex>)
  (set char-set:letter))

;; Match [0..1]
(define=> (binary <CharLex>)
  (range #\0 #\1))

;; Match [0..9]
(define=> (decimal <CharLex>)
  (range #\0 #\9))

;; Match [0..9] and [A..F,a..f] 
(define=> (hexadecimal <CharLex>)
  (set char-set:hex-digit))

;; Match any 7-bit US-ASCII character except for NUL (ASCII value 0, that is).

(define=> (ascii-char <CharLex>)
  (set (ucs-range->char-set 1 127)))

;; Match the carriage return character \r.

(define=> (cr <CharLex>) (char (integer->char 13)))

;; Match the linefeed character \n.

(define=> (lf <CharLex>) (char (integer->char 10)))

;; Match the Internet newline \r\n.

;; cr lf

;; Match any US-ASCII control character. That is any character with a
;; decimal value in the range of [0..31,127].

(define=> (ctl <CharLex>) (set char-set:iso-control))

;; Match the double quote character "

(define=> (dquote <CharLex>) (char #\"))

;; Match the tab \t character

(define=> (htab <CharLex>) (char (integer->char 9)))

;; Match either 'sp' or 'htab'.

(define=> (wsp <CharLex>) (set (char-set #\space #\tab)))

;; Match linear white space: *(WSP / CRLF WSP)

;; (define=> (lwsp <CharLex>) (lex:star (lex:bar wsp (lex:seq (lex:drop crlf) wsp))))


;; Match /any/ character.
(define=> (octet <CharLex>)  (set char-set:full))

;; Match the space character

(define=> (sp <CharLex>) (char #\space))

;; Match any printable ASCII character. (The "v" stands for
;; "visible".) That is any character in the decimal range of
;; [33..126].

(define=> (vchar <CharLex>)  (set char-set:graphic))

;; As vchar, but include Unicode characters
(define=> (unicode-vchar <CharLex>)
  (set (char-set-union 
	char-set:graphic
	(char-set-difference
	 char-set:full 
	 char-set:ascii))))
		  
;;;; Additional convenience procedures and parser combinators

;; match any character from a set defined as a string
(define=>  (set-from-string <CharLex>)
  (lambda (s)
    (set (string->char-set s))))

;;
;; A variant of alternatives optimized for parsing grammars with a
;; large number of alternatives that are each prefixed by a constant
;; string, e.g. email headers:
;;
;;  From: <mailbox parser>
;;  To: <mailbox parser>
;;  Subject: <text parser>
;;  ...
;;

(define=> (alternatives/prefix <CharLex>)
  (lambda (prefixes #!key 
		    (default (lambda (sk fk strm) (fk strm))) 
		    (char-bind #f)
		    (join cons))

    (let ((bind-proc (lambda (path eol) 
		       (lex:bind (lambda (x) 
				   (join (char-bind path) (reverse x))) eol)))

	  (tr (fold (lambda (x t) (suffix-tree-insert (car x) (cdr x) t))
		    (make-suffix-tree char<=? string->list)
		    prefixes)))

      (let recur ((branches (suffix-tree-branches tr)) 
		  (p default)
		  (path '()) )

	(if (null? branches) p
	    (let ((branch (car branches)))
	      (let ((eol (suffix-tree-branch-eol branch))
		    (label (suffix-tree-branch-label branch)))
		(recur (cdr branches)
		       (lex:bar (lex:seq (drop-consumed (char label))
					 (or (and eol (if char-bind (bind-proc (cons label path) eol) eol))
					     (recur
					      (suffix-tree-branch-children branch)
					      (lambda (sk fk strm) (fk strm))
					      (cons label path))
					     ))
				p)
		       path
		       ))
	      ))
	))
    ))

;;;; Type class constructor

(define (CharLex->CoreABNF L)
  (let* ((lit         (lit L))
	 (char        ((lambda=> (<CharLex>) char) L))
	 (range       ((lambda=> (<CharLex>) range) L))
	 (set         ((lambda=> (<CharLex>) set) L))
	 (alpha       (alpha L))
	 (binary      (binary L))
	 (decimal     (decimal L))
	 (hexadecimal (hexadecimal L))
	 (ascii-char  (ascii-char L))
	 (cr          (cr L))
	 (lf          (lf L))
	 (crlf        (lex:seq cr lf))
	 (ctl         (ctl L))
	 (dquote      (dquote L))
	 (htab        (htab L))
	 (wsp         (wsp L))
	 (lwsp        (lex:star (lex:bar wsp (lex:seq (lex:drop crlf) wsp))))
	 (octet       (octet L))
	 (sp          (sp L))
	 (vchar       (vchar L))
	 (unicode-vchar (unicode-vchar L))
	 (set-from-string  (set-from-string L))
	 (alternatives/prefix (alternatives/prefix L))
	 (:c          char)
	 (:s          lit)
	 )
    

  (make-<CoreABNF> L
		   range set set-from-string char lit alpha 
		   binary decimal hexadecimal ascii-char cr lf crlf ctl 
		   dquote htab lwsp octet sp vchar unicode-vchar wsp 
		   alternatives/prefix
		   :s :c )
  ))


;;;; Syntactic abbreviations
;;;; Based on a proposal by Moritz Heidkamp

(define :? optional-sequence)
(define :! drop-consumed)
(define :* repetition)
(define :+ repetition1)

(define-syntax ::
  (syntax-rules () ((_ e1 e2 ...) (concatenation e1 e2 ...))))

)

;;
;;  ABNF parser combinators specialized for character lists.
;;
;;   Copyright 2009-2012 Ivan Raikov and the Okinawa Institute of Science
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

(module abnf-charlist

	(
	 (concatenation lex:seq) (alternatives lex:bar) 
	 variable-repetition repetition repetition1 repetition-n
	 optional-sequence range set set-from-string

	 char lit alpha 
	 binary decimal hexadecimal ascii-char cr lf crlf ctl 
	 dquote htab lwsp octet sp vchar unicode-vchar wsp 

	 pass bind drop-consumed  


	 (:: lex:seq) :?  :!  :s  :c  :*  :+ 

	 )

   (import scheme chicken  )

   (require-extension typeclass input-classes abnf)

   (require-library lexgen)
   (import (prefix lexgen lex:))
   (import (only lexgen <Token> <CharLex> 
                 Input->Token Token->CharLex 
                 ))


(define char-list-<Input>
  (make-<Input> null? car cdr))

(define char-list-<Token>
  (Input->Token char-list-<Input>))

(define char-list-<CharLex>
  (Token->CharLex char-list-<Token>))

(define char-list-<CoreABNF>
  (CharLex->CoreABNF char-list-<CharLex>))

(import-instance (<CoreABNF> char-list-<CoreABNF>) )


)

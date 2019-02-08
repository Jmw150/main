;;; **********************************************************************
;;; 
;;; Copyright (C) 2002 Heinrich Taube (taube@uiuc.edu) 
;;; 
;;; This program is free software; you can redistribute it and/or
;;; modify it under the terms of the GNU General Public License
;;; as published by the Free Software Foundation; either version 2
;;; of the License, or (at your option) any later version.
;;; 
;;; This program is distributed in the hope that it will be useful,
;;; but WITHOUT ANY WARRANTY; without even the implied warranty of
;;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
;;; GNU General Public License for more details.
;;; 
;;; **********************************************************************

;;; $Name:  $
;;; $Revision: 1.1 $
;;; $Date: 2004/08/30 20:40:47 $

;;;
;;; Implementation of the CLTL2 loop macro. The following 
;;; non Rev 5 definitions or their equivalents are needed:
;;;
;;;   (defmacro (name args . body)
;;;       to expand loop, when, unless, push and pop
;;;   (err msg)
;;;       signal error with message string.
;;;   (gensym )
;;;       create new symbol.
;;;


(module loop (loop)
  (import scheme chicken)
  (begin-for-syntax (require-library loop-support))
  (import-for-syntax loop-support)

(define-syntax (loop x r c)
  (let ((args (cdr x)))
    (parameterize ((loop-rename r)
		   (loop-compare c))
      (scheme-loop args)) ) )

)

;;
;;  Syntax definitions for a simple ML-like language.
;;
;;  Based on the code and paper by Xavier Leroy (2000): A modular
;;  module system. Journal of Functional Programming, 10, pp 269-303
;;  doi:10.1017/S0956796800003683
;;
;;
;; Copyright 2010-2012 Ivan Raikov and the Okinawa Institute of
;; Science and Technology.
;;
;; This program is free software: you can redistribute it and/or
;; modify it under the terms of the GNU General Public License as
;; published by the Free Software Foundation, either version 3 of the
;; License, or (at your option) any later version.
;;
;; This program is distributed in the hope that it will be useful, but
;; WITHOUT ANY WARRANTY; without even the implied warranty of
;; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
;; General Public License for more details.
;;
;; A full copy of the GPL license can be found at
;; <http://www.gnu.org/licenses/>.
;;


(module miniMLsyntax

	( modtype? Signature Functorty 
	  modspec? Value_sig Type_sig Module_sig
	  modterm? Modid Structure Functor Mapply Constraint
	  moddef? Value_def Type_def Module_def )


	(import scheme chicken )
	(require-extension extras static-modules miniML)


	(define-values (modtype? Signature Functorty 
				 modspec? Value_sig Type_sig Module_sig
				 modterm? Modid Structure Functor Mapply Constraint
				 moddef? Value_def Type_def Module_def
				 subst-modtype subst-modspec subst-typedecl)
	  (make-mod-syntax core-syntax))


)

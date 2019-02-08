;;; Copyright (C) 2004, Taylor Campbell
;;; All rights reserved.
;;; See the LICENCE file for details.


(module dissector (dissect
		   dissection-prompt
		   dissection-menu-section-size
		   dissection-overview-printer
		   dissector-right-margin)

  (import (except scheme delay force)
	  (except chicken promise?)
	  ports
	  (except data-structures any?)
	  extras)

(include "chicken_compat")
(include "util")
(include "stream")
(include "parameters")
(include "chicken_dissect")
;; DEFINE-DISSECTION-COMMAND must be loaded before any other dissector-
;; specific components' code is loaded.
(include "command")
(include "dissection")
(include "menu")
(include "top")

)

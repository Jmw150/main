(format t "What is your name?") ; prints string
(defvar *name* (read)) ; defines a variable globally

(defun hello-you (*name*) ;defines a function
	(format t "Hello ~a! ~%" *name*))

(setq *print-case* :capitalize) ; :upcase :downcase  
(hello-you *name*)


;;; ~a : Shows the value
;;; ~s : shows quotes around the value
;;; ~10a : adds 10 spaces to the right
;;; ~10@a : adds 10 spaces to the left



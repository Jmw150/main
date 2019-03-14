;;;; a list of concepts

; in lisp the last element of a list is nil

(defvar *n* 0)
(print *N*)
(setf *N* 6)
(print *N*)

(format t "string" 1) ; 1 is not included; t stands for terminal
(format t "number with commas ~:d ~%" 1000000)
(format t "PI to 5 characters ~5f ~%" 3.141592)
(format t "PI to 4 decimals ~,4f ~%" 3.141592)
(format t "10 Percent ~,,2f ~%" .10)
(format t "10 Dollars ~$ ~%" 10)

(format t "~d ~%" (+ 5 4))
(format t "~d ~%" (- 5 4))
(format t "~d ~%" (* 5 4))
(format t "~d ~%" (/ 20 4))
(format t "~d ~%" (/ 5 4.0))
(format t "~d ~%" (rem 5 4))
(format t "~d ~%" (mod 5 4))

(format t "~d ~%" (expt 4 2))
(format t "~d ~%" (sqrt 81)) (format t "~d ~%" (sqrt 82))
(format t "~d ~%" (exp 1))
(format t "~d ~%" (log 1000 10))
(format t "~d ~%" (eq 'dog 'dog))
(format t "~d ~%" (oddp 15))
(format t "~d ~%" (evenp 11))
(format t "~d ~%" (null nil))

;functions to try progn, terpri, when, unless, set, cond, list, case

(loop for x from 1 to 10 do (print x))


(defparameter *name* 'Jordan)
(format t "~d ~%" (eq *name* 'Derek))
(defvar *age* 18)

(if (>= *age* 18)
    (format t "You can vote~%")
    (format t "You can't vote~%"))

(if (and (<= *age* 14) (>= *age* 67))
    (format t "You are working age~%")
    (format t "You are not working age~%"))



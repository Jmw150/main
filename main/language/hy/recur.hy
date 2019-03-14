; stuff for compatibility with elisp, and scheme
(defmacro define (a b) (quasiquote (def (unquote a) (unquote b)))) 
(define expt (lambda (x y) (** x y)))
(defmacro defun (f x b) (quasiquote (defn (unquote f) 
                                          (unquote x) 
                                          (unquote b))))
(define array list)
(defn list (&rest args) (array args))

; this should work, by hy made map a class (same in python)
;(define lazy-map map)
;(defn map (fun &rest args) (array (lazy-map fun args)))
; map simply refuses to be renamed...
;(array (map f '(1 2 23))) list is how you use a mapping, maps are lazy

;(import [sympy :as sp]) ; import sympy as sp
(import [sympy [*]]) ; from sympy import *

; alg:
;; make recurence function F, make closed form Fl, run lists of both and solve.
(defun F (n)
  (if (= n 0) 2
  (if (= n 1) 1
  (+ (* 2 (F (- n 1)))
     (* -1 (F (- n 2)))
     6
     (* -2 n)
     (* 4 (expt 3 (* -1 n)))))))

(defun Fl (n) 
  (list 1 (expt 3 (* -1 n)) (* n n n) (* n n) n))


(define b [(F 0)
           (F 1)
           (F 2)
           (F 3)
           (F 4)])

(define A 
  (list 
      (Fl 0)
      (Fl 1)
      (Fl 2)
      (Fl 3)
      (Fl 4)
))

(define A (Matrix A))
(define b (Matrix b))
(print (* (.inv A) b)) ; => '(1 1 -1/3 2 -2)

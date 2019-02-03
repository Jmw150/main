
; precedence operators
(defn parenthesize [input]
  "Fully parenthize the input string."
  (let ((s " "))
    (+= s "((((")
    (for [(, i char) (enumerate input)]
      (cond
       [(= char "(")
        (+= s "((((")]
       [(= char ")")
        (+= s "))))")]
       ;; rewrite ^ to **
       [(= char "^")
        (+= s ")**(")]
       [(= char "*")
        (+= s "))*((")]
       [(= char "/")
        (+= s "))/((")]
       [(= char "+")
        (if (or (= 0 i) (in (get input (- i 1)) ["(" "^" "*" "/" "+" "-"]))
          (+= s "+ ")
          (+= s ")))+((("))]
       [(= char "-")
        (if (or (= 0 i) (in (get input (- i 1)) ["(" "^" "*" "/" "+" "-"]))
          (+= s "- ")
          (+= s ")))-((("))]
       [true
        (+= s char)]))
    (+= s "))))")
    s))

""" macros
advantage: halts evaluation of s-expressions, to do some in code manipuation

when defined (defmacro macro-name [optional-code] body)
when run (macro-name optional-code) 

steps (sensible)
* evaluation pauses
* code is made into a string
* body is evaluated
* code parts are mapped in body
* body is returned
* body is evaluated

steps (actual) and less clean
* evaluation pauses
* code is made into a list (letters are tokens, numbers are just numbers), this is made local to the macro
* body is run
* code parts are mapped in body, if mentioned
* body is returned unquoted 


macros are mostly string replacement 

"""
(defmacro infix [code]
  (quasiquote ((unquote (get code 1))
               (unquote (get code 0))
               (unquote (get code 2))
)))

; (def infixer (lambda (code) ((eval (get code 1)) (eval (get code 0)) (eval (get code 2)))))

; (defmacro define (a b) (def a b)) ; sensible way to do it
(defmacro define (a b) (quasiquote (def (unquote a) (unquote b)))) ; how it actually needs to be done



;(print (eval (nfx (read-str (parenthesize "1 + 2 * 5")))))
;(print (eval (nfx (read-str (parenthesize "1 * 2 + 5")))))
;(print (eval (nfx (read-str (parenthesize "1 * 2 + 2^2")))))



;(print (infix (parenthesize "5 + 5 * 4"))) 


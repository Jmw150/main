(define (comb m lst)
  (cond ((= m 0) '(()))
        ((null? lst) '())
        (else (append (map (lambda (y) (cons (car lst) y))
                           (comb (- m 1) (cdr lst)))
                      (comb m (cdr lst))))))
 
(comb 3 '(0 1 2 3 4))


" # picolisp
(de comb (M Lst)
   (cond
      ((=0 M) '(NIL))
      ((not Lst))
      (T
         (conc
            (mapcar
               '((Y) (cons (car Lst) Y))
               (comb (dec M) (cdr Lst)) )
            (comb M (cdr Lst)) ) ) ) )
 
(comb 3 (1 2 3 4 5))
"

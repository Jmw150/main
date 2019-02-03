;loop of type 1
(loop for x from 1 to 10
    do (print x))

;easiest loop type to make
;loop of type 2
(setq x 1)
(loop 
    (format t "~d ~%" x)
    (setq x (+ x 1))
    (when (> x 10) (return x))
)



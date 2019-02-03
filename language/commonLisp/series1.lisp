(setq *n* 1) ;starting point

(setq *sum* 0)

(format t "iterations of 1/(n(n+1)) -> ")
(setq *end* (read))

(loop
    (setq *sum*
        (+ 
            *sum*
            (/ 1 (* *n* (+ *n* 1)))
        )
    )
    (write *sum*)
    (setq *n* (+ *n* 1))
    (format t "~%")
    (when (> *n* *end*) (return))
)

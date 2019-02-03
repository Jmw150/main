(setq *n* 1) ;starting point

(format t "iterations of fibonacci sequence -> ")
(setq *l* (read)) ;loop iterate

(loop 

    (write ;closed form of fibonacci sequence
        (round 
                (/
                    (- 
                        (expt (+ 1 (expt 5 (/ 1 2))) *n*)
                        (expt (- 1 (expt 5 (/ 1 2))) *n*)
                    ) 
                    (* (expt 2 *n*) (expt 5 (/ 1 2)))
                )
        )
    )
    (format t "~%")
    
    (setq *n* (+ *n* 1))
    (when (> *n* *l*) (return))

)

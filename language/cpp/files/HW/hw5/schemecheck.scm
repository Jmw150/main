

(define (average the-list) 
    (let loop ((count 0) (sum 0) (args the-list))
              (if (not (null? args)) 
                  (loop (add1 count) (+ sum (car args)) (cdr args)) 
                  (/ sum count))))

; variance with a normal metric of 1
(define (variance averageNum the-list)
    (let loop ((count 0) (sum 0) (args the-list))
              (if (not (null? args))
                  (loop (add1 count) 
                        (+ sum (abs (- (car args) averageNum)))
                        (cdr args))
                  (/ sum count))))

; How often are the cells being used?
(define (averageUse the-list)
    (let loop ((count 0) (sum 0) (args the-list))
              (if (not (null? args))
                  (loop (add1 count) 
                        (+ sum (if (not (= 0 (car args))) 1 0))
                        (cdr args))
                  (/ sum count))))


(define (collisionRate the-list)
    (let loop ((count 0) (sum 0) (args the-list))
              (if (not (null? args))
                  (loop (add1 count) 
                        (+ sum (if (> 1 (car args)) 1 0))
                        (cdr args))
                  (/ sum count))))

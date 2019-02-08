;;; adaptation of language shootout pidigits.py in plain scheme
(cond-expand
 ((and chicken (not full-numeric-tower)) (use numbers))
 (guile   (use-modules (ice-9 format) (ice-9 time)))
 (else    #t)) ; hope for the best

(define spigot
  (lambda (m . opt-output-port)
    (let ((n 1) (a 0) (d 1) (t 0) (u 0) (i 0) (k 0) (ns 0) (k1 1)
          (output-port (if (null? opt-output-port)
                           current-output-port
                           (car opt-output-port))))
      (let loop ()
        (if (< i m)
            (begin
              (set! k (+ k 1))
              (set! t (* n 2))
              (set! n (* n k))
              (set! a (+ a t))
              (set! k1 (+ k1 2))
              (set! a (* a k1))
              (set! d (* d k1))
              (if (>= a n)
                  (let ((n3a (+ (* n 3) a)))
                    (set! t (quotient n3a d))
                    (set! u (+ (remainder n3a d) n))
                    (if (> d u)
                        (begin
                          (set! ns (+ (* ns 10) t))
                          (set! i (+ i 1))
                          (if (= (modulo i 10) 0)
                              (begin
                                (println ns i output-port)
                                (set! ns 0)))
                          (set! a (* (- a (* d t)) 10))
                          (set! n (* n 10))))))
              (loop)))))))

(define println
  (lambda (ns i output-port)
    ;(format (if (eq? output-port current-output-port) #t output-port)
    ;        "~10,,,'0@a     :~d~%" ns i)))
    (display ns output-port)
    (display "    :" output-port)
    (display i output-port)
    (newline output-port)))

(define spigot-to-file
  (lambda (filename n)
    (call-with-output-file filename
      (lambda (port)
        (spigot n port)))))

(define benchmark
  (lambda ()
    (time (spigot-to-file "/dev/null" 10000))))

(benchmark)

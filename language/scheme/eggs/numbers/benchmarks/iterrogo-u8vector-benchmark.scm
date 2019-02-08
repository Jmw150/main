;; By "iterrogo", via IRC

(import chicken scheme)

(cond-expand
  ((and chicken (not full-numeric-tower)) (use numbers srfi-4))
  (chicken (use (chicken bitwise) srfi-4))
  (else #f))

(define v (make-u8vector 16000000 100))

(time
 (let ((pos 0)
       (len (u8vector-length v)))
   (let loop ()
     (bitwise-xor (u8vector-ref v pos) 1)
     (modulo (u8vector-ref v pos) 4)
     ;; The overhead of minor GCs caused by using "numbers" is roughly
     ;; comparable to this:
     ;(make-vector 140 #f)
     (set! pos (+ pos 1))
     (when (< pos len) (loop)))))

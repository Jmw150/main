; restriction:
; assume all variables are: functions, binary, binary lists

'(define (truth-table function inputs)

   )
 
(define (xor a b) 
  (and (or a b) (not (and a b))))

(define (mux2 a b gate)
  (if (= gate 0) a
  (if (= gate 1) b)))

; this or two mux2's
(define (mux4 a b c d gate) 
  (if (= gate 0) a
  (if (= gate 1) b
  (if (= gate 2) c
  (if (= gate 3) d)))))
  
(define (1-bit-full-adder! a b carry-in carry-out) 
  "! carry-out will be altered"
  (set! carry-out 
        (or (and b carry-in) (and a carry-in) (and a b)))
  (xor (xor a b) carry-in))

(define (1-bit-alu! a b carry-in alu-op carry-out)
  (mux4 (and a b) 
        (or a b) 
        (1-bit-full-adder! a b carry-in carry-out)
        alu-op))

(define (4-bit-alu! a b carry-in alu-op carry-out)
  "Demonstration of how these functions stack"
  (list 
   (1-bit-alu! (car a) (car b) carry-in alu-op carry-out)
   (1-bit-alu! (cadr a) (cadr b) carry-in alu-op carry-out)
   (1-bit-alu! (caddr a) (caddr b) carry-in alu-op carry-out)
   (1-bit-alu! (cadddr a) (cadddr b) carry-in alu-op carry-out)))


(define (4-bit-subtract! a b carry-in carry-out)
  (mux2 




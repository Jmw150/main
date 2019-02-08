;; Test performance of string<->bignum conversion in base 10 and 16

(cond-expand
  ((and chicken (not full-numeric-tower)) (use numbers))
  (else #f))

;; Racket/PLT Scheme
;; #lang scheme

(display "_______________________________ Fixnums\n")

(display "Reading a fixnum (dec):\n")

(time (let lp ((i 0))
        (string->number "12345")
        (cond ((< i 1000000) (lp (+ i 1))))))

(display "Reading a fixnum (hex):\n")

(time (let lp ((i 0))
        (string->number "12345" 16)
        (cond ((< i 1000000) (lp (+ i 1))))))

(display "Writing a fixnum (dec):\n")

(time (let lp ((i 0))
        (number->string i)
        (cond ((< i 10000000) (lp (+ i 1))))))

(display "Writing a fixnum (hex):\n")

(time (let lp ((i 0))
        (number->string i 16)
        (cond ((< i 10000000) (lp (+ i 1))))))

(display "_______________________________ Flonums\n")

(display "Reading a flonum (dec):\n")

(time (let lp ((i 0.0))
        (string->number "1234521743298879.1238789532")
        (cond ((< i 1000000.0) (lp (+ i 1.0))))))

(display "Reading a flonum (hex):\n")

(time (let lp ((i 0.0))
        (string->number "1234521743298879.1238789532" 16)
        (cond ((< i 1000000.0) (lp (+ i 1.0))))))

(display "Writing an integral flonum (dec):\n")

(time (let lp ((i 0.0))
        (number->string i)
        (cond ((< i 10000000.0) (lp (+ i 1.0))))))

(display "Writing a fractional flonum (dec):\n")

(time (let lp ((i 0.0))
        (number->string 12345.123)
        (cond ((< i 10000000.0) (lp (+ i 1.0))))))

;; Comment these out if testing Racket
(display "Writing an integral flonum (hex):\n")

(time (let lp ((i 0.0))
        (number->string i 16)
        (cond ((< i 10000000.0) (lp (+ i 1.0))))))

(display "Writing a fractional flonum (hex):\n")

(time (let lp ((i 0.0))
        (number->string 12345.123 16)
        (cond ((< i 10000000.0) (lp (+ i 1.0))))))

(display "\n______________________________ Bignums\n")

(define s (make-string 100000 #\9))

(display "Reading a large bignum (dec):\n")

(time (let lp ((i 0))
        (string->number s)
        (cond ((< i 100) (lp (+ i 1))))))

(display "Reading a large bignum (hex):\n")

(time (let lp ((i 0))
        (string->number s 16)
        (cond ((< i 100) (lp (+ i 1))))))

(define num (string->number (make-string 100000 #\9)))

(display "Writing a large bignum (dec):\n")

(time (let lp ((i 0))
        (number->string num)
        (cond ((< i 100) (lp (+ i 1))))))

(display "Writing a large bignum (hex):\n")

(time (let lp ((i 0))
        (number->string num 16)
        (cond ((< i 100) (lp (+ i 1))))))

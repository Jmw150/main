; testing out the load ability of this file
(define lolcat (lambda () (display "nan-nan-nan\n")))

; scheme is bad about treating empty lists as false...
(define-syntax nil!
    (syntax-rules ()
      ((_ x)
       (set! x #f))))

(define factorial (lambda (x) 
   (if (< x 0) '()
       (if (= x 0)
           1
           (* x (factorial (+ x -1)))))))

(define ! factorial)

(define choose (lambda (x y)
   (if (or (< x 0) (< y 0) (< x y))
      '()
       (/ (factorial x) 
          (* (factorial y) (factorial (- x y)))))))

; choose(n,k)*p^k*q^(n-k), used in many probability distributions
(define binomial (lambda (n k p)
                 (* (choose n k) 
                    (expt p k) 
                    (expt (- 1 p) (- n k)))))

; hypergeometric like binomial but 'without replacement'
(define hypergeometric (lambda (N n0 K k0)
        (* (choose K k0)
           (choose (- N K) (- n0 k0))
           (/ 1 (choose N n0)))))

(define sum (lambda (start end function n p) 
     (if (>= start end)
        (function n start p)
        (+ (function n end p) (sum start (+ end -1) function n p)))))

; this is how you make use of C libraries 
; this function : (j0 "number")
; (load-extension "bessel" "init_bessel")

; fibonancci using binary recursion
(define fib (lambda (x) 
     (if (<= x 1) x 
     (+ (fib (- x 1)) (fib (- x 2))))))

(define (flatten x)
    (cond ((null? x) '())
          ((not (pair? x)) (list x))
          (else (append (flatten (car x))
                        (flatten (cdr x))))))

; greatest common divisor, of course
(define (gcd a b) (if (= b 0) a (gcd b (modulo a b))))
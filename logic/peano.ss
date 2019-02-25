; Demonstration of Tao's peano axioms in his book 'real analysis'

; not defined in the language
(define (char->symbol chr) (string->symbol (list->string (list chr))))
(define (char->string x) (string x))
(define (string->char x a) (car (string->list (substring x a (+ 1 a)))))
(define mod modulo)
(define % modulo)
(define (clean x) 
  " Turns most inputs into a string "
  (define (any->string any) 
    (with-output-to-string (lambda () (write any))))
  ; check if already a string.. any->string adds extra ""
  (if (string? x) x  
  ; check for char, to remove #\
  (if (char?   x) 
      (substring (any->string x) 
                 2 
                 (string-length (any->string x))) 
  ; rest should be clean
      (any->string x)))) 

; axiom 1
; 0 is a natural number

(define (ax1? x) 
  (string=? "0" (clean x)))

; axiom 2
; if n is a natural number, then n++ is also a natural number

(define (recur-ax2? x)
  " 2 by itself is not decidable, unlike 1, but it is transitive "
  (if (char=? #\( (string->char x 0))
  (if (char=? #\) (string->char x (- (string-length x) 3)))
  (if (char=? #\+ (string->char x (- (string-length x) 2)))
  (if (char=? #\+ (string->char x (- (string-length x) 1)))
      (recur-ax2? (substring x 1 (- (string-length x) 3)))
      x)x)x)x))

(define (ax1n2? x)
  " Interestingly 1 and 2 together form a grammar. "
  (if (< (string-length x) 5) (ax1? x)
  (if (and (char=? #\( (string->char x 0))
           (char=? #\) (string->char x (- (string-length x) 3)))
           (char=? #\+ (string->char x (- (string-length x) 2)))
           (char=? #\+ (string->char x (- (string-length x) 1))))
      (ax1n2? (substring x 1 (- (string-length x) 3)))
      (ax1? x))))

; definition 1.3
; we make a bijection between natural numbers in base 10 and peano numbers defined by tao

(define (nat->peano x)
  " assuming natural number, turn it into peano axiom representation "
  (define (shave-front x) 
    "shave-front:string->string, clean off front of number "
    (if (char=? #\( (car (string->list x))) 
        (shave-front (substring x 1 (string-length x)))
        x))

  (define (shave-back x)
    "shave-back:string->string, clean off back of number "
    (if (or (char=? #\) (car (string->list (clean (substring x (- (string-length x) 1) (string-length x))))))
            (char=? #\+ (car (string->list (clean (substring x (- (string-length x) 1) (string-length x)))))))
        (shave-back (substring x 0 (- (string-length x) 1))) x))

  (define (peano x) 
  "peano:string->string, take a number and return recursive step [needs better name] "
  (if (< 0 (string->number x))
      (string-append "(" 
                     (number->string (- (string->number x) 1)) 
                     ")++")
      x))

  (define (front-num x) 
    " index of front "
    (define (front-num. x num) 
      (if (char=? #\( (car (string->list x)))
          (front-num. (substring x 1 (string-length x)) (+ num 1))
          num))
    (front-num. x 0))

  (define (back-num x)
    " index of back "
    (define (back-num. x num)
      (if (or (char=? #\) (car (string->list (clean (substring x (- (string-length x) 1) (string-length x)))))) 
              (char=? #\+ (car (string->list (clean (substring x (- (string-length x) 1) (string-length x)))))))
          (back-num. (substring x 0 (- (string-length x) 1)) (- num 1))
          num))
    (back-num. x (string-length x)))

  (define num (shave-back (shave-front x)))
  (define str (clean x))
  (if (= (string->number num) 0) str
      (nat->peano (string-append 
                    (substring str 0 (if (= -1 (front-num str)) 
                                       0 
                                       (front-num str)))
                    (peano num)
                    (substring str (back-num str)
                                 (string-length str)))))
)
  

(define (peano->nat x) 
  "turn Tao's peano representaion of numbers into scheme natural 
   numbers"
  (define (counter x num) ; define recursive call
    (if (char=? #\+ (car 
                     (string->list 
                      (substring x (- (string-length x) 1) 
                                   (string-length x)))))
        (if (char=? #\+ (car 
                         (string->list 
                          (substring x (- (string-length x) 2) 
                                       (- (string-length x) 1)))))
            (counter (substring x 0 
                                (- (string-length x) 3)) (+ 1 num))
            num) 
        num))
  (counter x 0)) ; do recursive call

(define (their-nat? x) 
  " assuming string, checks to see if it is a base 10 representation of a natural number " 
  (and (integer? (string->number x)) (not (negative? (string->number x)))))

(define (peano? x)
  " Is this number a peano number? "
  (if (their-nat? (clean x))
      (ax1n2? (nat->peano (clean x)))
      (ax1n2? (clean x))))


; axiom 3
; 0 is not the successor of any natural number; i.e., we have n++ != 0 for every natural number n.

; axiom 4
; different natural numbers must have different successors; i.e., if n, m are natural numbers and n != m, then n++ != m++. Equivalently, if n++ = m++, then we must have n = m

(define (peano=? a b)
  " This is possible to understand from any two peano numbers using axiom 3 and 4."
  ; allow informal discription
  (define x (if (their-nat? (clean a)) (nat->peano (clean a)) (clean a)))
  (define y (if (their-nat? (clean b)) (nat->peano (clean b)) (clean b)))
  ; actual check
  (and (and (peano? x) (peano? y)) 
       (= (string-length x) (string-length y)))) ; The peano grammar is n*"(" + "0" + n*")++". So just check if the n's match, or the total

; axiom 5 (principle of mathematical induction)
; Let P(n) be any property pertaining to a natural number n. Suppose that P(0) is true, and suppose that whenever P(n) is true, P(n++) is also true. Then P(n) is true for every natural number n.
      
; definition 2.2.1 (addition)
; 0 + n := n, and if m+n is defined, then ((m)++) + n := (m+n)++

; for this I will start defining the actual functions on this new type of set defined by the peano axioms
(define (++ x)
  " increment a peano number "
  (if (peano? x) 
      (string-append "(" x ")++")
      "++ error"))

(define (-- x)
  " decrement a peano number, if possible "
  (if (< (string-length x) 5) "-- error"
  (if (and (char=? #\( (string->char x 0))
           (char=? #\) (string->char x (- (string-length x) 3)))
           (char=? #\+ (string->char x (- (string-length x) 2)))
           (char=? #\+ (string->char x (- (string-length x) 1))))
      (substring x 1 (- (string-length x) 3))
      "-- error")))

; Tao's recursion way
(define (peano-add a b)
  (if (char=? #\0 (string->char b 0))
      a
      (peano-add (++ a) (-- b))))





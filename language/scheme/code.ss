;; don't execute this thing, it is not properly namespaced


" 100 doors problem

There are 100 doors in a row that are all initially closed.

You make 100 passes by the doors.

The first time through, visit every door and  toggle  the door  (if the door is closed,  open it;   if it is open,  close it).

The second time, only visit every 2nd door   (door #2, #4, #6, ...),   and toggle it.

The third time, visit every 3rd door   (door #3, #6, #9, ...), etc,   until you only visit the 100th door."

(define *max-doors* 100)
 
(define (show-doors doors)
  (let door ((i 0)
             (l (vector-length doors)))
    (cond ((= i l) 
           (newline))
          (else 
           (printf "~nDoor ~a is ~a" 
                   (+ i 1) 
                   (if (vector-ref doors i) "open" "closed"))
           (door (+ i 1) l)))))
 
(define (flip-doors doors)
  (define (flip-all i)
    (cond ((> i *max-doors*) doors)
          (else 
           (let flip ((idx (- i 1)))
             (cond ((>= idx *max-doors*) 
                    (flip-all (+ i 1))) 
                   (else 
                    (vector-set! doors idx (not (vector-ref doors idx)))
                    (flip (+ idx i))))))))
  (flip-all 1))
 
(show-doors (flip-doors (make-vector *max-doors* #f)))

;;

(define (optimised-flip-doors doors)
  (define (flip-all i)
    (cond ((> i (floor (sqrt *max-doors*))) doors)
          (else 
           (vector-set! doors (- (* i i) 1) #t)
           (flip-all (+ i 1)))))
  (flip-all 1))
 
(show-doors (optimised-flip-doors (make-vector *max-doors* #f)))

;;

(define (N_doors N)
  (define (init)
    (define (str n)
      (if (> n N) '() (cons 0 (str (+ 1 n)))))
    (str 1))
  (define (toggle x str)
    (define (s n lis)
      (define (revert x)
        (if (eq? x 0) 1 0))
      (cond ((null? lis) '())
          ((zero? (remainder n x)) (cons (revert (car lis)) (s (+ n 1) (cdr lis))))
          (else (cons (car lis) (s (+ n 1) (cdr lis))))))
    (s 1 str))
  (define (iterate x lis)
    (if (> x N) lis (iterate (+ x 1) (toggle x lis))))
  (iterate 1 (init)))
(N_doors 100)

;; 

;(1 0 0 1 0 0 0 0 1 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1)

; 15_Puzzle_Game

"Task
Implement the Fifteen Puzzle Game.


The   15-puzzle   is also known as:

  Fifteen Puzzle
  Gem Puzzle
  Boss Puzzle
  Game of Fifteen
  Mystic Square
  14-15 Puzzle
  and many others."

(import (scheme base)
        (scheme read)
        (scheme write)
        (srfi 27))    ; random numbers
 
(define *start-position* #(1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 #\space))
(random-source-randomize! default-random-source)
 
;; return a 16-place vector with the tiles randomly shuffled
(define (create-start-position)
  (let ((board (vector-copy *start-position*)))
    (do ((i 0 (+ 1 i))
         (moves (find-moves board) (find-moves board)))
      ((and (>= i 100)
            (not (finished? board)))
       board)
      (make-move board
                 (list-ref moves (random-integer (length moves)))))))
 
;; return index of space
(define (find-space board)
  (do ((i 0 (+ 1 i)))
    ((equal? #\space (vector-ref board i)) i)))
 
;; return a list of symbols indicating available moves
(define (find-moves board)
  (let* ((posn (find-space board))
         (row (quotient posn 4))
         (col (remainder posn 4))
         (result '()))
    (when (> row 0) (set! result (cons 'up result)))
    (when (< row 3) (set! result (cons 'down result)))
    (when (> col 0) (set! result (cons 'left result)))
    (when (< col 3) (set! result (cons 'right result)))
    result))
 
;; make given move - assume it is legal
(define (make-move board move)
  (define (swap posn-1 posn-2)
    (let ((tmp (vector-ref board posn-1)))
      (vector-set! board posn-1 (vector-ref board posn-2))
      (vector-set! board posn-2 tmp)))
  ;
  (let ((posn (find-space board)))
    (case move
      ((left)
       (swap posn (- posn 1)))
      ((right)
       (swap posn (+ posn 1)))
      ((up)
       (swap posn (- posn 4)))
      ((down)
       (swap posn (+ posn 4))))))
 
(define (finished? board)
  (equal? board *start-position*))
 
(define (display-board board)
  (do ((i 0 (+ 1 i)))
    ((= i (vector-length board)) (newline))
    (when (zero? (modulo i 4)) (newline))
    (let ((curr (vector-ref board i)))
      (display curr)
      (display (if (and (number? curr) 
                        (> curr 9)) 
                 " "
                 "  ")))))
 
;; the main game loop
(define (play-game)
  (let ((board (create-start-position)))
    (do ((count 1 (+ count 1))
         (moves (find-moves board) (find-moves board)))
      ((finished? board) 
       (display (string-append "\nCOMPLETED PUZZLE in "
                               (number->string count)
                               " moves\n")))
      (display-board board)
      (display "Enter a move: ") (display moves) (newline)
      (let ((move (read)))
        (if (memq move moves)
          (make-move board move)
          (display "Invalid move - try again"))))))
 
(play-game)

" 1  2     3  
5  7  6  11 
13 14 8  4  
10 9  15 12 
Enter a move: (right left down)
right

1  2  3     
5  7  6  11 
13 14 8  4  
10 9  15 12 
Enter a move: (left down)
down

1  2  3  11 
5  7  6     
13 14 8  4  
10 9  15 12 
Enter a move: (left down up)
down

1  2  3  11 
5  7  6  4  
13 14 8     
10 9  15 12 
Enter a move: (left down up)"


"24 game

The 24 Game tests one's mental arithmetic.


Task
Write a program that randomly chooses and displays four digits, each from 1 ──► 9 (inclusive) with repetitions allowed.

The program should prompt for the player to enter an arithmetic expression using just those, and all of those four digits, used exactly once each. The program should check then evaluate the expression.

The goal is for the player to enter an expression that (numerically) evaluates to 24.

Only the following operators/functions are allowed: multiplication, division, addition, subtraction
Division should use floating point or rational arithmetic, etc, to preserve remainders.
Brackets are allowed, if using an infix expression evaluator.
Forming multiple digit numbers from the supplied digits is disallowed. (So an answer of 12+12 when given 1, 2, 2, and 1 is wrong).
The order of the digits when given does not have to be preserved.

Notes
The type of expression evaluator used is not mandated. An RPN evaluator is equally acceptable for example.
The task is not for the program to generate the expression, or test whether an expression is even possible.



"

;Works with: PLT Scheme version 4
;This uses read to read in a scheme expression, and eval to evaluate it, so in that sense it's not ideal (eval is evil etc.) but any expression that is valid should be safe and terminate in a timely manner.

#lang scheme
(require srfi/27 srfi/1) ;; random-integer, every
 
(define (play)
  (let* ([numbers (build-list 4 (lambda (n)
                                  (add1 (random-integer 9))))]
         [valid?  (curryr valid? numbers)])
    (printf startup-message numbers)
    (let loop ([exp (read)])
      (with-handlers ([exn:fail? (lambda (err)
                                   (printf error-message exp (exn-message err))
                                   (loop (read)))])
       (cond [(eq? exp '!) (play)]
 
             [(or (eq? exp 'q)
                  (eof-object? exp)) (printf quit-message)]
 
             [(not (valid? exp))
              (printf bad-exp-message exp)
              (loop (read))]
 
             [(not (= (eval exp) 24))
              (printf bad-result-message exp (eval exp))
              (loop (read))]
 
             [else (printf winning-message)])))))
 
(define (valid? exp numbers)
  ;; must contain each number exactly once and only valid symbols
  (define (valid-symbol? sym)
    ;; only +, -, *, and / are valid
    (case sym
      [(+ - * /) #t]
      [else #f]))
 
  (let* ([ls (flatten exp)]
         [numbers* (filter number? ls)]
         [symbols  (remove number? ls)])
    (and (equal? (sort numbers <)
                 (sort numbers* <))
         (every valid-symbol? symbols))))
 
(define startup-message "
Write a lisp expression that evaluates to 24
using only (, ), +, -, *, /
and these four numbers: ~a
 
or '!' to get a new set of numbers
or 'q' to quit")
 
(define error-message "
Your expression ~a raised an exception:
 
  \"~a\"
 
Please try again")
 
(define bad-exp-message "Sorry, ~a is a bad expression.")
(define bad-result-message "Sorry, ~a evaluates to ~a, not 24.")
(define quit-message "Thanks for playing...")
(define winning-message "You win!")
 
(provide play)

"> (require "24game.ss")
> (play)

Write a lisp expression that evaluates to 24
using only (, ), +, -, *, /
and these four numbers: (2 7 2 5)

or '!' to get a new set of numbers
or 'q' to quit
!

Write a lisp expression that evaluates to 24
using only (, ), +, -, *, /
and these four numbers: (9 2 7 6)

or '!' to get a new set of numbers
or 'q' to quit
(9 7 6 2)

Your expression (9 7 6 2) raised an exception:

procedure application: expected procedure, given: 9; arguments were: 7 6 2

Please try again
(+ 9 7 6 2)
You win!"

"24 game solve

task
Write a program that takes four digits, either from user input or by random generation, and computes arithmetic expressions following the rules of the 24 game.

Show examples of solutions generated by the program."

#!r6rs
 
(import (rnrs)
        (rnrs eval)
        (only (srfi :1 lists) append-map delete-duplicates iota))
 
(define (map* fn . lis)
  (if (null? lis)
      (list (fn))
      (append-map (lambda (x)
                    (apply map*
                           (lambda xs (apply fn x xs))
                           (cdr lis)))
                  (car lis))))
 
(define (insert x li n)
  (if (= n 0)
      (cons x li)
      (cons (car li) (insert x (cdr li) (- n 1)))))
 
(define (permutations li)
  (if (null? li)
      (list ())
      (map* insert (list (car li)) (permutations (cdr li)) (iota (length li)))))
 
(define (evaluates-to-24 expr)
  (guard (e ((assertion-violation? e) #f))
    (= 24 (eval expr (environment '(rnrs base))))))
 
(define (tree n o0 o1 o2 xs)
  (list-ref
   (list
    `(,o0 (,o1 (,o2 ,(car xs) ,(cadr xs)) ,(caddr xs)) ,(cadddr xs))
    `(,o0 (,o1 (,o2 ,(car xs) ,(cadr xs)) ,(caddr xs)) ,(cadddr xs))
    `(,o0 (,o1 ,(car xs) (,o2 ,(cadr xs) ,(caddr xs))) ,(cadddr xs))
    `(,o0 (,o1 ,(car xs) ,(cadr xs)) (,o2 ,(caddr xs) ,(cadddr xs)))
    `(,o0 ,(car xs) (,o1 (,o2 ,(cadr xs) ,(caddr xs)) ,(cadddr xs)))
    `(,o0 ,(car xs) (,o1 ,(cadr xs) (,o2 ,(caddr xs) ,(cadddr xs)))))
   n))
 
(define (solve a b c d)
  (define ops '(+ - * /))
  (define perms (delete-duplicates (permutations (list a b c d))))
  (delete-duplicates
   (filter evaluates-to-24
           (map* tree (iota 6) ops ops ops perms))))
 
"> (solve 1 3 5 7)
((* (+ 1 5) (- 7 3))
 (* (+ 5 1) (- 7 3))
 (* (+ 5 7) (- 3 1))
 (* (+ 7 5) (- 3 1))
 (* (- 3 1) (+ 5 7))
 (* (- 3 1) (+ 7 5))
 (* (- 7 3) (+ 1 5))
 (* (- 7 3) (+ 5 1)))
> (solve 3 3 8 8)
((/ 8 (- 3 (/ 8 3))))
> (solve 3 4 9 10)
()"

; 4-rings or 4-squares puzzle

(import (scheme base)
        (scheme write)
        (srfi 1))
 
;; return all combinations of size elements from given set
(define (combinations size set unique?)
  (if (zero? size)
    (list '())
    (let loop ((base-combns (combinations (- size 1) set unique?))
               (results '())
               (items set))
      (cond ((null? base-combns) ; end, as no base-combinations to process
             results)
            ((null? items)       ; check next base-combination
             (loop (cdr base-combns)
                   results
                   set))
            ((and unique?        ; ignore if wanting list unique
                  (member (car items) (car base-combns) =))
             (loop base-combns
                   results
                   (cdr items)))
            (else                ; keep the new combination
              (loop base-combns
                    (cons (cons (car items) (car base-combns))
                          results)
                    (cdr items)))))))
 
;; checks if all 4 sums are the same
(define (solution? a b c d e f g)
  (= (+ a b)
     (+ b c d)
     (+ d e f)
     (+ f g)))
 
;; Tasks
(display "Solutions: LOW=1 HIGH=7\n")
(display (filter (lambda (combination) (apply solution? combination))
                 (combinations 7 (iota 7 1) #t))) (newline)
 
(display "Solutions: LOW=3 HIGH=9\n")
(display (filter (lambda (combination) (apply solution? combination))
                 (combinations 7 (iota 7 3) #t))) (newline)
 
(display "Solution count: LOW=0 HIGH=9 non-unique\n")
(display (count (lambda (combination) (apply solution? combination))
                (combinations 7 (iota 10 0) #f))) (newline)

"Solutions: LOW=1 HIGH=7
((4 5 3 1 6 2 7) (6 4 1 5 2 3 7) (3 7 2 1 5 4 6) (7 3 2 5 1 4 6) (4 7 1 3 2 6 5) (7 2 6 1 3 5 4) (5 6 2 3 1 7 4) (6 4 5 1 2 7 3))
Solutions: LOW=3 HIGH=9
((7 8 3 4 5 6 9) (8 7 3 5 4 6 9) (9 6 4 5 3 7 8) (9 6 5 4 3 8 7))
Solution count: LOW=0 HIGH=9 non-unique
2860"


; 9 billion names of God the integer

(define (f m n)
  (define (sigma g x y)
    (define (sum i)
      (if (< i 0) 0 (+ (f x (- y i) ) (sum (- i 1)))))
    (sum y))
  (cond ((eq? m n) 1)
        ((eq? n 1) 1)
        ((eq? n 0) 0)
        ((< m n) (f m m))
        ((< (/ m 2) n) (sigma f (- m n) (- m n)))
        (else (sigma f (- m n) n))))
(define (line m)
  (define (connect i)
    (if (> i m) '() (cons (f m i) (connect (+ i 1)))))
  (connect 1))
(define (print x)
  (define (print-loop i)
    (cond ((< i x) (begin (display (line i)) (display "\n") (print-loop (+ i 1)) ))))
  (print-loop 1))
(print 25)

"(1)
(1 1)
(1 1 1)
(1 2 1 1)
(1 2 2 1 1)
(1 3 3 2 1 1)
(1 3 4 3 2 1 1)
(1 4 5 5 3 2 1 1)
(1 4 7 6 5 3 2 1 1)
(1 5 8 9 7 5 3 2 1 1)
(1 5 10 11 10 7 5 3 2 1 1)
(1 6 12 15 13 11 7 5 3 2 1 1)
(1 6 14 18 18 14 11 7 5 3 2 1 1)
(1 7 16 23 23 20 15 11 7 5 3 2 1 1)
(1 7 19 27 30 26 21 15 11 7 5 3 2 1 1)
(1 8 21 34 37 35 28 22 15 11 7 5 3 2 1 1)
(1 8 24 39 47 44 38 29 22 15 11 7 5 3 2 1 1)
(1 9 27 47 57 58 49 40 30 22 15 11 7 5 3 2 1 1)
(1 9 30 54 70 71 65 52 41 30 22 15 11 7 5 3 2 1 1)
(1 10 33 64 84 90 82 70 54 42 30 22 15 11 7 5 3 2 1 1)
(1 10 37 72 101 110 105 89 73 55 42 30 22 15 11 7 5 3 2 1 1)
(1 11 40 84 119 136 131 116 94 75 56 42 30 22 15 11 7 5 3 2 1 1)
(1 11 44 94 141 163 164 146 123 97 76 56 42 30 22 15 11 7 5 3 2 1 1)
(1 12 48 108 164 199 201 186 157 128 99 77 56 42 30 22 15 11 7 5 3 2 1 1)"


; 99 Bottles of Beer

(define (bottles x)
	(format #t "~a bottles of beer on the wall~%" x)
	(format #t "~a bottles of beer~%" x)
	(format #t "Take one down, pass it around~%")
	(format #t "~a bottles of beer on the wall~%" (- x 1))
	(if (> (- x 1) 0)
		(bottles (- x 1))))

; a + b 

(display (+ (read) (read)))

; ABC problem
"
You are given a collection of ABC blocks   (maybe like the ones you had when you were a kid).

There are twenty blocks with two letters on each block.

A complete alphabet is guaranteed amongst all sides of the blocks.

The sample collection of blocks:"

(define *blocks*
  '((#\B #\O) (#\X #\K) (#\D #\Q) (#\C #\P) (#\N #\A)
    (#\G #\T) (#\R #\E) (#\T #\G) (#\Q #\D) (#\F #\S)
    (#\J #\W) (#\H #\U) (#\V #\I) (#\A #\N) (#\O #\B)
    (#\E #\R) (#\F #\S) (#\L #\Y) (#\P #\C) (#\Z #\M)))
 
(define (exists p? li)
  (and (not (null? li))
       (or (p? (car li))
           (exists p? (cdr li)))))
 
(define (remove-one x li)
  (cond
    ((null? li) '())
    ((equal? (car li) x) (cdr li))
    (else (cons (car li) (remove-one x (cdr li))))))
 
(define (can-make-list? li blocks)
  (or (null? li)
      (exists
       (lambda (block)
         (and
          (member (char-upcase (car li)) block)
          (can-make-list? (cdr li) (remove-one block blocks))))
       blocks)))
 
(define (can-make-word? word)
  (can-make-list? (string->list word) *blocks*))
 
 
(define *words*
  '("A" "Bark" "book" "TrEaT" "COMMON" "squaD" "CONFUSE"))
 
(for-each
 (lambda (word)
   (display (if (can-make-word? word)
                "   Can make word: "
                "Cannot make word: "))
   (display word)
   (newline))
 *words*)

"
  Can make word: A
   Can make word: Bark
Cannot make word: book
   Can make word: TrEaT
Cannot make word: COMMON
   Can make word: squaD
   Can make word: CONFUSE
"

; Abundant, deficient and perfect number classifications

(define (classify n)
 (define (sum_of_factors x)
  (cond ((= x 1) 1)
        ((= (remainder n x) 0) (+ x (sum_of_factors (- x 1))))
        (else (sum_of_factors (- x 1)))))
 (cond ((or (= n 1) (< (sum_of_factors (floor (/ n 2))) n)) -1)
       ((= (sum_of_factors (floor (/ n 2))) n) 0)
       (else 1)))
(define n_perfect 0)
(define n_abundant 0)
(define n_deficient 0)
(define (count n)
 (cond ((= n 1) (begin (display "perfect ")
                       (display n_perfect)
                       (newline)
                       (display "abundant")
                       (display n_abundant)
                       (newline)
                       (display "deficinet")
                       (display n_perfect)
                       (newline)))
       ((equal? (classify n) 0) (begin (set! n_perfect (+ 1 n_perfect)) (display n) (newline) (count (- n 1))))
       ((equal? (classify n) 1) (begin (set! n_abundant (+ 1 n_abundant)) (count (- n 1))))
       ((equal? (classify n) -1) (begin (set! n_deficient (+ 1 n_deficient)) (count (- n 1))))))

; Ackermann function

(define (ackerman m n)
    (cond
        ((= m 0) (+ n 1))
        ((= n 0) (ackerman (- m 1) 1))
        (else (ackerman (- m 1) (ackerman m (- n 1))))))





; AKS alg test for primes

;; implement mod m arithmetic with polnomials in x
;; as lists of coefficients, x^0 first.
;;
;; so x^3 + 5 is represented as (5 0 0 1)
 
(define (+/m m a b)
  ;; add two polynomials
  (cond ((null? a) b)
        ((null? b) a)
        (else (cons (modulo (+ (car a) (car b)) m)
                    (+/m m (cdr a) (cdr b))))))
 
(define (*c/m m c a)
  ;; multiplication by a constant
  (map (lambda (v) (modulo (* c v) m)) a))
 
(define (*/m m a b)
  ;; multiply two polynomials
  (let loop ((a a))
    (if (null? a)
        '()
        (+/m m (*c/m m (car a) b)
             (cons 0 (*/m m (cdr a) b))))))
 
(define (x^n/m m n)
  (if (= n 0)
      '(1)
      (cons 0 (x^n/m m (- n 1)))))
 
(define (^n/m m a n)
  ;; calculate the n'th power of polynomial a
  (cond ((= n 0) '(1))
        ((= n 1) a)
        (else (*/m m a (^n/m m a (- n 1))))))
 
;; test case
;;
;; ? lift(Mod((x^3 + 5)*(4 + 3*x + x^2),6))
;; %13 = x^5 + 3*x^4 + 4*x^3 + 5*x^2 + 3*x + 2
;;
;; > (*/m 6 '(5 0 0 1) '(4 3 1))
;; '(2 3 5 4 3 1)
;;
;; working correctly
 
(define (rosetta-aks-test p)
  (if (or (= p 0) (= p 1))
      #f
      ;; u = (x - 1)^p
      ;; v = (x^p - 1)
      (let ((u (^n/m p (list -1 1) p))
            (v (+/m p (x^n/m p p) (list -1))))
        (every zero? (+/m p u (*c/m p -1 v))))))
 
;; > (filter rosetta-aks-test (iota 50))
;; '(2 3 5 7 11 13 17 19 23 29 31 37 41 43 47)
 
;; Align columns

"Given a text file of many lines, where fields within a line are delineated by a single 'dollar' character, write a program that aligns each column of fields by ensuring that words in each column are separated by at least one space. Further, allow for each word in a column to be either left justified, right justified, or center justified within its column."

(import (scheme base)
        (scheme write)
        (srfi 1)
        (except (srfi 13) string-for-each string-map)
        (srfi 14))
 
;; text is a list of lines, alignment is left/right/center
;; displays the aligned text in columns with a single space gap
(define (align-columns text alignment)
  (define (split line) ; splits string on $ into list of strings
    (string-tokenize line (char-set-complement (->char-set "$"))))
  (define (extend lst n) ; extends list to length n, by adding "" to end
    (append lst (make-list (- n (length lst)) "")))
  (define (align-word word width) ; align single word to fit width
    (case alignment
      ((left) (string-pad-right word width))
      ((right) (string-pad word width))
      ((center) (let ((rem (- width (string-length word))))
                  (string-pad-right (string-pad word (- width (truncate (/ rem 2))))
                                    width)))))
  ;
  (display alignment) (newline)
  (let* ((text-list (map split text))
         (max-line-len (fold (lambda (text val) (max (length text) val)) 0 text-list))
         (text-lines (map (lambda (line) (extend line max-line-len)) text-list))
         (min-col-widths (map (lambda (col) 
                                (fold (lambda (line val) 
                                        (max (string-length (list-ref line col))
                                             val)) 
                                      0 
                                      text-lines))
                              (iota max-line-len))))
    (map (lambda (line) 
           (map (lambda (word width) 
                  (display (string-append (align-word word width)
                                          " ")))
                line min-col-widths)
           (newline))
         text-lines))
  (newline))
 
;; show example
(define *example* 
  '("Given$a$text$file$of$many$lines,$where$fields$within$a$line$"
    "are$delineated$by$a$single$'dollar'$character,$write$a$program"
    "that$aligns$each$column$of$fields$by$ensuring$that$words$in$each$"
    "column$are$separated$by$at$least$one$space."
    "Further,$allow$for$each$word$in$a$column$to$be$either$left$"
    "justified,$right$justified,$or$center$justified$within$its$column."))
 
(align-columns *example* 'left)
(align-columns *example* 'center)
(align-columns *example* 'right)


;; Amb

" Define and give an example of the Amb operator.

The Amb operator expresses nondeterminism. This doesn't refer to randomness (as in nondeterministic universe) but is closely related to the term as it is used in automata theory (non-deterministic finite automaton).

The Amb operator takes a variable number of expressions (or values if that's simpler in the language) and yields a correct one which will satisfy a constraint in some future computation, thereby avoiding failure.

Problems whose solution the Amb operator naturally expresses can be approached with other tools, such as explicit nested iterations over data sets, or with pattern matching. By contrast, the Amb operator appears integrated into the language. Invocations of Amb are not wrapped in any visible loops or other search patterns; they appear to be independent.

Essentially Amb(x, y, z) splits the computation into three possible futures: a future in which the value x is yielded, a future in which the value y is yielded and a future in which the value z is yielded. The future which leads to a successful subsequent computation is chosen. The other parallel universes somehow go away. Amb called with no arguments fails.

For simplicity, one of the domain values usable with Amb may denote failure, if that is convenient. For instance, it is convenient if a Boolean false denotes failure, so that Amb(false) fails, and thus constraints can be expressed using Boolean expressions like Amb(x * y == 8) which unless x and y add to four."

"let x = Amb(1, 2, 3)
let y = Amb(7, 6, 4, 5)
Amb(x * y = 8)
print x, y
The output is 2 4 because Amb(1, 2, 3) correctly chooses the future in which x has value 2, Amb(7, 6, 4, 5) chooses 4 and consequently Amb(x * y = 8) produces a success.

Alternatively, failure could be represented using strictly Amb():

unless x * y = 8 do Amb()
Or else Amb could take the form of two operators or functions: one for producing values and one for enforcing constraints:

let x = Ambsel(1, 2, 3)
let y = Ambsel(4, 5, 6)
Ambassert(x * y = 8)
print x, y
where Ambassert behaves like Amb() if the Boolean expression is false, otherwise it allows the future computation to take place, without yielding any value.

The task is to somehow implement Amb, and demonstrate it with a program which chooses one word from each of the following four sets of character strings to generate a four-word sentence:

The constraint to be satisfied is that the last character of each word (other than the last) is the same as the first character of its successor.

The only successful sentence is that thing grows slowly; other combinations do not satisfy the constraint and thus fail.

The goal of this task isn't to simply process the four lists of words with explicit, deterministic program flow such as nested iteration, to trivially demonstrate the correct output. The goal is to implement the Amb operator, or a facsimile thereof that is possible within the language limitations. "

(define fail 
  (lambda () 
    (error "Amb tree exhausted"))) 
 
(define-syntax amb 
  (syntax-rules () 
    ((AMB) (FAIL))                      ; Two shortcuts. 
    ((AMB expression) expression) 
 
    ((AMB expression ...) 
     (LET ((FAIL-SAVE FAIL)) 
       ((CALL-WITH-CURRENT-CONTINUATION ; Capture a continuation to 
          (LAMBDA (K-SUCCESS)           ;   which we return possibles. 
            (CALL-WITH-CURRENT-CONTINUATION 
              (LAMBDA (K-FAILURE)       ; K-FAILURE will try the next 
                (SET! FAIL K-FAILURE)   ;   possible expression. 
                (K-SUCCESS              ; Note that the expression is 
                 (LAMBDA ()             ;   evaluated in tail position 
                   expression))))       ;   with respect to AMB. 
            ... 
            (SET! FAIL FAIL-SAVE)      ; Finally, if this is reached, 
            FAIL-SAVE)))))))            ;   we restore the saved FAIL. 
 
 
(let ((w-1 (amb "the" "that" "a"))
      (w-2 (amb "frog" "elephant" "thing"))
      (w-3 (amb "walked" "treaded" "grows"))
      (w-4 (amb "slowly" "quickly")))
  (define (joins? left right)
    (equal? (string-ref left (- (string-length left) 1)) (string-ref right 0)))
  (if (joins? w-1 w-2) '() (amb))
  (if (joins? w-2 w-3) '() (amb))
  (if (joins? w-3 w-4) '() (amb))
  (list w-1 w-2 w-3 w-4))

; Amicable pairs

(import (scheme base)
        (scheme inexact)
        (scheme write)
        (only (srfi 1) fold))
 
;; return a list of the proper-divisors of n
(define (proper-divisors n)
  (let ((root (sqrt n)))
    (let loop ((divisors (list 1))
               (i 2))
      (if (> i root)
        divisors
        (loop (if (zero? (modulo n i)) 
                (if (= (square i) n)
                  (cons i divisors)
                  (append (list i (quotient n i)) divisors))
                divisors)
              (+ 1 i))))))
 
(define (sum-proper-divisors n)
  (if (< n 2)
    0
    (fold + 0 (proper-divisors n))))
 
(define *max-n* 20000)
 
;; hold sums of proper divisors in a cache, to avoid recalculating
(define *cache* (make-vector (+ 1 *max-n*)))
(for-each (lambda (i) (vector-set! *cache* i (sum-proper-divisors i)))
          (iota *max-n* 1))
 
(define (amicable-pair? i j)
  (and (not (= i j))
       (= i (vector-ref *cache* j))
       (= j (vector-ref *cache* i))))
 
;; double loop to *max-n*, displaying all amicable pairs
(let loop-i ((i 1))
  (when (<= i *max-n*)
    (let loop-j ((j i))
      (when (<= j *max-n*)
        (when (amicable-pair? i j)
          (display (string-append "Amicable pair: "
                                  (number->string i)
                                  " "
                                  (number->string j)))
          (newline))
        (loop-j (+ 1 j))))
    (loop-i (+ 1 i))))

"Amicable pair: 220 284
Amicable pair: 1184 1210
Amicable pair: 2620 2924
Amicable pair: 5020 5564
Amicable pair: 6232 6368
Amicable pair: 10744 10856
Amicable pair: 12285 14595
Amicable pair: 17296 18416"



;;;; numbers.scm
;
; Copyright (c) 2008-2017 The CHICKEN Team
; Copyright (c) 2000-2007, Felix L. Winkelmann
; All rights reserved.
;
; Redistribution and use in source and binary forms, with or without
; modification, are permitted provided that the following conditions
; are met:
; 1. Redistributions of source code must retain the above copyright
;    notice, this list of conditions and the following disclaimer.
; 2. Redistributions in binary form must reproduce the above copyright
;    notice, this list of conditions and the following disclaimer in the
;    documentation and/or other materials provided with the distribution.
; 3. The name of the authors may not be used to endorse or promote products
;    derived from this software without specific prior written permission.
;
; THIS SOFTWARE IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR
; IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
; OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
; IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY DIRECT, INDIRECT,
; INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
; NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
; DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
; THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
; (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
; THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
;
; Abbreviations of paper and book titles used in comments are:
; [Knuth] Donald E. Knuth, "The Art of Computer Programming", Volume 2
; [MpNT]  Tiplea at al., "MpNT: A Multi-Precision Number Theory Package"
; [MCA]   Richard P. Brent & Paul Zimmermann, "Modern Computer Arithmetic"

(declare 
  (no-bound-checks)
  (no-procedure-checks))

(module numbers 
    (+ - * / = > < >= <= eqv?
       add1 sub1 signum number->string string->number integer-length bit-set?
       bitwise-and bitwise-ior bitwise-xor bitwise-not arithmetic-shift
       equal? ; From scheme. Structural & bytevector comparisons Just Work
       exp log sin cos tan atan acos asin conj
       expt sqrt exact-integer-sqrt exact-integer-nth-root
       quotient modulo remainder quotient&modulo quotient&remainder
       floor/ floor-quotient floor-remainder
       truncate/ truncate-quotient truncate-remainder
       numerator denominator
       abs max min fxgcd fpgcd gcd lcm
       positive? negative? odd? even? zero?
       exact? inexact?
       rationalize
       random randomize
       floor ceiling truncate round
       inexact->exact inexact exact->inexact exact
       number? complex? real? rational? integer? exact-integer?
       make-rectangular make-polar real-part imag-part magnitude angle
       bignum? ratnum? cflonum? rectnum? compnum? cintnum? cplxnum?
       nan? finite? infinite?

       ;; Specialization hooks, to be removed when integrating into core
       @fixnum-2-plus @integer-2-plus @basic-2-plus
       @fixnum-negate @integer-negate @basic-negate
       @fixnum-abs @integer-abs @basic-abs
       @fixnum-signum @flonum-signum @integer-signum @basic-signum
       @fixnum-2-minus @integer-2-minus @basic-2-minus
       @fixnum-2-times @integer-2-times @basic-2-times
       @fixnum-quotient @flonum-quotient @integer-quotient @basic-quotient
       @fixnum-remainder @flonum-remainder @integer-remainder @basic-remainder
       @fixnum-quotient&remainder @flonum-quotient&remainder
       @integer-quotient&remainder @basic-quotient&remainder
       @fixnum-2-gcd @flonum-2-gcd
       @basic-positive? @integer-positive? @fixnum-positive?
       @basic-negative? @integer-negative? @fixnum-negative?
       @basic-2-= @integer-2-= @basic-2-< @integer-2-<
       @basic-2-<= @integer-2-<= @basic-2-> @integer-2->
       @basic-2->= @integer-2->=
       @basic-even? @basic-odd? @integer-even? @integer-odd?
       @basic-nan? @flonum-nan? @basic-zero?
       @basic-finite? @flonum-finite? @basic-infinite? @flonum-infinite?
       @basic-number->string @fixnum->string @flonum->string @integer->string

       @integer-2-bitwise-and @integer-2-bitwise-ior @integer-2-bitwise-xor
       @integer-arithmetic-shift @fixnum-length @integer-length
       @integer-bit-set?

       ;; These must stay exported because they're called as hooks from C.
       ;; We might later use them in the types db, but it won't help much?
       @extended-2-plus @extended-2-minus @extended-2-times
       @bignum-2-times-karatsuba @bignum-2-divrem-burnikel-ziegler
       @extended-abs @extended-signum @extended-negate
       @integer->string/recursive @extended-number->string
       @error-hook)

  (import (except scheme
		  + - * / = > < >= <= eqv?
		  number->string string->number 
		  exp log sin cos tan atan acos asin expt sqrt
		  quotient modulo remainder
		  numerator denominator
		  abs max min gcd lcm
		  positive? negative? odd? even? zero?
		  exact? inexact?
		  floor ceiling truncate round
		  inexact->exact exact->inexact
		  number? complex? real? rational? integer?
		  real-part imag-part magnitude angle)
	  (except chicken add1 sub1 signum finite?
		  bitwise-and bitwise-ior bitwise-xor bitwise-not
                  arithmetic-shift bit-set?)
	  foreign)

(foreign-declare "#include \"numbers-c.c\"")

;;; THESE SERVE AS SPECIALIZATION ENTRIES.
;;; Once this is integrated into core, they can be killed and the
;;; C functions inlined directly.  Remember to fix the allocations!
(define @basic-2-plus (##core#primitive "C_2_basic_plus"))
(define (@fixnum-2-plus a b) (##core#inline_allocate ("C_a_u_i_2_fixnum_plus" 6) a b))
(define @integer-2-plus (##core#primitive "C_u_2_integer_plus"))

(define @basic-abs (##core#primitive "C_basic_abs"))
(define (@fixnum-abs x) (##core#inline_allocate ("C_a_u_i_fixnum_abs" 6) x))
(define @integer-abs (##core#primitive "C_u_integer_abs"))

(define @basic-signum (##core#primitive "C_basic_signum"))
(define (@fixnum-signum x) (##core#inline "C_u_i_fixnum_signum" x))
(define (@flonum-signum x) (##core#inline_allocate ("C_a_u_i_flonum_signum" 4) x))
(define (@integer-signum x) (##core#inline "C_u_i_integer_signum" x))

(define @basic-negate (##core#primitive "C_basic_negate"))
(define (@fixnum-negate x) (##core#inline_allocate ("C_a_u_i_fixnum_negate" 6) x))
(define @integer-negate (##core#primitive "C_u_integer_negate"))

(define @basic-2-minus (##core#primitive "C_2_basic_minus"))
(define (@fixnum-2-minus a b) (##core#inline_allocate ("C_a_u_i_2_fixnum_minus" 6) a b))
(define @integer-2-minus (##core#primitive "C_u_2_integer_minus"))

(define @basic-2-times (##core#primitive "C_2_basic_times"))
(define (@fixnum-2-times a b) (##core#inline_allocate ("C_a_u_i_2_fixnum_times" 7) a b))
(define @integer-2-times (##core#primitive "C_u_2_integer_times"))

(define @basic-quotient (##core#primitive "C_basic_quotient"))
(define (@fixnum-quotient a b) (##core#inline_allocate ("C_a_u_i_fixnum_quotient_checked" 6) a b))
(define (@flonum-quotient a b) (##core#inline_allocate ("C_a_i_flonum_actual_quotient_checked" 4) a b))
(define @integer-quotient (##core#primitive "C_u_integer_quotient"))

(define @basic-remainder (##core#primitive "C_basic_remainder"))
(define (@fixnum-remainder a b) (##core#inline "C_u_i_fixnum_remainder_checked" a b))
(define (@flonum-remainder a b) (##core#inline_allocate ("C_a_i_flonum_remainder_checked" 4) a b))
(define @integer-remainder (##core#primitive "C_u_integer_remainder"))

(define @basic-quotient&remainder (##core#primitive "C_basic_divrem"))
(define (@fixnum-quotient&remainder a b)
  (values (##core#inline_allocate ("C_a_u_i_fixnum_quotient_checked" 6) a b)
          (##core#inline "C_u_i_fixnum_remainder_checked" a b)))
(define (@flonum-quotient&remainder a b)
  (values (##core#inline_allocate ("C_a_i_flonum_actual_quotient_checked" 4) a b)
          (##core#inline_allocate ("C_a_i_flonum_remainder_checked" 4) a b)))
(define @integer-quotient&remainder (##core#primitive "C_u_integer_divrem"))

;; There is no specialization for flonums because of the integer check.
;; Perhaps that should change?
(define (@fixnum-2-gcd a b) (##core#inline "C_u_i_2_fixnum_gcd" a b))
(define (@flonum-2-gcd a b) (##core#inline_allocate ("C_a_u_i_2_flonum_gcd" 4) a b))

(define (@basic-2-= a b) (##core#inline "C_i_2_basic_equalp" a b))
(define (@integer-2-= a b) (##core#inline "C_u_i_2_integer_equalp" a b))

(define (@basic-2-< a b) (##core#inline "C_i_2_basic_lessp" a b))
(define (@integer-2-< a b) (##core#inline "C_u_i_2_integer_lessp" a b))

(define (@basic-2-<= a b) (##core#inline "C_i_2_basic_less_or_equalp" a b))
(define (@integer-2-<= a b) (##core#inline "C_u_i_2_integer_less_or_equalp" a b))

(define (@basic-2-> a b) (##core#inline "C_i_2_basic_greaterp" a b))
(define (@integer-2-> a b) (##core#inline "C_u_i_2_integer_greaterp" a b))

(define (@basic-2->= a b) (##core#inline "C_i_2_basic_greater_or_equalp" a b))
(define (@integer-2->= a b) (##core#inline "C_u_i_2_integer_greater_or_equalp" a b))

(define (@basic-even? x) (##core#inline "C_i_basic_evenp" x))
(define (@basic-odd? x) (##core#inline "C_i_basic_oddp" x))
(define (@integer-even? x) (##core#inline "C_u_i_integer_evenp" x))
(define (@integer-odd? x) (##core#inline "C_u_i_integer_oddp" x))
(define (@basic-positive? x) (##core#inline "C_i_basic_positivep" x))
(define (@basic-negative? x) (##core#inline "C_i_basic_negativep" x))
(define (@integer-positive? x) (##core#inline "C_u_i_integer_positivep" x))
(define (@integer-negative? x) (##core#inline "C_u_i_integer_negativep" x))
(define (@fixnum-positive? x) (##core#inline "C_u_i_fixnum_positivep" x))
(define (@fixnum-negative? x) (##core#inline "C_u_i_fixnum_negativep" x))

(define @integer-2-bitwise-and (##core#primitive "C_u_2_integer_bitwise_and"))
(define @integer-2-bitwise-ior (##core#primitive "C_u_2_integer_bitwise_ior"))
(define @integer-2-bitwise-xor (##core#primitive "C_u_2_integer_bitwise_xor"))
(define @integer-arithmetic-shift (##core#primitive "C_u_integer_shift"))

(define (@fixnum-length x) (##core#inline "C_u_i_fixnum_length" x))
(define (@integer-length x) (##core#inline "C_u_i_integer_length" x))
(define (@integer-bit-set? n i) (##core#inline "C_u_i_integer_bit_setp" n i))

;; Listing these predicates here may seem silly, but in core's
;; types.db it can improve things considerably
(define (@flonum-nan? x) (##core#inline "C_u_i_flonum_nanp" x))
(define (@basic-nan? x) (##core#inline "C_i_nanp" x))
(define (@flonum-finite? x) (##core#inline "C_u_i_flonum_finitep" x))
(define (@basic-finite? x) (##core#inline "C_i_numbers_finitep" x))
(define (@flonum-infinite? x) (##core#inline "C_u_i_flonum_infinitep" x))
(define (@basic-infinite? x) (##core#inline "C_i_numbers_infinitep" x))
(define (@basic-zero? x) (##core#inline "C_i_numbers_zerop" x))

(define @basic-number->string (##core#primitive "C_basic_number_to_string"))
(define @fixnum->string (##core#primitive "C_u_fixnum_to_string"))
(define @flonum->string (##core#primitive "C_u_flonum_to_string"))
(define @integer->string (##core#primitive "C_u_integer_to_string"))

(define-compiler-syntax exact-integer?
  (syntax-rules ()
    ((_ x) (or (##core#inline "C_fixnump" x) (##core#inline "C_i_bignump" x)))))

;;; Error handling

(define (bad-number loc x) (##sys#signal-hook #:type-error loc "bad argument type - not a number" x))
(define (bad-real loc x) (##sys#signal-hook #:type-error loc "bad argument type - not a real number" x))
(define (bad-ratnum loc x) (##sys#signal-hook #:type-error loc "bad argument type - not a rational number" x))
(define (bad-integer loc x) (##sys#signal-hook #:type-error loc "bad argument type - not an integer" x))
(define (bad-natural loc x) (##sys#signal-hook #:type-error loc "bad argument type - must be an nonnegative integer" x))
(define (bad-positive loc x) (##sys#signal-hook #:type-error loc "bad argument type - must be a positive (non-zero) integer" x))
(define (bad-complex/o loc x) (##sys#signal-hook #:type-error loc "bad argument type - complex number has no ordering" x))
(define (bad-base loc x) (##sys#signal-hook #:type-error loc "bad argument type - not a valid base" x))
(define (bad-inexact loc x) (##sys#signal-hook #:type-error loc "bad argument type - inexact number has no exact representation" x))
(define (bad-exact loc x) (##sys#signal-hook #:type-error loc "bad argument type - must be an exact number" x))
(define (log0 loc x) (##sys#signal-hook #:arithmetic-error loc "log of exact 0 is undefined" x))
(define (expt0 loc x y) (##sys#signal-hook #:arithmetic-error loc "exponent of exact 0 with complex argument is undefined" x y))
(define (div/0 loc x y) (##sys#signal-hook #:arithmetic-error loc "division by zero" x y))

;; Ugly override because we add our own codes
(define (@error-hook code loc . args)
  (case code
    ((99948) (bad-real loc (car args)))
    ((99949) (bad-complex/o loc (car args)))
    (else (apply ##sys#error-hook code loc args))))

(define-inline (%init-tags tagvec) (##core#inline "init_tags" tagvec))

;;; Primitives

(define-inline (fp/ x y) (##core#inline_allocate ("C_a_i_flonum_quotient" 4) x y))
(define-inline (fp* x y) (##core#inline_allocate ("C_a_i_flonum_times" 4) x y))
(define-inline (fp= x y) (##core#inline "C_flonum_equalp" x y))

(define-inline (compnum-real c) (##sys#slot c 1))
(define-inline (compnum-imag c) (##sys#slot c 2))
(define-inline (%make-complex r i) (##sys#make-structure 'compnum r i))

(define-inline (ratnum-numerator c) (##sys#slot c 1))
(define-inline (ratnum-denominator c) (##sys#slot c 2))
(define-inline (%make-ratnum r i) (##sys#make-structure 'ratnum r i))

;;; Setup

(%init-tags
 (vector 'bignum			; BIG_TAG
	 'ratnum			; RAT_TAG
	 'compnum))			; COMP_TAG

(##sys#gc #f)				; move tag-vector into 2nd generation


;;; Comparisons:

(define-inline (%= a b) (##core#inline "C_i_2_basic_equalp" a b))
(define-inline (%> a b) (##core#inline "C_i_2_basic_greaterp" a b))
(define-inline (%< a b) (##core#inline "C_i_2_basic_lessp" a b))
(define-inline (%>= a b) (##core#inline "C_i_2_basic_greater_or_equalp" a b))
(define-inline (%<= a b) (##core#inline "C_i_2_basic_less_or_equalp" a b))

(define (eqv? a b) (##core#inline "C_i_numbers_eqvp" a b))
(define = (##core#primitive "C_numbers_nequalp"))
(define > (##core#primitive "C_numbers_greaterp"))
(define >= (##core#primitive "C_numbers_greater_or_equal_p"))
(define < (##core#primitive "C_numbers_lessp"))
(define <= (##core#primitive "C_numbers_less_or_equal_p"))

;;; Basic arithmetic:

(define (+ . args)
  (if (null? args) 
      0
      (let ((x (##sys#slot args 0))
	    (args (##sys#slot args 1)))
	(if (null? args)
            (if (number? x) x (bad-number '+ x))
            (let loop ((args (##sys#slot args 1))
                       (x (%+ x (##sys#slot args 0))))
              (if (null? args)
                  x
                  (loop (##sys#slot args 1) (%+ x (##sys#slot args 0))) ) )  ) ) ) )

(define %+ (##core#primitive "C_2_basic_plus"))

(define (@extended-2-plus x y)
  (cond ((or (cplxnum? x) (cplxnum? y))
         ;; Just add real and imag parts together
         (let ((r (%+ (real-part x) (real-part y)))
               (i (%+ (imag-part x) (imag-part y))) )
           (make-complex r i) ))
        ((ratnum? x)
         (if (ratnum? y)
             (rat+/- '+ %+ x y)
             ;; a/b + c/d = (a*d + b*c)/(b*d)  [with d = 1]
             (let* ((b (ratnum-denominator x))
                    (numerator (%+ (ratnum-numerator x) (%* b y))))
               (if (##core#inline "C_i_flonump" numerator)
                   (%/ numerator b)
                   (%make-ratnum numerator b)))))
        ((ratnum? y)
         ;; a/b + c/d = (a*d + b*c)/(b*d)  [with b = 1]
         (let* ((d (ratnum-denominator y))
                (numerator (%+ (%* x d) (ratnum-numerator y))))
           (if (##core#inline "C_i_flonump" numerator)
               (%/ numerator d)
               (%make-ratnum numerator d))))
        (else (if (not (number? x))
                  (bad-number '+ x)
                  (bad-number '+ y))) ) )

(define (- arg1 . args)
  (if (null? args)
      ((##core#primitive "C_basic_negate") arg1)
      (let loop ((args (##sys#slot args 1)) (x (%- arg1 (##sys#slot args 0))))
	(if (null? args)
	    x
	    (loop (##sys#slot args 1) (%- x (##sys#slot args 0))) ) ) ) )

(define (@extended-negate x)
  (cond ((ratnum? x)
         (%make-ratnum ((##core#primitive "C_u_integer_negate")
                        (ratnum-numerator x))
                       (ratnum-denominator x)))
        ((cplxnum? x)
         (%make-complex ((##core#primitive "C_basic_negate") (compnum-real x))
                        ((##core#primitive "C_basic_negate") (compnum-imag x))))
        (else (bad-number '- x)) ) ) ; loc?

(define %- (##core#primitive "C_2_basic_minus"))

(define (@extended-2-minus x y)
  (cond ((or (cplxnum? x) (cplxnum? y))
         ;; Just subtract real and imag parts from eachother
         (let ((r (%- (real-part x) (real-part y)))
               (i (%- (imag-part x) (imag-part y))))
           (make-complex r i) ))
        ((ratnum? x)
         (if (ratnum? y)
             (rat+/- '- %- x y)
             ;; a/b - c/d = (a*d - b*c)/(b*d)  [with d = 1]
             (let* ((b (ratnum-denominator x))
                    (numerator (%- (ratnum-numerator x) (%* b y))))
               (if (##core#inline "C_i_flonump" numerator)
                   (%/ numerator b)
                   (%make-ratnum numerator b)))))
        ((ratnum? y)
         ;; a/b - c/d = (a*d - b*c)/(b*d)  [with b = 1]
         (let* ((d (ratnum-denominator y))
                (numerator (%- (%* x d) (ratnum-numerator y))))
           (if (##core#inline "C_i_flonump" numerator)
               (%/ numerator d)
               (%make-ratnum numerator d))))
        (else (if (not (number? x))
                  (bad-number '- x)
                  (bad-number '- y))) ) )

(define (* . args)
  (if (null? args) 
      1
      (let ((x (##sys#slot args 0))
	    (args (##sys#slot args 1)))
	(if (null? args)
            (if (number? x) x (bad-number '* x))
            (let loop ((args (##sys#slot args 1))
                       (x (%* x (##sys#slot args 0))))
              (if (null? args)
                  x
                  (loop (##sys#slot args 1) (%* x (##sys#slot args 0))) ) )  ) ) ) )

(define %* (##core#primitive "C_2_basic_times"))

(define (@extended-2-times x y)
  (define (nonrat*rat x y)
    ;; a/b * c/d = a*c / b*d  [with b = 1]
    ;;  =  ((a / g) * c) / (d / g)
    ;; With   g = gcd(a, d)   and  a = x   [Knuth, 4.5.1]
    (let* ((d (ratnum-denominator y))
           (g (%gcd '* x d)))
      (%ratnum (%* (quotient x g) (ratnum-numerator y))
               (quotient d g))))

  (cond ((or (cplxnum? x) (cplxnum? y))
         (let* ((a (real-part x)) (b (imag-part x))
                (c (real-part y)) (d (imag-part y))
                (r (%- (%* a c) (%* b d)))
                (i (%+ (%* a d) (%* b c))) )
           (make-complex r i) ) )
        ((or (##core#inline "C_i_flonump" x) (##core#inline "C_i_flonump" y))
         ;; This may be incorrect when one is a ratnum consisting of bignums
         (fp* (exact->inexact y) (exact->inexact x))) ; loc?
        ((ratnum? x)
         (if (ratnum? y)
             ;; a/b * c/d = a*c / b*d  [generic]
             ;;   = ((a / g1) * (c / g2)) / ((b / g2) * (d / g1))
             ;; With  g1 = gcd(a, d)  and   g2 = gcd(b, c) [Knuth, 4.5.1]
             (let* ((a (ratnum-numerator x)) (b (ratnum-denominator x))
                    (c (ratnum-numerator y)) (d (ratnum-denominator y))
                    (g1 (%integer-gcd a d))
                    (g2 (%integer-gcd b c)))
               (%ratnum (%* (quotient a g1) (quotient c g2))
                        (%* (quotient b g2) (quotient d g1))))
             (nonrat*rat y x)))
        ((ratnum? y) (nonrat*rat x y))
        (else (if (not (number? x))
                  (bad-number '* x)
                  (bad-number '* y)))))

(define-inline (bignum-digit-count b) (##core#inline "C_u_i_bignum_size" b))
(define %extract-digits (##core#primitive "C_u_bignum_extract_digits"))

;; Karatsuba multiplication: invoked from C when the two numbers are
;; large enough to make it worthwhile.  Complexity is O(n^log2(3)),
;; where n is max(len(x), len(y)).  The description in [Knuth, 4.3.3]
;; leaves a lot to be desired.  [MCA, 1.3.2] and [MpNT, 3.2] are a bit
;; easier to understand.  We assume that length(x) <= length(y).
(define (@bignum-2-times-karatsuba x y)
  (let* ((same? (eqv? x y))             ; Check before calling (abs)
         (rs (fx* (##core#inline "C_u_i_integer_signum" x)
                  (##core#inline "C_u_i_integer_signum" y)))
         (x ((##core#primitive "C_u_integer_abs") x))
         (n (bignum-digit-count y))
         (n/2 (fxshr n 1))
         (bits (fx* n/2 (foreign-value "C_BIGNUM_DIGIT_LENGTH" int)))
         (x-hi (%extract-digits x n/2 #f))
         (x-lo (%extract-digits x 0 n/2)))
    (if same?              ; This looks pointless, but reduces garbage
        (let* ((a  (%* x-hi x-hi))
               (b  (%* x-lo x-lo))
               (ab (%- x-hi x-lo))
               (c  (%* ab ab)))
          (%+ (arithmetic-shift a (fxshl bits 1))
              (%+ (arithmetic-shift (%+ b (%- a c)) bits)
                  b)))
        (let* ((y ((##core#primitive "C_u_integer_abs") y))
               (y-hi (%extract-digits y n/2 #f))
               (y-lo (%extract-digits y 0 n/2))
               (a  (%* x-hi y-hi))
               (b  (%* x-lo y-lo))
               (c  (%* (%- x-hi x-lo)
                       (%- y-hi y-lo))))
          (%* rs (%+ (arithmetic-shift a (fxshl bits 1))
                     (%+ (arithmetic-shift (%+ b (%- a c)) bits)
                         b)))))))

(define (/ arg1 . args)
  (if (null? args) 
      (%/ 1 arg1)
      (let loop ((args (##sys#slot args 1)) (x (%/ arg1 (##sys#slot args 0))))
	(if (null? args)
	    x
	    (loop (##sys#slot args 1) (%/ x (##sys#slot args 0))) ) ) ) )

(define (%/ x y)
  (when (eq? y 0) (div/0 '/ x y))
  (cond ((and (exact-integer? x) (exact-integer? y))
         (let ((g (%integer-gcd x y)))
           (%ratnum ((##core#primitive "C_u_integer_quotient") x g)
                    ((##core#primitive "C_u_integer_quotient") y g))))
        ;; Compnum *must* be checked first
        ((or (cplxnum? x) (cplxnum? y))
         (let* ((a (real-part x)) (b (imag-part x))
                (c (real-part y)) (d (imag-part y))
                (r (%+ (%* c c) (%* d d)))
                (x (%/ (%+ (%* a c) (%* b d)) r))
                (y (%/ (%- (%* b c) (%* a d)) r)) )
           (make-complex x y) ))
        ((or (##core#inline "C_i_flonump" x) (##core#inline "C_i_flonump" y))
         ;; This may be incorrect when one is a ratnum consisting of bignums
         (fp/ (exact->inexact x) (exact->inexact y)))
        ((ratnum? x)
         (if (ratnum? y)
             ;; a/b / c/d = a*d / b*c  [generic]
             ;;   = ((a / g1) * (d / g2) * sign(a)) / abs((b / g2) * (c / g1))
             ;; With   g1 = gcd(a, c)   and    g2 = gcd(b, d) [Knuth, 4.5.1 ex. 4]
             (let* ((a (ratnum-numerator x)) (b (ratnum-denominator x))
                    (c (ratnum-numerator y)) (d (ratnum-denominator y))
                    (g1 (%integer-gcd a c))
                    (g2 (%integer-gcd b d)))
               (%ratnum (%* (quotient a g1) (quotient d g2))
                        (%* (quotient b g2) (quotient c g1))))
             ;; a/b / c/d = a*d / b*c  [with d = 1]
             ;;   = ((a / g) * sign(a)) / abs(b * (c / g))
             ;; With   g = gcd(a, c)   and  c = y  [Knuth, 4.5.1 ex. 4]
             (let* ((a (ratnum-numerator x))
                    (g (%gcd '/ a y))
                    (num (quotient a g))
                    (denom (%* (ratnum-denominator x) (quotient y g))))
               (if (##core#inline "C_i_flonump" denom)
                   (%/ num denom)
                   (%ratnum num denom)))))
        ((ratnum? y)
         ;; a/b / c/d = a*d / b*c  [with b = 1]
         ;;   = ((a / g1) * d * sign(a)) / abs(c / g1)
         ;; With   g1 = gcd(a, c)   and   a = x  [Knuth, 4.5.1 ex. 4]
         (let* ((c (ratnum-numerator y))
                (g (%gcd '/ x c))
                (num (%* (quotient x g) (ratnum-denominator y)))
                (denom (quotient c g)))
           (if (##core#inline "C_i_flonump" denom)
               (%/ num denom)
               (%ratnum num denom))))
        ((not (number? x)) (bad-number '/ x))
        (else (if (not (number? x))
                  (bad-number '/ x)
                  (bad-number '/ y)))) )

;; Burnikel-Ziegler recursive division: Split high number (x) in three
;; or four parts and divide by the lowest number (y), split in two
;; parts.  There are descriptions in [MpNT, 4.2], [MCA, 1.4.3] and the
;; paper "Fast Recursive Division" by Christoph Burnikel & Joachim
;; Ziegler is freely available.  There is also a description in Karl
;; Hasselstrom's thesis "Fast Division of Integers".
;;
;; The complexity of this is supposedly O(r*s^{log(3)-1} + r*log(s)),
;; where s is the length of a, and r is the length of b (in digits).
;;
;; TODO: See if it's worthwhile to implement "division without remainder"
;; from the Burnikel-Ziegler paper.
(define (@bignum-2-divrem-burnikel-ziegler x y return-quot? return-rem?)
  (define-inline (digit-bits n)
    (fx* (foreign-value "C_BIGNUM_DIGIT_LENGTH" int) n))
  (define DIV-LIMIT (foreign-value "C_BURNIKEL_ZIEGLER_THRESHOLD" int))

  ;; Here and in 2n/1n we pass both b and [b1, b2] to avoid splitting
  ;; up the number more than once.
  (define (burnikel-ziegler-3n/2n a12 a3 b b1 b2 n)
    (receive (q^ r1)
        (if (%< (arithmetic-shift a12 (fxneg (digit-bits n))) b1)
            (let* ((n/2 (fxshr n 1))
                   (b11 (%extract-digits b1 n/2 #f))
                   (b12 (%extract-digits b1 0 n/2)))
              (burnikel-ziegler-2n/1n a12 b1 b11 b12 n))
            (let ((base*n (digit-bits n)))
              (values (%- (arithmetic-shift 1 base*n) 1) ; B^n-1
                      (%+ (%- a12 (arithmetic-shift b1 base*n)) b1))))
      (let ((r1a3 (%+ (arithmetic-shift r1 (digit-bits n)) a3)))
        (let lp ((r^ (%- r1a3 (%* q^ b2)))
                 (q^ q^))
          (if (negative? r^)
              (lp (%+ r^ b) (%- q^ 1))
              (values q^ r^))))))

  (define (burnikel-ziegler-2n/1n a b b1 b2 n)
    (if (or (fxodd? n) (fx< n DIV-LIMIT))
        ((##core#primitive "C_u_integer_divrem") a b)
        (let* ((n/2 (fxshr n 1))
               ;; Split a and b into n-sized parts a1,..,a4 and b1,b2
               (a12 (%extract-digits a n #f))
               (a3  (%extract-digits a n/2 n))
               (a4  (%extract-digits a 0 n/2)))
          (receive (q1 r1) (burnikel-ziegler-3n/2n a12 a3 b b1 b2 n/2)
            (receive (q2 r) (burnikel-ziegler-3n/2n r1 a4 b b1 b2 n/2)
              (values (%+ (arithmetic-shift q1 (digit-bits n/2)) q2) r))))))

  ;; The caller will ensure that abs(x) > abs(y)
  (let* ((q-neg? (if (negative? y) (not (negative? x)) (negative? x)))
         (r-neg? (negative? x))
         (x (abs x))
         (y (abs y))
         (s (bignum-digit-count y))
         ;; Define m as min{2^k|(2^k)*BURNIKEL_ZIEGLER_THRESHOLD > s}
         ;; This ensures we shift as little as possible (less pressure
         ;; on the GC) while maintaining a power of two until we drop
         ;; below the threshold, so we can always split N in half.
         (m (fxshl 1 (integer-length (fx/ s DIV-LIMIT))))
         (j (fx/ (fx+ s (fx- m 1)) m))  ; j = s/m, rounded up
         (n (fx* j m))
         (norm-shift (fx- (digit-bits n) (integer-length y)))
         (x (arithmetic-shift x norm-shift))
         (y (arithmetic-shift y norm-shift))
         ;; l needs to be the smallest value so that a < base^{l*n}/2
         (l (fx/ (fx+ (bignum-digit-count x) n) n))
         (l (if (fx= (digit-bits l) (integer-length x)) (fx+ l 1) l))
         (t (fxmax l 2))
         (y-hi (%extract-digits y (fxshr n 1) #f))
         (y-lo (%extract-digits y 0 (fxshr n 1))))
    (let lp ((zi (arithmetic-shift x (fxneg (digit-bits (fx* (fx- t 2) n)))))
             (i (fx- t 2))
             (quot 0))
      (receive (qi ri) (burnikel-ziegler-2n/1n zi y y-hi y-lo n)
        (let ((quot (%+ (arithmetic-shift quot (digit-bits n)) qi)))
          (if (fx> i 0)
              (let ((zi-1 (let* ((base*n*i-1 (fx* n (fx- i 1)))
                                 (base*n*i   (fx* n i))
                                 (xi-1 (%extract-digits x base*n*i-1 base*n*i)))
                            (%+ (arithmetic-shift ri (digit-bits n)) xi-1))))
                (lp zi-1 (fx- i 1) quot))
              (let ((rem (if (or (not return-rem?) (eq? 0 norm-shift))
                             ri
                             (arithmetic-shift ri (fxneg norm-shift)))))
                ;; Return requested values (quot, rem or both) with correct sign:
                (cond ((and return-quot? return-rem?)
                       (values (if q-neg? (- quot) quot)
                               (if r-neg? (- rem) rem)))
                      (return-quot? (if q-neg? (- quot) quot))
                      (else (if r-neg? (- rem) rem))))))))))


;;; Complex numbers

(define (make-complex r i)
  (if (or (eq? i 0) (and (##core#inline "C_i_flonump" i) (fp= i 0.0)))
      r
      (%make-complex (if (inexact? i) (exact->inexact r) r)
                     (if (inexact? r) (exact->inexact i) i)) ) )

(define (make-rectangular r i)
  (unless (real? r) (bad-real 'make-rectangular r))
  (unless (real? i) (bad-real 'make-rectangular i))
  (make-complex r i) )

(define (make-polar r phi)
  (unless (real? r) (bad-real 'make-rectangular r))
  (unless (real? phi) (bad-real 'make-rectangular phi))
  (let ((fphi (exact->inexact phi)))
    (make-complex (%* r (##core#inline_allocate ("C_a_i_cos" 4) fphi))
                  (%* r (##core#inline_allocate ("C_a_i_sin" 4) fphi)))))

(define (real-part x)
  (cond ((cplxnum? x) (compnum-real x))
        ((number? x) x)
        (else (bad-number 'real-part x))))

(define (imag-part x)
  (cond ((cplxnum? x) (compnum-imag x))
        ((##core#inline "C_i_flonump" x) 0.0)
        ((number? x) 0)
        (else (bad-number 'imag-part x))))

(define (magnitude x)
  (cond ((cplxnum? x)
         (let ((r (compnum-real x))
               (i (compnum-imag x)) )
           (%sqrt 'magnitude (%+ (%* r r) (%* i i))) ))
        ;; Avoid bad error message (location is hardcoded in abs)
        ((number? x) ((##core#primitive "C_basic_abs") x))
        (else (bad-number 'magnitude x))))

(define (angle x)
  (if (number? x)
      (##core#inline_allocate
       ("C_a_i_atan2" 4)
       (exact->inexact (imag-part x))
       (exact->inexact (real-part x)))
      (else (bad-number 'angle x))))

;;; Rationals

(define (%ratnum m n)
  (cond
   ((eq? n 1) m)
   ((eq? n -1) ((##core#primitive "C_u_integer_negate") m))
   ((negative? n)
    (%make-ratnum ((##core#primitive "C_u_integer_negate") m)
                  ((##core#primitive "C_u_integer_negate") n)))
   (else (%make-ratnum m n))))

;; Knuth, 4.5.1
(define (rat+/- loc op x y)
  (let ((a (ratnum-numerator x)) (b (ratnum-denominator x))
        (c (ratnum-numerator y)) (d (ratnum-denominator y)))
    (let ((g1 (%integer-gcd b d)))
      (cond
       ((eq? g1 1) (%make-ratnum (op (%* a d) (%* b c)) (%* b d)))
       ;; Save a quotient and multiplication if the gcd is equal
       ;; to one of the denominators since quotient of b or d and g1 = 1
       ((%= g1 b) (let* ((t (op (%* a (quotient d g1)) c))
                         (g2 (%integer-gcd t g1)))
                    (%ratnum (quotient t g2) (quotient d g2))))
       ((%= g1 d) (let* ((t (op a (%* c (quotient b g1))))
                         (g2 (%integer-gcd t g1)))
                    (%ratnum (quotient t g2) (quotient b g2))))
       (else (let* ((b/g1 (quotient b g1))
                    (t (op (%* a (quotient d g1))
                           (%* c b/g1)))
                    (g2 (%integer-gcd t g1)))
               (%make-ratnum (quotient t g2)
                             (%* b/g1 (quotient d g2)))))))))

(define (numerator x)
  (cond ((exact-integer? x) x)
        ((##core#inline "C_i_flonump" x)
         (cond ((not (finite? x)) (bad-inexact 'numerator x))
               ((##core#inline "C_u_i_fpintegerp_fixed" x) x)
               (else (exact->inexact (numerator (inexact->exact x))))))
        ((ratnum? x) (ratnum-numerator x))
        (else (bad-ratnum 'numerator x))))

(define (denominator x)
  (cond ((exact-integer? x) 1)
        ((##core#inline "C_i_flonump" x)
         (cond ((not (finite? x)) (bad-inexact 'denominator x))
               ((##core#inline "C_u_i_fpintegerp_fixed" x) 1.0)
               (else (exact->inexact (denominator (inexact->exact x))))))
        ((ratnum? x) (ratnum-denominator x))
        (else (bad-ratnum 'denominator x))))

;;; Enhanced versions of other standard procedures

(define (@extended-abs x)
  (cond ((ratnum? x)
         (%make-ratnum
          ((##core#primitive "C_u_integer_abs") (ratnum-numerator x))
          (ratnum-denominator x)))
        ((cplxnum? x)
         (##sys#signal-hook
          #:type-error 'abs
          "can not compute absolute value of complex number" x))
        (else (bad-number 'abs x))))

(define abs (##core#primitive "C_basic_abs"))

(define (number? x) (##core#inline "C_i_numbers_numberp" x))
(define (integer? x) (##core#inline "C_i_numbers_integerp" x))

(set! ##sys#integer? integer?)

(set! ##sys#number? number?)
(define complex? number?)

;; All numbers are real, except for compnums
(define (real? x)
  (and (##core#inline "C_i_numbers_numberp" x)
       (not (##sys#structure? x 'compnum)) ) )

(define (rational? x) (and (real? x) (finite? x)))

(define (exact-integer? x)
  (or (##core#inline "C_fixnump" x) (##core#inline "C_i_bignump" x)) )


(define (exact? x)
  (cond ((##core#inline "C_fixnump" x))
        ((##core#inline "C_i_bignump" x))
        ((##core#inline "C_i_flonump" x) #f)
        ((ratnum? x))
        ((cplxnum? x)
         (and (exact? (compnum-real x)) (exact? (compnum-imag x))))
        (else (bad-number 'exact? x))))

(define ##sys#exact? exact?)

(define (inexact? x)
  (cond ((##core#inline "C_fixnump" x) #f)
        ((##core#inline "C_i_bignump" x) #f)
        ((##core#inline "C_i_flonump" x))
        ((ratnum? x) #f)
        ((cplxnum? x)
         (or (inexact? (compnum-real x)) (inexact? (compnum-imag x))))
        (else (bad-number 'inexact? x))))

(define ##sys#inexact? inexact?)

(define (positive? x) (##core#inline "C_i_basic_positivep" x))
(define (negative? x) (##core#inline "C_i_basic_negativep" x))

(define (zero? x) (##core#inline "C_i_numbers_zerop" x))

(define (odd? x) (##core#inline "C_i_basic_oddp" x))
(define (even? x) (##core#inline "C_i_basic_evenp" x))

(define (max x1 . xs)
  (let loop ((i (##core#inline "C_i_flonump" x1)) (m x1) (xs xs))
    (if (null? xs)
        (if i (exact->inexact m) m)
        (let ((h (##sys#slot xs 0)))
          (loop (or i (##core#inline "C_i_flonump" h))
                (if (%> h m) h m)
                (##sys#slot xs 1)) ) ) )  )

(define (min x1 . xs)
  (let loop ((i (##core#inline "C_i_flonump" x1)) (m x1) (xs xs))
    (if (null? xs)
        (if i (exact->inexact m) m)
        (let ((h (##sys#slot xs 0)))
          (loop (or i (##core#inline "C_i_flonump" h))
                (if (%< h m) h m)
                (##sys#slot xs 1)) ) ) )  )

(define quotient (##core#primitive "C_basic_quotient"))
(define truncate-quotient quotient)

(define remainder (##core#primitive "C_basic_remainder"))
(define truncate-remainder remainder)

;; Modulo's sign follows y  (whereas remainder's sign follows x)
(define (modulo x y)
  (let ((r (remainder x y)))
    (if (positive? y)
        (if (negative? r) (%+ r y) r)
        (if (positive? r) (%+ r y) r))))

(define floor-remainder modulo)

(define quotient&remainder (##core#primitive "C_basic_divrem"))
(define truncate/ quotient&remainder)

;; Modulo's sign follows y  (whereas remainder's sign follows x)
(define (quotient&modulo x y)
  (receive (div rem) (quotient&remainder x y)
    (if (positive? y)
        (if (negative? rem)
            (values div (%+ rem y))
            (values div rem))
        (if (positive? rem)
            (values div (%+ rem y))
            (values div rem)))))

;; Same as above, but quotient gets adjusted along with the remainder
(define (floor/ x y)
  (receive (div rem) (quotient&remainder x y)
    (if (positive? y)
        (if (negative? rem)
            (values (%- div 1) (%+ rem y))
            (values div rem))
        (if (positive? rem)
            (values (%- div 1) (%+ rem y))
            (values div rem)))))

;; XXX This is a bad bad bad definition; very inefficient But to
;; improve it we would need to provide another implementation of the
;; quotient procedure which floors instead of truncates.
(define (floor-quotient x y)
  (receive (div rem) (floor/ x y) div))


(define (%flo->rat x)
  ;; Try to multiply by two until we reach an integer
  (define (float-fraction-length x)
    (do ((x x (fp* x 2.0))
         (i 0 (fx+ i 1)))
        ((##core#inline "C_u_i_fpintegerp_fixed" x) i)))

  (define (deliver y d)
    (let* ((q (%integer-power 2 (float-fraction-length y)))
           (scaled-y (%* y (exact->inexact q))))
      (if (finite? scaled-y)          ; Shouldn't this always be true?
          (%/ (%/ ((##core#primitive "C_u_flo_to_int") scaled-y) q) d)
          (bad-inexact 'inexact->exact x))))

  (if (and (%< x 1.0)         ; Watch out for denormalized numbers
           (%> x -1.0))       ; XXX: Needs a test, it seems pointless
      (deliver (%* x (expt 2.0 flonum-precision))
               ;; Can be bignum (is on 32-bit), so must wait until after init.
               ;; We shouldn't need to calculate this every single time, tho..
               (%integer-power 2 flonum-precision))
      (deliver x 1)))

(define (inexact->exact x)
  (cond ((exact? x) x)
        ((##core#inline "C_i_flonump" x)
         (cond ((##core#inline "C_u_i_fpintegerp_fixed" x)
                ((##core#primitive "C_u_flo_to_int") x))
               ((##core#inline "C_u_i_flonum_finitep" x)
                (%flo->rat x))
               (else (bad-inexact 'inexact->exact x))))
        ((cplxnum? x)
         (make-complex (inexact->exact (compnum-real x))
                       (inexact->exact (compnum-imag x))))
        (else (bad-number 'inexact->exact x))))

(define ##sys#inexact->exact inexact->exact)
(define exact inexact->exact)

;; Exponent of the lowest allowed flonum; if we get any lower we get zero.
;; In other words, this is the first (smallest) flonum after 0.
;; Equal to (expt 2.0 (- flonum-minimum-exponent flonum-precision))
(define minimum-denorm-flonum-expt (fx- flonum-minimum-exponent flonum-precision))

(define (exact->inexact x)
  (cond ((##core#inline "C_fixnump" x)
         (##core#inline_allocate ("C_a_i_fix_to_flo" 4) x))
        ((##core#inline "C_i_flonump" x) x)
        ((##core#inline "C_i_bignump" x)
         (##core#inline_allocate ("C_a_u_i_big_to_flo" 4) x))
        ((ratnum? x)
         ;; This tries to keep the numbers within representable ranges
         ;; and tries to drop as few significant digits as possible by
         ;; bringing the two numbers to within the same powers of two.
         ;; See algorithms M & N in Knuth, 4.2.1
         (let* ((n1 (ratnum-numerator x))
                (an ((##core#primitive "C_u_integer_abs") n1))
                (d1 (ratnum-denominator x))
                ;; Approximate distance between the numbers in powers
                ;; of 2 ie, 2^e-1 < n/d < 2^e+1 (e is the *un*biased
                ;; value of e_w in M2)
                ;; XXX: What if b != 2 (ie, flonum-radix is not 2)?
                (e (fx- (integer-length an) (integer-length d1)))
                (rnd (lambda (n d e) ; Here, 1 <= n/d < 2  (normalized) [N5]
                       ;; Cannot shift above the available precision,
                       ;; and can't have an exponent that's below the
                       ;; minimum flonum exponent.
                       (let* ((s (min (fx- flonum-precision 1)
                                      (fx- e minimum-denorm-flonum-expt)))
                              (normalized (%/ (arithmetic-shift n s) d))
                              (r (round normalized))
                              (fraction (exact->inexact r))
                              (exp (fx- e s)))
                         (let ((res (fp* fraction (expt 2.0 exp))))
                           (if (negative? n1) (%- 0 res) res)))))
                (scale (lambda (n d)  ; Here, 1/2 <= n/d < 2   [N3]
                         (if (%< n d) ; n/d < 1?
                             ;; Scale left [N3]; only needed once (see note in M3)
                             (rnd (arithmetic-shift n 1) d (fx- e 1))
                             ;; Already normalized
                             (rnd n d e)))))
           ;; After this step, which shifts the smaller number to
           ;; align with the larger, "f" in algorithm N is represented
           ;; in the procedures above by n/d.
           (if (negative? e)
               (scale (arithmetic-shift an (%- 0 e)) d1)
               (scale an (arithmetic-shift d1 e)))))
        ((cplxnum? x)
         (make-complex (exact->inexact (compnum-real x))
                       (exact->inexact (compnum-imag x))))
        (else (bad-number 'exact->inexact x))))

(define inexact exact->inexact)
(define ##sys#exact->inexact exact->inexact)

(define (fxgcd a b)
  (##core#inline "C_u_i_2_fixnum_gcd" a b))

(define (fpgcd a b)
  (##core#inline_allocate ("C_a_u_i_2_flonum_gcd" 4) a b))

(define (%integer-gcd a b)
  (define k fixnum-precision) ; Can be anything between 2 and min(F, B).
  (define k/2 (fx/ k 2))      ; F is fixnum precision and B bits in a big digit
  (define-inline (len x) (##core#inline "C_u_i_integer_length" x))

  ;; This is Lehmer's GCD algorithm with Jebelean's quotient test, as
  ;; it is presented in the paper "An Analysis of Lehmer’s Euclidean
  ;; GCD Algorithm", by J. Sorenson.  Fuck the ACM and their goddamn
  ;; paywall; you can currently find the paper here:
  ;; http://www.csie.nuk.edu.tw/~cychen/gcd/An%20analysis%20of%20Lehmer%27s%20Euclidean%20GCD%20algorithm.pdf
  ;; If that URI fails, it's also explained in [MpNT, 5.2]
  ;;
  ;; The basic idea is to avoid divisions which yield only small
  ;; quotients, in which the remainder won't reduce the numbers by
  ;; much.  This can be detected by dividing only the leading k bits.
  (define (lehmer-gcd u v)
    (let ((-h (fxneg (fx- (len u) k))))
      (let lp ((i-even? #t)
               (u^ (arithmetic-shift u -h))
               (v^ (arithmetic-shift v -h))
               (x-prev 1) (y-prev 0)
               (x-curr 0) (y-curr 1))
        (let* ((q^ (fx/ u^ v^))     ; Estimated quotient for this step
               (x-next (fx- x-prev (fx* q^ x-curr)))
               (y-next (fx- y-prev (fx* q^ y-curr))))
          ;; Euclidian GCD swap on u^ and v^
          (let ((u^ v^)
                (v^ (fx- u^ (fx* q^ v^))))
            (let ((done? (if i-even?
                             (or (fx< v^ (fxneg y-next))
                                 (fx< (fx- u^ v^) (fx- x-next x-curr)))
                             (or (fx< v^ (fxneg x-next))
                                 (fx< (fx- u^ v^) (fx- y-next y-curr))))))
              (if done?
                  (values (+ (* x-prev u) (* y-prev v))
                          (+ (* x-curr u) (* y-curr v)))
                  (lp (not i-even?) u^ v^ x-curr y-curr x-next y-next))))))))

  ;; This implements the basic Euclidian GCD algorithm, with a
  ;; conditional call to Lehmer's GCD algorithm when the length
  ;; difference between a and b is at most one halfdigit.
  ;; The complexity of the whole thing is supposedly O(n^2/log n)
  ;; where n is the number of bits in a and b.
  (let* ((a (abs a)) (b (abs b))   ; Enforce loop invariant on input:
         (swap? (%< a b)))         ; both must be positive, and a >= b
    (let lp ((a (if swap? b a))
             (b (if swap? a b)))
      (cond ((eq? b 0) a)
            ((fx< (fx- (len a) (len b)) k/2)
             (receive (a b) (lehmer-gcd a b)
               (if (eq? b 0)
                   a
                   (lp b ((##core#primitive "C_u_integer_remainder") a b)))))
            ((fixnum? a)      ; b MUST be fixnum due to loop invariant
             (##core#inline "C_u_i_2_fixnum_gcd" a b))
            (else
             (lp b ((##core#primitive "C_u_integer_remainder") a b)))))))

(define (%gcd loc a b)
  (cond ((exact-integer? a)
         (cond ((exact-integer? b)
                (%integer-gcd a b))
               ((and (##core#inline "C_i_flonump" b)
                     (##core#inline "C_u_i_fpintegerp_fixed" b))
                (exact->inexact (%integer-gcd a (inexact->exact b))))
               (else (bad-integer loc b))))
        ((and (##core#inline "C_i_flonump" a)
              (##core#inline "C_u_i_fpintegerp_fixed" a))
         (cond ((##core#inline "C_i_flonump" b)
                (##core#inline_allocate ("C_a_u_i_2_flonum_gcd" 4) a b))
               ((exact-integer? b)
                (exact->inexact (%integer-gcd (inexact->exact a) b)))
               (else (bad-integer loc b))))
        (else (bad-integer loc a))))

(define (gcd . ns)
  (if (eq? ns '())
      0
      (let loop ((head (##sys#slot ns 0))
                 (next (##sys#slot ns 1)))
        (if (null? next)
            (if (integer? head)
                ((##core#primitive "C_basic_abs") head)
                (bad-integer 'gcd head))
            (let ((n2 (##sys#slot next 0)))
              (loop (%gcd 'gcd head n2)
                    (##sys#slot next 1)) ) )  ) ) )

(define (lcm . ns)
  (if (null? ns)
      1
      (let loop ((head (##sys#slot ns 0))
                 (next (##sys#slot ns 1)))
        (if (null? next)
            (if (integer? head)
                ((##core#primitive "C_basic_abs") head)
                (bad-integer 'gcd head))
            (let ((n2 (##sys#slot next 0)))
              (loop (quotient (%* head n2)
                     (%gcd 'lcm head n2))
                    (##sys#slot next 1)) ) )  ) ) )

(define (floor x)
  (cond ((exact-integer? x) x)
        ((##core#inline "C_i_flonump" x) (fpfloor x))
        ;; (floor x) = greatest integer <= x
        ((ratnum? x) (let* ((n (ratnum-numerator x))
                            (q (quotient n (ratnum-denominator x))))
                       (if (%>= n 0) q (%- q 1))))
        (else (bad-real 'floor x))))

(define (ceiling x)
  (cond ((exact-integer? x) x)
        ((##core#inline "C_i_flonump" x) (fpceiling x))
        ;; (ceiling x) = smallest integer >= x
        ((ratnum? x) (let* ((n (ratnum-numerator x))
                            (q (quotient n (ratnum-denominator x))))
                       (if (%>= n 0) (%+ q 1) q)))
        (else (bad-real 'ceiling x))) )

(define (truncate x)
  (cond ((exact-integer? x) x)
        ((##core#inline "C_i_flonump" x) (fptruncate x))
        ;; (rational-truncate x) = integer of largest magnitude <= (abs x)
        ((ratnum? x) (quotient (ratnum-numerator x)
                                (ratnum-denominator x)))
        (else (bad-real 'truncate x))))

(define (round x)
  (cond ((exact-integer? x) x)
        ((##core#inline "C_i_flonump" x)
         (##core#inline_allocate ("C_a_i_flonum_round_proper" 4) x))
        ((ratnum? x) (let* ((x+1/2 (%+ x (%make-ratnum 1 2)))
                            (r (floor x+1/2)))
                       (if (and (%= r x+1/2) (odd? r)) (%- r 1) r)))
        (else (bad-real 'round x))))

(define (find-ratio-between x y)
  (define (sr x y)
    (let ((fx (inexact->exact (floor x))) 
	  (fy (inexact->exact (floor y))))
      (cond ((not (%< fx x)) (list fx 1))
	    ((%= fx fy) 
	     (let ((rat (sr (%/ 1 (%- y fy)) (%/ 1 (%- x fx)))))
	       (list (%+ (cadr rat) (%* fx (car rat))) (car rat))))
	    (else (list (%+ 1 fx) 1)))))
  (cond ((%< y x) (find-ratio-between y x))
	((not (%< x y)) (list x 1))
	((positive? x) (sr x y))
	((negative? y) (let ((rat (sr (%- 0 y) (%- 0 x))))
                         (list (%- 0 (car rat)) (cadr rat))))
	(else '(0 1))))

(define (find-ratio x e) (find-ratio-between (%- x e) (%+ x e)))

(define (rationalize x e)
  (let ((result (apply %/ (find-ratio x e))))
    (if (or (inexact? x) (inexact? e))
        (exact->inexact result)
        result)))

(define (exp n)
  (cond ((not (number? n)) (bad-number 'exp n))
        ((cplxnum? n)
         (%* (##core#inline_allocate ("C_a_i_exp" 4) (compnum-real n))
             (let ((p (compnum-imag n)))
               (make-complex
                (##core#inline_allocate ("C_a_i_cos" 4) p)
                (##core#inline_allocate ("C_a_i_sin" 4) p) ) ) ))
        (else (##core#inline_allocate ("C_a_i_exp" 4) (exact->inexact n)))))

(define (%log x)
  (cond
   ((eq? x 0)                        ; Exact zero?  That's undefined
    (log0 'log x))
   ;; avoid calling inexact->exact on X here (to avoid overflow?)
   ((or (cplxnum? x) (negative? x)) ; General case
    (%+ (%log (magnitude x)) (* (make-complex 0 1) (angle x))))
   (else ; Real number case (< already ensured the argument type is a number)
    (##core#inline_allocate ("C_a_i_log" 4) (exact->inexact x)))))

(define (log a #!optional b)
  (if b (%/ (%log a) (%log b)) (%log a)))

;; These can be removed after integration into core and bootstrapping,
;; when the compiler can write these objects natively.
(define %i (%make-complex 0 1))
(define %-i (%make-complex 0 -1))
(define %i2 (%make-complex 0 2))

(define (sin n)
  (cond ((not (number? n)) (bad-number 'sin n))
        ((cplxnum? n) (let ((in (%* %i n)))
                        (%/ (%- (exp in) (exp (%- 0 in))) %i2)))
        (else (##core#inline_allocate ("C_a_i_sin" 4) (exact->inexact n)))))

(define (cos n)
  (cond ((not (number? n)) (bad-number 'cos n))
        ((cplxnum? n) (let ((in (%* %i n)))
                        (%/ (%+ (exp in) (exp (%- 0 in))) 2) ))
        (else (##core#inline_allocate ("C_a_i_cos" 4) (exact->inexact n)))))

(define (tan n)
  (cond ((not (number? n)) (bad-number 'tan n))
        ((cplxnum? n) (%/ (sin n) (cos n)))
        (else (##core#inline_allocate ("C_a_i_tan" 4) (exact->inexact n)))))

;; General case: sin^{-1}(z) = -i\ln(iz + \sqrt{1-z^2})
(define (asin n)
  (cond ((not (number? n)) (bad-number 'asin n))
        ((and (##core#inline "C_i_flonump" n) (fp>= n -1.0) (fp<= n 1.0))
         (##core#inline_allocate ("C_a_i_asin" 4) n))
        ((and (##core#inline "C_fixnump" n) (fx>= n -1) (fx<= n 1))
         (##core#inline_allocate ("C_a_i_asin" 4)
                                 (##core#inline_allocate
                                  ("C_a_i_fix_to_flo" 4) n)))
        ;; General definition can return compnums
        (else (%* %-i (%log (%+ (%* %i n) (%sqrt 'asin (%- 1 (%* n n)))))))))

;; General case:
;; cos^{-1}(z) = 1/2\pi + i\ln(iz + \sqrt{1-z^2}) = 1/2\pi - sin^{-1}(z) = sin(1) - sin(z)
(define acos
  (let ((asin1 (##core#inline_allocate ("C_a_i_asin" 4) 1)))
    (lambda (n)
      (cond ((not (number? n)) (bad-number 'acos n))
            ((and (##core#inline "C_i_flonump" n) (fp>= n -1.0) (fp<= n 1.0))
             (##core#inline_allocate ("C_a_i_acos" 4) n))
            ((and (##core#inline "C_fixnump" n) (fx>= n -1) (fx<= n 1))
             (##core#inline_allocate ("C_a_i_acos" 4)
                                     (##core#inline_allocate
                                      ("C_a_i_fix_to_flo" 4) n)))
            ;; General definition can return compnums
            (else (%- asin1 (asin n)))))))

(define (atan n #!optional b)
  (cond ((not (number? n)) (bad-number 'atan n))
        ((cplxnum? n) (if b
                          (bad-real 'atan n)
                          (let ((in (%* %i n)))
                            (%/ (%- (%log (%+ 1 in)) (%log (%- 1 in))) %i2))))
        (else (if b
                  (##core#inline_allocate
                   ("C_a_i_atan2" 4) (exact->inexact n) (exact->inexact b))
                  (##core#inline_allocate
                   ("C_a_i_atan" 4) (exact->inexact n))))))

;; This is "Karatsuba Square Root" as described by Paul Zimmermann,
;; which is 3/2K(n) + O(n log n) for an input of 2n words, where K(n)
;; is the number of operations performed by Karatsuba multiplication.
(define (%exact-integer-sqrt a)
  ;; Because we assume a3b+a2 >= b^2/4, we must check a few edge cases:
  (if (and (fixnum? a) (fx<= a 4))
      (case a
        ((0 1) (values a 0))
        ((2)   (values 1 1))
        ((3)   (values 1 2))
        ((4)   (values 2 0))
        (else  (error "this should never happen")))
      (let*-values
          (((len/4) (fxshr (fx+ (integer-length a) 1) 2))
           ((len/2) (fxshl len/4 1))
           ((s^ r^) (%exact-integer-sqrt (arithmetic-shift a (fxneg len/2))))
           ((mask)  (%- (arithmetic-shift 1 len/4) 1))
           ((a0)    (bitwise-and a mask))
           ((a1)    (bitwise-and (arithmetic-shift a (fxneg len/4)) mask))
           ((q u)   (quotient&remainder (%+ (arithmetic-shift r^ len/4) a1)
                                        (arithmetic-shift s^ 1)))
           ((s)     (%+ (arithmetic-shift s^ len/4) q))
           ((r)     (%+ (arithmetic-shift u len/4) (%- a0 (%* q q)))))
        (if (negative? r)
            (values (%- s 1) (%- (%+ r (arithmetic-shift s 1)) 1))
            (values s r)))))

(define (exact-integer-sqrt x)
  (if (or (not (exact-integer? x)) (negative? x))
      (bad-natural 'exact-integer-sqrt x)
      (%exact-integer-sqrt x)))

;; This procedure is so large because it tries very hard to compute
;; exact results if at all possible.
(define (%sqrt loc n)
  (cond ((cplxnum? n)     ; Must be checked before we call "negative?"
         (let ((p (%/ (angle n) 2))
               (m (##core#inline_allocate ("C_a_i_sqrt" 4) (magnitude n))) )
           (make-complex (%* m (cos p)) (%* m (sin p)) ) ))
        ((negative? n)
         (make-complex
          0.0
          (##core#inline_allocate
           ("C_a_i_sqrt" 4)
           (exact->inexact ((##core#primitive "C_basic_negate") n)))))
        ((exact-integer? n)
         (receive (s^2 r)
             (%exact-integer-sqrt n)
           (if (eq? 0 r)
               s^2
               (##core#inline_allocate ("C_a_i_sqrt" 4) (exact->inexact n)))))
        ((ratnum? n)                    ; Try to compute exact sqrt
         (receive (ns^2 nr)             ; We already know n is positive!
             (%exact-integer-sqrt (ratnum-numerator n))
           (if (eq? nr 0)
               (receive (ds^2 dr) (%exact-integer-sqrt (ratnum-denominator n))
                 (if (eq? dr 0)
                     (%/ ns^2 ds^2)
                     (%sqrt loc (exact->inexact n))))
               (%sqrt loc (exact->inexact n)))))
        (else (##core#inline_allocate ("C_a_i_sqrt" 4) (exact->inexact n)))))

(define (sqrt x) (%sqrt 'sqrt x))

;; Not really used
(define (square x) (%* x x))

;; Generalized Newton's algorithm for positive integers, with a little help
;; from Wikipedia ;)  https://en.wikipedia.org/wiki/Nth_root_algorithm
(define (%exact-integer-nth-root loc k n)
  (cond
   ((or (eq? 0 k) (eq? 1 k) (eq? 1 n)) ; Maybe call exact-integer-sqrt on n=2?
    (values k 0))
   ((not (positive? n))
    (bad-positive loc n))
   (else
    (let ((len (integer-length k)))
      (if (%< len n)          ; Idea from Gambit: 2^{len-1} <= k < 2^{len}
          (values 1 (%- k 1)) ; Since we know x >= 2, we know x^{n} can't exist
          ;; Set initial guess to (at least) 2^ceil(ceil(log2(k))/n)
          (let* ((shift-amount (inexact->exact (ceiling (/ (fx+ len 1) n))))
                 (g0 (arithmetic-shift 1 shift-amount))
                 (n-1 (%- n 1)))
            (let lp ((g0 g0)
                     (g1 (quotient (%+ (%* n-1 g0) (quotient k (%integer-power g0 n-1))) n)))
              (if (%< g1 g0)
                  (lp g1 (quotient (%+ (%* n-1 g1) (quotient k (%integer-power g1 n-1))) n))
                  (values g0 (%- k (%integer-power g0 n)))))))))))

(define (exact-integer-nth-root k n)
  (cond ((or (not (exact-integer? k))
             (##core#inline "C_u_i_2_integer_lessp" k 0))
         (bad-natural 'exact-integer-nth-root k))
        ((not (exact-integer? n))
         (bad-integer 'exact-integer-nth-root n))
        (else (%exact-integer-nth-root 'exact-integer-nth-root k n))))

;; This requires e to be an integer, but base does not need to be
(define (%integer-power base e)
  (if (negative? e)
      (%/ 1 (%integer-power base ((##core#primitive "C_u_integer_negate") e)))
      (let lp ((res 1) (e2 e))
        (cond
         ((eq? e2 0) res)
         ((even? e2) ; recursion is faster than iteration here
          (%* res (square (lp 1 (arithmetic-shift e2 -1)))))
         (else
          (lp (%* res base) (%- e2 1)))))))

(define (expt a b)
  (define (log-expt a b)
    (exp (%* b (%log a))))
  (define (slow-expt a b)
    (if (eq? 0 a)
        (expt0 'expt a b)
        (exp (%* b (%log a)))))
  (cond ((not (number? a)) (bad-number 'expt a))
        ((not (number? b)) (bad-number 'expt b))
        ((and (ratnum? a) (not (inexact? b)))
         ;; (n*d)^b = n^b * d^b = n^b * x^{-b}  | x = 1/b
         ;; Hopefully faster than integer-power
         (%* (expt (ratnum-numerator a) b)
             (expt (ratnum-denominator a)
                   ((##core#primitive "C_basic_negate") b))))
        ((ratnum? b)
         ;; x^{a/b} = (x^{1/b})^a
         (cond
          ((exact-integer? a)
           (if (negative? a)
               (log-expt (exact->inexact a) (exact->inexact b))
               (receive (ds^n r)
                   (%exact-integer-nth-root 'expt a (ratnum-denominator b))
                 (if (eq? r 0)
                     (%integer-power ds^n (ratnum-numerator b))
                     ((##core#primitive "C_expt")
                      (exact->inexact a) (exact->inexact b))))))
          ((##core#inline "C_i_flonump" a)
           (log-expt a (exact->inexact b)))
          (else (slow-expt a b))))
        ((or (cplxnum? b) (and (cplxnum? a) (not (integer? b))))
         (slow-expt a b))
        ((and (##core#inline "C_i_flonump" b)
              (not (##core#inline "C_u_i_fpintegerp_fixed" b)))
         (if (negative? a)
             (log-expt (exact->inexact a) (exact->inexact b))
             ((##core#primitive "C_expt") (exact->inexact a) (exact->inexact b))))
        ((##core#inline "C_i_flonump" a)
         ((##core#primitive "C_expt") (exact->inexact a) (exact->inexact b)))
        ;; this doesn't work that well, yet...
        ;; (XXX: What does this mean? why not? I do know this is ugly... :P)
        (else (if (or (inexact? a) (inexact? b))
                  (exact->inexact (%integer-power a (inexact->exact b)))
                  (%integer-power a b)))) )

(define (conj x)                        ; Nonstandard, not part of CHICKEN
  (cond ((not (number? x)) (bad-number 'conj x))
        ((cplxnum? x)
         (make-complex (compnum-real x)
                       ((##core#primitive "C_basic_negate") (compnum-imag x))))
        (else x)) )

(define (add1 n) (%+ n 1))
(define (sub1 n) (%- n 1))

(define (@extended-signum x)
  (cond ((ratnum? x) (##core#inline "C_u_i_integer_signum" (ratnum-numerator x)))
        ((cplxnum? x) (make-polar 1 (angle x)))
        (else (bad-number 'signum x))))

(define signum (##core#primitive "C_basic_signum"))

;; This is incompatible with SRFI-33 or SRFI-60! (arg order swapped)
(define (bit-set? n i)
  (unless (exact-integer? n) (bad-exact 'bit-set? n))
  (unless (exact-integer? i) (bad-exact 'bit-set? i))
  (##core#inline "C_u_i_integer_bit_setp" n i))

;; From SRFI-33 (oddly not in Chicken core).  We could move the whole
;; thing into C, but that doesn't buy us much since we want to keep an
;; inlineable variant anyway.
(define (integer-length x)
  (unless (exact-integer? x) (bad-exact 'integer-length x))
  (##core#inline "C_u_i_integer_length" x))

(define (bitwise-and . xs)
  (if (null? xs)
      -1
      (let ((x1 (##sys#slot xs 0)))
        (unless (exact-integer? x1) (bad-exact 'bitwise-and x1))
        (let loop ((x x1) (xs (##sys#slot xs 1)))
          (if (null? xs)
              x
              (let ((xi (##sys#slot xs 0)))
                (unless (exact-integer? xi) (bad-exact 'bitwise-and xi))
                (loop
                 ((##core#primitive "C_u_2_integer_bitwise_and") x xi)
                 (##sys#slot xs 1) ) ) ) ))) )

(define (bitwise-ior . xs)
  (if (null? xs)
      0
      (let ((x1 (##sys#slot xs 0)))
        (unless (exact-integer? x1) (bad-exact 'bitwise-ior x1))
        (let loop ((x x1) (xs (##sys#slot xs 1)))
          (if (null? xs)
              x
              (let ((xi (##sys#slot xs 0)))
                (unless (exact-integer? xi) (bad-exact 'bitwise-ior xi))
                (loop
                 ((##core#primitive "C_u_2_integer_bitwise_ior") x xi)
                 (##sys#slot xs 1) ) ) ) ))) )

(define (bitwise-xor . xs)
  (if (null? xs)
      0
      (let ((x1 (##sys#slot xs 0)))
        (unless (exact-integer? x1) (bad-exact 'bitwise-ior x1))
        (let loop ((x x1) (xs (##sys#slot xs 1)))
          (if (null? xs)
              x
              (let ((xi (##sys#slot xs 0)))
                (unless (exact-integer? xi) (bad-exact 'bitwise-xor xi))
                (loop
                 ((##core#primitive "C_u_2_integer_bitwise_xor") x xi)
                 (##sys#slot xs 1) ) ) ) ))) )

(define (bitwise-not n)
  (unless (exact-integer? n) (bad-exact 'bitwise-not n))
  ((##core#primitive "C_u_2_integer_minus") -1 n) )

(define (arithmetic-shift n m)
  (unless (exact-integer? n) (bad-exact 'arithmetic-shift n))
  ;; Strictly speaking, shifting *right* is okay for any number
  ;; (ie, shifting by a negative bignum would just result in 0 or -1)...
  (unless (##core#inline "C_fixnump" m)
    (##sys#signal-hook #:type-error 'arithmetic-shift
                       "can only shift by fixnum amounts" n m))
  ((##core#primitive "C_u_integer_shift") n m))

;; This simple enough idea is from
;; http://www.numberworld.org/y-cruncher/internals/radix-conversion.html
(define (@integer->string/recursive n base expected-string-size)
  (let*-values (((halfsize) (fxshr (fx+ expected-string-size 1) 1))
                ((b^M/2) (%integer-power base halfsize))
                ((hi lo) (quotient&remainder n b^M/2))
                ((strhi) (number->string hi base))
                ((strlo) (number->string (abs lo) base)))
    (string-append strhi
                   ;; Fix up any leading zeroes that were stripped from strlo
                   (make-string (fx- halfsize (string-length strlo)) #\0)
                   strlo)))

(define @extended-number->string
  (let ((string-append string-append))
    (lambda (n base)
      (cond
       ((ratnum? n) (string-append (number->string (ratnum-numerator n) base)
                                   "/"
                                   (number->string (ratnum-denominator n) base)))
       ;; What about bases that include an "i"?  That could lead to
       ;; ambiguous results.
       ((cplxnum? n) (let ((r (compnum-real n))
                           (i (compnum-imag n)) )
                       (string-append
                        (number->string r base)
                        ;; The infinities and NaN always print their sign
                        (if (and (finite? i) (positive? i)) "+" "")
                        (number->string i base) "i") ))
       (else (bad-number 'number->string n)))  ) ) )

(define number->string (##core#primitive "C_basic_number_to_string"))
(define ##sys#number->string number->string) ; for printer

;; We try to prevent memory exhaustion attacks by limiting the
;; maximum exponent value.  Perhaps this should be a parameter?
(define-constant +maximum-allowed-exponent+ 10000)

;; From "Easy Accurate Reading and Writing of Floating-Point Numbers"
;; by Aubrey Jaffer.
(define (mantexp->dbl mant point)
  (if (not (negative? point))
      (exact->inexact (%* mant (%integer-power 10 point)))
      (let* ((scl (%integer-power 10 (abs point)))
	     (bex (fx- (fx- (integer-length mant) (integer-length scl))
                       flonum-precision)))
        (if (fx< bex 0)
            (let* ((num (arithmetic-shift mant (fxneg bex)))
                   (quo (round-quotient num scl)))
              (cond ((%> (integer-length quo) flonum-precision)
                     ;; Too many bits of quotient; readjust
                     (set! bex (fx+ 1 bex))
                     (set! quo (round-quotient num (%* scl 2)))))
              (ldexp (exact->inexact quo) bex))
            ;; Fall back to exact calculation in extreme cases
            (%* mant (%integer-power 10 point))))))

(define ldexp (foreign-lambda double "ldexp" double int))

;; Should we export this?
(define (round-quotient n d)
  (let ((q ((##core#primitive "C_u_integer_quotient") n d)))
    (if ((if (even? q) > >=) (%* (abs (remainder n d)) 2) (abs d))
        (%+ q (if (eqv? (negative? n) (negative? d)) 1 -1))
        q)))

;; Shorthand
(define-inline (%subchar s i) (##core#inline "C_subchar" s i))
(define (%string->compnum radix str offset exactness)
  (define (go-inexact!)
    ;; Go inexact unless exact was requested (with #e prefix)
    (unless (eq? exactness 'e) (set! exactness 'i)))
  (define (safe-exponent value e)
    (and e (cond
            ((not value) 0)
            ((%> e +maximum-allowed-exponent+)
             (and (eq? exactness 'i)
                  (cond ((zero? value) 0.0)
                        ((%> value 0.0) +inf.0)
                        (else -inf.0))))
            ((%< e (fxneg +maximum-allowed-exponent+))
             (and (eq? exactness 'i) +0.0))
            ((eq? exactness 'i) (mantexp->dbl value e))
            (else (%* value (%integer-power 10 e))))))
  (let* ((len (##sys#size str))
         (0..r (integer->char (fx+ (char->integer #\0) (fx- radix 1))))
         (a..r (integer->char (fx+ (char->integer #\a) (fx- radix 11))))
         (A..r (integer->char (fx+ (char->integer #\A) (fx- radix 11))))
         ;; Ugly flag which we need (note that "exactness" is mutated too!)
         ;; Since there is (almost) no backtracking we can do this.
         (seen-hashes? #f)
         ;; All these procedures return #f or an object consed onto an end
         ;; position.  If the cdr is false, that's the end of the string.
         ;; If just #f is returned, the string contains invalid number syntax.
         (scan-digits
          (lambda (start)
            (let lp ((i start))
              (if (fx= i len)
                  (and (fx> i start) (cons i #f))
                  (let ((c (%subchar str i)))
                    (if (fx<= radix 10)
                        (if (and (char>=? c #\0) (char<=? c 0..r))
                            (lp (fx+ i 1))
                            (and (fx> i start) (cons i i)))
                        (if (or (and (char>=? c #\0) (char<=? c #\9))
                                (and (char>=? c #\a) (char<=? c a..r))
                                (and (char>=? c #\A) (char<=? c A..r)))
                            (lp (fx+ i 1))
                            (and (fx> i start) (cons i i)))))))))
         (scan-hashes
          (lambda (start)
            (let lp ((i start))
              (if (fx= i len)
                  (and (fx> i start) (cons i #f))
                  (let ((c (%subchar str i)))
                    (if (eq? c #\#)
                        (lp (fx+ i 1))
                        (and (fx> i start) (cons i i))))))))
         (scan-digits+hashes
          (lambda (start neg? all-hashes-ok?)
            (let* ((digits (and (not seen-hashes?) (scan-digits start)))
                   (hashes (if digits
                               (and (cdr digits) (scan-hashes (cdr digits)))
                               (and all-hashes-ok? (scan-hashes start))))
                   (end (or hashes digits)))
              (and-let* ((end)
                         (num ((##core#primitive "C_digits_to_integer")
                               str start (car end) radix neg?)))
                (when hashes            ; Eeewww. Feeling dirty yet?
                  (set! seen-hashes? #t)
                  (go-inexact!))
                (cons num (cdr end))))))
         (scan-exponent
          (lambda (start)
            (and (fx< start len)
                 (let ((sign (case (%subchar str start)
                               ((#\+) 'pos) ((#\-) 'neg) (else #f))))
                   (and-let* ((start (if sign (fx+ start 1) start))
                              (end (scan-digits start)))
                     (go-inexact!)
                     (cons ((##core#primitive "C_digits_to_integer")
                            str start (car end) radix (eq? sign 'neg))
                           (cdr end)))))))
         (scan-decimal-tail             ; The part after the decimal dot
          (lambda (start neg? decimal-head)
            (and (fx< start len)
                 (let* ((tail (scan-digits+hashes start neg? decimal-head))
                        (next (if tail (cdr tail) start)))
                   (and (or decimal-head (not next)
                            (fx> next start)) ; Don't allow empty "."
                        (case (and next (%subchar str next))
                          ((#\e #\s #\f #\d #\l
                            #\E #\S #\F #\D #\L)
                           (and-let* (((fx> len next))
                                      (ee (scan-exponent (fx+ next 1)))
                                      (e (car ee))
                                      (h (safe-exponent decimal-head e)))
                             (let* ((te (and tail (fx- e (fx- (cdr tail) start))))
                                    (num (and tail (car tail)))
                                    (t (safe-exponent num te)))
                               (cons (if t (%+ h t) h) (cdr ee)))))
                          (else (let* ((last (or next len))
                                       (te (and tail (fx- start last)))
                                       (num (and tail (car tail)))
                                       (t (safe-exponent num te))
                                       (h (or decimal-head 0)))
                                  (cons (if t (%+ h t) h) next)))))))))
         (scan-ureal
          (lambda (start neg?)
            (if (and (fx> len (fx+ start 1)) (eq? radix 10)
                     (eq? (%subchar str start) #\.))
                (begin
                  (go-inexact!)
                  (scan-decimal-tail (fx+ start 1) neg? #f))
                (and-let* ((end (scan-digits+hashes start neg? #f)))
                  (case (and (cdr end) (%subchar str (cdr end)))
                    ((#\.)
                     (go-inexact!)
                     (and (eq? radix 10)
                          (if (fx> len (fx+ (cdr end) 1))
                              (scan-decimal-tail (fx+ (cdr end) 1) neg? (car end))
                              (cons (car end) #f))))
                    ((#\e #\s #\f #\d #\l
                      #\E #\S #\F #\D #\L)
                     (and-let* (((eq? radix 10))
                                ((fx> len (cdr end)))
                                (ee (scan-exponent (fx+ (cdr end) 1)))
                                (num (car end))
                                (val (safe-exponent num (car ee))))
                       (cons val (cdr ee))))
                    ((#\/)
                     (set! seen-hashes? #f) ; Reset flag for denominator
                     (and-let* (((fx> len (cdr end)))
                                (d (scan-digits+hashes (fx+ (cdr end) 1) #f #f))
                                (num (car end))
                                (denom (car d)))
                       (if (not (eq? denom 0))
                           (cons (%/ num denom) (cdr d))
                           ;; Hacky: keep around an inexact until we decide we
                           ;; *really* need exact values, then fail at the end.
                           (and (not (eq? exactness 'e))
                                (case (signum num)
                                  ((-1) (cons -inf.0 (cdr d)))
                                  ((0)  (cons +nan.0 (cdr d)))
                                  ((+1) (cons +inf.0 (cdr d))))))))
                    (else end))))))
         (scan-real
          (lambda (start)
            (and (fx< start len)
                 (let* ((sign (case (%subchar str start)
                                ((#\+) 'pos) ((#\-) 'neg) (else #f)))
                        (next (if sign (fx+ start 1) start)))
                   (and (fx< next len)
                        (case (%subchar str next)
                          ((#\i #\I)
                           (or (and sign
                                    (cond
                                     ((fx= (fx+ next 1) len) ; [+-]i
                                      (cons (if (eq? sign 'neg) -1 1) next))
                                     ((and (fx<= (fx+ next 5) len)
                                           (string-ci=? (substring str next (fx+ next 5)) "inf.0"))
                                      (go-inexact!)
                                      ;; XXX TODO: Make this +inf/-inf
                                      (cons (fp/ (if (eq? sign 'neg) -1.0 1.0) 0.0)
                                            (and (fx< (fx+ next 5) len)
                                                 (fx+ next 5))))
                                     (else #f)))
                               (scan-ureal next (eq? sign 'neg))))
                          ((#\n #\N)
                           (or (and sign
                                    (fx<= (fx+ next 5) len)
                                    (string-ci=? (substring str next (fx+ next 5)) "nan.0")
                                    (begin (go-inexact!)
                                           ;; XXX TODO: Make this +nan.0
                                           ;; The atof() hack is used to ensure
                                           ;; the nan is positive (otherwise we get
                                           ;; into trouble with numbers-syntax on old
                                           ;; CHICKENs)
                                           (cons (foreign-value "atof(\"+nan\")" float)
                                                 (and (fx< (fx+ next 5) len)
                                                      (fx+ next 5)))))
                               (scan-ureal next (eq? sign 'neg))))
                          (else (scan-ureal next (eq? sign 'neg)))))))))
         (number (and-let* ((r1 (scan-real offset)))
                   (case (and (cdr r1) (%subchar str (cdr r1)))
                     ((#f) (car r1))
                     ((#\i #\I) (and (fx= len (fx+ (cdr r1) 1))
                                     (or (eq? (%subchar str offset) #\+) ; ugh
                                         (eq? (%subchar str offset) #\-))
                                     (make-rectangular 0 (car r1))))
                     ((#\+ #\-)
                      (set! seen-hashes? #f) ; Reset flag for imaginary part
                      (and-let* ((r2 (scan-real (cdr r1)))
                                 ((cdr r2))
                                 ((fx= len (fx+ (cdr r2) 1)))
                                 ((or (eq? (%subchar str (cdr r2)) #\i)
                                      (eq? (%subchar str (cdr r2)) #\I))))
                        (make-rectangular (car r1) (car r2))))
                     ((#\@)
                      (set! seen-hashes? #f) ; Reset flag for angle
                      (and-let* ((r2 (scan-real (fx+ (cdr r1) 1)))
                                 ((not (cdr r2))))
                        (make-polar (car r1) (car r2))))
                     (else #f)))))
    (and number (if (eq? exactness 'i)
                    (exact->inexact number)
                    ;; Ensure we didn't encounter +inf.0 or +nan.0 with #e
                    (and (finite? number) number)))))

(define (string->number str #!optional (base 10))
  (##sys#check-string str 'string->number)
  (unless (and (##core#inline "C_fixnump" base)
               (fx< 1 base) (fx< base 37)) ; We only have 0-9 and the alphabet!
    (bad-base 'string->number base))
  (let scan-prefix ((i 0)
                    (exness #f)
                    (radix #f)
                    (len (##sys#size str)))
    (if (and (fx< (fx+ i 2) len) (eq? (%subchar str i) #\#))
        (case (%subchar str (fx+ i 1))
          ((#\i #\I) (and (not exness) (scan-prefix (fx+ i 2) 'i radix len)))
          ((#\e #\E) (and (not exness) (scan-prefix (fx+ i 2) 'e radix len)))
          ((#\b #\B) (and (not radix) (scan-prefix (fx+ i 2) exness 2 len)))
          ((#\o #\O) (and (not radix) (scan-prefix (fx+ i 2) exness 8 len)))
          ((#\d #\D) (and (not radix) (scan-prefix (fx+ i 2) exness 10 len)))
          ((#\x #\X) (and (not radix) (scan-prefix (fx+ i 2) exness 16 len)))
          (else #f))
        (%string->compnum (or radix base) str i exness))))

;;; Reader hook
(define (##sys#string->number str #!optional (radix 10) exactness)
  (%string->compnum radix str 0 exactness))

(define (randomize . n)
  (let ((nn (if (null? n)
		(##sys#flo2fix (fp/ (current-seconds) 1000.0)) ; wall clock time
		(car n))))
    (unless (exact-integer? nn) (bad-exact 'randomize nn))
    (##core#inline "C_u_i_integer_randomize" nn) ) )

(define (random n)
  (unless (exact-integer? n) (bad-exact 'random n))
  (if (eq? n 0)
      0
      ((##core#primitive "C_u_integer_random") n) ) )


;;; Non-standard type procedures

(define (bignum? x) (##core#inline "C_i_bignump" x))

(define (nan? x) (##core#inline "C_i_nanp" x))
(define (infinite? x) (##core#inline "C_i_numbers_infinitep" x))
(define (finite? x) (##core#inline "C_i_numbers_finitep" x))

(define (ratnum? x) (##sys#structure? x 'ratnum)) ; rational number

;; XXX THE ONES BELOW ARE EXTREMELY CONFUSING
;; Especially considering the type tag in a complex number is "compnum"!
;; Best to rename cplxnum? to compnum? and ditch the rest.
;; A user can easily define them themselves
(define (cplxnum? x) (##sys#structure? x 'compnum)) ; complex number

(define (rectnum? x)    ; "exact" complex number
  (and (cplxnum? x)
       (integer? (compnum-real x))
       (integer? (compnum-imag x))))

(define (compnum? x)    ; inexact complex number
  (and (cplxnum? x)
       (inexact? (compnum-real x))
       (inexact? (compnum-imag x))))

(define (cintnum? x)    ; integer number
  (or (integer? x) (rectnum? x)) )

(define (cflonum? x)    ; floatingpoint number
  (or (##core#inline "C_i_flonump" x) (compnum? x)) )

;;; What we provide

(register-feature! #:full-numeric-tower)

)

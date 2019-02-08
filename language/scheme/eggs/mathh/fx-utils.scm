;;;; fx-utils.scm
;;;; Kon Lovett, May '17

;;;; Issues
;;

(module fx-utils

(;export
  ;
  ;check-inexact
  ;
  fxrandom
  ;
  fxzero? fxpositive? fxcardinal? fxnegative? fxnon-positive?
  ;
  fxclosed-right? fxclosed? fxclosed-left? fxclosedr? fxclosedl?
  ;
  fxabs
  ;
  fxadd1 fxsub1
  ;
  fxsqr fxcub
  fxlog2
  fxpow2log2
  ;
  fxdistance fxdistance*
  ;
  fxmax-and-min)

(import scheme chicken foreign)
(use
  (only extras random))

;;;

;;

#>
/* Integer log2 - high bit set */
static C_uword
C_uword_log2( C_uword n )
{
static const C_uword
  LogTable256[] = { /* 16 x 16 */
# define LT( n )  n, n, n, n, n, n, n, n, n, n, n, n, n, n, n, n
    -1, 0, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3,
    LT( 4 ),
    LT( 5 ), LT( 5 ),
    LT( 6 ), LT( 6 ), LT( 6 ), LT( 6 ),
    LT( 7 ), LT( 7 ), LT( 7 ), LT( 7 ), LT( 7 ), LT( 7 ), LT( 7 ), LT( 7 )
# undef LT
  };

# define rem( i, c )  ((i) >> (c))
# define log( i ) (LogTable256[ (i) & 0xff ])

  C_uword r;

  C_uword tt, t;
# ifdef C_SIXTY_FOUR
  C_uword ttt;
  if( (ttt = rem( n, 32 )) ) {
    if( (tt = rem( ttt, 16 )) ) {
      r = (t = rem( tt, 8 )) ? 56 + log( t ) : 48 + log( tt );
    } else {
      r = (t = rem( n, 8 )) ? 40 + log( t ) : 32 + log( n );
    }
  } else /*cont to 32-bit */
# endif
  if( (tt = rem( n, 16 )) ) {
    r = (t = rem( tt, 8 )) ? 24 + log( t ) : 16 + log( tt );
  } else {
    r = (t = rem( n, 8 )) ? 8 + log( t ) : log( n );
  }

  C_return( r );

# undef log
# undef rem
}
<#

(define C_uword_log2
  (foreign-lambda long C_uword_log2 unsigned-long))

;;

(: *fxrandom (fixnum --> fixnum))
;
(define (*fxrandom x)
  (random x)
  #;
  (##core#inline "C_random_fixnum" x) )

(: *fxadd1 (fixnum --> fixnum))
;
(define (*fxadd1 x)
  (fx+ x 1)
  #;
  (##core#inline "C_fixnum_increase" x) )

(: *fxsub1 (fixnum --> fixnum))
;
(define (*fxsub1 x)
  (fx- x 1)
  #;
  (##core#inline "C_fixnum_decrease" x) )

#|
(: *pow2log2 (fixnum --> fixnum))
;
(define *pow2log2
  (foreign-lambda* unsigned-long ((long n))
   "return( 2 << C_uword_log2( (C_uword) n ) );"))
|#

;;;

;;

(: fxrandom (#!optional fixnum -> fixnum))
;
(define (fxrandom #!optional lim (low 0))
  (let* (
    (lim (if (not lim) most-positive-fixnum lim))
    (dif (fx- lim low))
    (rnd (*fxrandom dif))
    (rnd (fx+ low rnd)) )
    rnd ) )

;;

(: fxzero? (fixnum --> boolean))
;
(define (fxzero? n)
  (fx= 0 n) )

(: fxpositive? (fixnum --> boolean))
;
(define (fxpositive? n)
  (fx< 0 n) )

(: fxcardinal? (fixnum --> boolean))
;
(define (fxcardinal? n)
  (fx<= 0 n) )

(: fxnegative? (fixnum --> boolean))
;
(define (fxnegative? n)
  (fx> 0 n) )

(: fxnon-positive? (fixnum --> boolean))
;
(define (fxnon-positive? n)
  (fx>= 0 n) )

;;

(: fxclosed-right? (fixnum fixnum fixnum --> boolean))
;
(define (fxclosed-right? l x h)
  (and (fx< l x) (fx<= x h)) )

(: fxclosed? (fixnum fixnum fixnum --> boolean))
;
(define (fxclosed? l x h)
  (and (fx<= l x) (fx<= x h)) )

(: fxclosed-left? (fixnum fixnum fixnum --> boolean))
;
(define (fxclosed-left? l x h)
  (and (fx<= l x) (fx< x h)) )

(define fxclosedr? fxclosed-right?)
(define fxclosedl? fxclosed-left?)

;;;

;;

(: fxabs (fixnum --> fixnum))
;
(define (fxabs n)
  (if (fxnegative? n) (fxneg n) n) )

;;

(: fxadd1 (fixnum --> fixnum))
;
(define (fxadd1 n)
  (*fxadd1 n) )

(: fxsub1 (fixnum --> fixnum))
;
(define (fxsub1 n)
  (*fxsub1 n) )

;;

(: fxlog2 (fixnum --> fixnum))
;
(define (fxlog2 n)
  (C_uword_log2 n) )

(: fxpow2log2 (fixnum --> fixnum))
;
(define (fxpow2log2 n)
  (cond
    ((fxzero? n)
      -1 )
    ((fx= 1 n)
      2 )
    (else
      (fxshl 2 (fxlog2 (fxsub1 n))) ) ) )

(: fxsqr (fixnum --> fixnum))
;
(define (fxsqr n)
  (fx* n n) )

(: fxcub (fixnum --> fixnum))
;
(define (fxcub n)
  (fx* n (fx* n n)) )

;;

(: fxdistance (fixnum fixnum fixnum fixnum --> fixnum))
;
(define (fxdistance x1 y1 x2 y2)
  (fx/ (fxdistance* x1 y1 x2 y2) 2) )

(: fxdistance* (fixnum fixnum fixnum fixnum --> fixnum))
;
(define (fxdistance* x1 y1 x2 y2)
  (fx+ (fxsqr (fx- x1 x2)) (fxsqr (fx- y1 y2))) )

;;

(: fxmax-and-min (fixnum #!rest fixnum --> fixnum fixnum))
;
(define (fxmax-and-min fx . fxs)
  (let loop ((fxs fxs) (mx fx) (mn fx))
    (if (null? fxs)
      (values mx mn)
      (let ((cur (car fxs)))
        (loop (cdr fxs) (fxmax mx cur) (fxmin mn cur)) ) ) ) )

) ;fx-utils

;;;; fp-utils.scm
;;;; Kon Lovett, May '17
;;;; Kon Lovett, Mar '18

;;;; Issues
;;
;; - all instances of (fl< -0.0 0.0) found ?

(module fp-utils

(;export
  ;
  ;check-inexact
  ;
  fprandom
  ;
  fpzero? fppositive? fpcardinal? fpnegative? fpnon-positive?
  ;
  fpeven? fpodd?
  ;
  fpclosed-right? fpclosed? fpclosed-left? fpclosedr? fpclosedl?
  ;
  fpadd1 fpsub1
  ;
  fpmodulo
  fpquotient fpremainder
  ;
  fpfraction
  ;
  fptruncate-with-precision
  fpround-with-precision
  fpceiling-with-precision
  fpfloor-with-precision
  ;
  fp~= fp~<= fp~>=
  ;
  fpsqr fpcub
  ;
  fpdegree->radian fpradian->degree
  ;
  fpdistance fpdistance*
  ;
  fpmax-and-min
  ;
  fpprecision-factor
  ;DEPRECATED
  fptruncate/precision fpround/precision fpceiling/precision fpfloor/precision)

(import scheme chicken foreign)
(use
  (only extras random)
  (only mathh log10))

(declare
  (bound-to-procedure
    ##sys#flonum-fraction
    ##sys#check-inexact) )

;;;

(define C_fmod
  (foreign-lambda double "fmod" double double))

(define C_remainder
  (foreign-lambda double "remainder" double double))

(: *fpeven? (float --> boolean))
;
(define (*fpeven? n)
  (let ((r (##sys#flonum-fraction (fp/ n 2.0))))
    (or (fp= 0.0 r) (fp= -0.0 r)) ) )

(define (check-inexact loc obj)
  (##sys#check-inexact obj loc)
  obj )

;;;

;;

(: fprandom (#!optional (or float fixnum) -> float))
;
(define (fprandom #!optional lim (low 0))
  (let* (
    (low (inexact->exact low))
    (lim
      (cond
        ((not lim)
          most-positive-fixnum )
        ((flonum? lim)
          (let (
            (sign? (fpnegative? lim))
            (lim (inexact->exact (expt 10 (round (log10 (abs lim)))))) )
            (if sign? (fxneg lim) lim) ) )
        (else
          lim ) ) ) )
    (if (fx>= low lim)
      +nan.0
      (let* (
        (dif (fx- lim low))
        (rnd (random dif))
        (rnd (fx+ low rnd)) )
        (fp/ 1.0 (exact->inexact rnd)) ) ) ) )

;;

(: fpzero? (float --> boolean))
;
(define (fpzero? n)
  (or (fp= 0.0 n) (fp= -0.0 n)) )

(: fppositive? (float --> boolean))
;
(define (fppositive? n)
  (fp< 0.0 n) )

(: fpcardinal? (float --> boolean))
;
(define (fpcardinal? n)
  (fp<= 0.0 n) )

(: fpnegative? (float --> boolean))
;
(define (fpnegative? n)
  (fp> 0.0 n) )

(: fpnon-positive? (float --> boolean))
;
(define (fpnon-positive? n)
  (fp>= 0.0 n) )

;;

(: fpeven? (float --> boolean))
;
(define (fpeven? n)
  (and
    (fpinteger? n)
    (*fpeven? n)) )

(: fpodd? (float --> boolean))
;
(define (fpodd? n)
  (and
    (fpinteger? n)
    (not (*fpeven? n))) )

;;

(: fpclosed-right? (float float float --> boolean))
;
(define (fpclosed-right? l x h)
  (and (fp< l x) (fp<= x h)) )

(: fpclosed? (float float float --> boolean))
;
(define (fpclosed? l x h)
  (and (fp<= l x) (fp<= x h)) )

(: fpclosed-left? (float float float --> boolean))
;
(define (fpclosed-left? l x h)
  (and (fp<= l x) (fp< x h)) )

(define fpclosedr? fpclosed-right?)
(define fpclosedl? fpclosed-left?)

;;

(: fpadd1 (float --> float))
;
(define (fpadd1 n)
  (fp+ n 1.0) )

(: fpsub1 (float --> float))
;
(define (fpsub1 n)
  (fp- n 1.0) )

;;

(: fpmodulo (float float --> float))
;
(define (fpmodulo x y)
  (fptruncate
    (C_fmod
      (check-inexact 'fpmodulo x)
      (check-inexact 'fpmodulo y))) )

(: fpquotient (float float --> float))
;
(define (fpquotient x y)
  (fptruncate (fp/ x y)) )

(: fpremainder (float float --> float))
;
(define (fpremainder x y)
  (fptruncate
    (C_remainder
      (check-inexact 'fpremainder x)
      (check-inexact 'fpremainder y))) )

;;

(: fpfraction (float --> float))
;
(define (fpfraction n)
	(##sys#flonum-fraction n) )

;;;

;;

(: fp~= (float float #!optional float --> boolean))
;
(define (fp~= x y #!optional (eps flonum-epsilon))
  (let ((diff (fp- x y)))
    (or
      (fpzero? diff)
      (fp<= (fpabs diff) eps) ) ) )

(: fp~<= (float float #!optional float --> boolean))
;
(define (fp~<= x y #!optional (eps flonum-epsilon))
  (or
    (fp< x y)
    (fp~= x y eps) ) )

(: fp~>= (float float #!optional float --> boolean))
;
(define (fp~>= x y #!optional (eps flonum-epsilon))
  (or
    (fp> x y)
    (fp~= x y eps) ) )

;;;

;;

(: fpsqr (float --> float))
;
(define (fpsqr n)
  (fp* n n) )

(: fpcub (float --> float))
;
(define (fpcub n)
  (fp* n (fp* n n)) )

;;;

(define-constant PRECISION-DEFAULT 4.0)

(define-syntax make-unary-with-precision
  (syntax-rules ()
    ((_ ?op)
      (lambda (n #!optional (p PRECISION-DEFAULT))
        (if (fpzero? p)
          (?op n)
          (let ((precfact (fpprecision-factor p)))
            (fp/ (?op (fp* n precfact)) precfact) ) ) ) ) ) )

;;

(: fptruncate-with-precision (float #!optional float --> float))
;
(define fptruncate-with-precision (make-unary-with-precision fptruncate))

(: fpround-with-precision (float #!optional float --> float))
;
(define fpround-with-precision (make-unary-with-precision fpround))

(: fpceiling-with-precision (float #!optional float --> float))
;
(define fpceiling-with-precision (make-unary-with-precision fpceiling))

(: fpfloor-with-precision (float #!optional float --> float))
;
(define fpfloor-with-precision (make-unary-with-precision fpfloor))

;;

(define-constant DEGREE 0.0174532925199432957692369076848861271344) ;pi/180

(: fpdegree->radian (float --> float))
;
(define (fpdegree->radian deg)
  (fp* deg DEGREE) )

(: fpradian->degree (float --> float))
;
(define (fpradian->degree rad)
  (fp/ rad DEGREE) )

;;

(: fpdistance (float float float float --> float))
;
(define (fpdistance x1 y1 x2 y2)
  (fpsqrt (fpdistance* x1 y1 x2 y2)) )

(: fpdistance* (float float float float --> float))
;
(define (fpdistance* x1 y1 x2 y2)
  (fp+ (fpsqr (fp- x1 x2)) (fpsqr (fp- y1 y2))) )

;;

(: fpmax-and-min (float #!rest float --> float float))
;
(define (fpmax-and-min fp . fps)
  (let loop ((fps fps) (mx fp) (mn fp))
    (if (null? fps)
      (values mx mn)
      (let ((cur (car fps)))
        (loop (cdr fps) (fpmax mx cur) (fpmin mn cur)) ) ) ) )

;;

(: fpprecision-factor ((or float fixnum) #!optional float --> float))
;
(define (fpprecision-factor p #!optional (base 10.0))
  (fpexpt base (exact->inexact p)) )

;;DEPRECATED

(define fptruncate/precision fptruncate-with-precision)
(define fpround/precision fpround-with-precision)
(define fpceiling/precision fpceiling-with-precision)
(define fpfloor/precision fpfloor-with-precision)

) ;fp-utils

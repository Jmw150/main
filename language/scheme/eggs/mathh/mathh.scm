;;;; mathh.scm
;;;; Kon Lovett & John Cowen, '07 - '08
;;;; Kon Lovett, Mar '09 - '10, '15, Sep '17
;;;; Peter Bex, Aug '15 (argvector work!)

;;; Provides access to ISO C math functions in <math.h>
;;; that are not defined by the Chicken core.

;; Issues
;;
;; - Some public names do not match the C name: fpmod (fmod), bessel-j0 (j0), ...
;;
;; - Windows Visual C++ 2005 deprecates hypot, j0, j1, jn, y0, y1, yn
;; & renames _hypot, _j0, etc.
;;
;; - Windows does not provide log2, log1p, lgamma, gamma, scalbn,
;; acosh, asinh, atanh, erf, erfc, signbit, cbrt.
;; Some are implemented (poorly) here: log2, log1p, erf, erfc, scalbn, signbit.
;; These are now defunct log2, log1p, erf, erfc, scalbn
;;
;; - 'gamma' is deprecated in favor of 'tgamma' but not available
;; yet on some platforms, so we use 'gamma' for now.
;;
;; - http://www.davidegrayson.com/windev/msys2/ : doesn't define the _WIN32
;; preprocessor macro by default, but it will if you provide the -mwin32 options

;;; Mathh

(module mathh

(;export
  fpclassify fpclass
  signbit
  copysign nextafter
  fpmod
  cbrt
  hypot
  log10 log2 log-with-base log1p
  modf frexp
  ldexp scalbn
  cosh sinh tanh
  acosh asinh atanh
  gamma tgamma lgamma
  bessel-j0 bessel-j1 bessel-jn
  bessel-y0 bessel-y1 bessel-yn
  erf erfc
  ;DEPRECATED
  make-log/base)

(import scheme chicken foreign)

#>
#include <math.h>

/* argvector chicken starts with version 8 */
#if C_BINARY_VERSION >= 8
# define ARGVECTOR_CHICKEN
#endif

#if defined(__sun__) || defined(__sun)
# include <sunmath.h> /* log2 */
#endif

#if 0 /*defined(_WIN32)*/
/* log2, log1p, erf, erfc, scalbn were not originally provided */
static double log2( double x )
{
# ifndef M_LN2
# define M_LN2 0.693147180559945309417232121458176568
# endif
  return log( x ) / M_LN2;
}

static double log1p( double x )
{
  /* very imprecise */
  return log( 1.0 + x );
}

/* from a Python implementation by John D. Cook */
static double erf( double x )
{
# define A1 0.254829592
# define A2 -0.284496736
# define A3 1.421413741
# define A4 -1.453152027
# define A5 1.061405429
# define P  0.3275911

  double abs_x = fabs( x ); /* handle singage */

  /* per Abramowitz & Stegun 7.1.26 */
  double t = 1.0 / (1.0 + P * abs_x);
  double y = 1.0 - (((((A5 * t + A4) * t) + A3) * t + A2) * t + A1) * t * exp( -abs_x * abs_x );

  return _copysign( y, x ); /* handle signage */

# undef P
# undef A5
# undef A4
# undef A3
# undef A2
# undef A1
# undef P
}

static double erfc( double x )
{
  /* very imprecise */
  return 1.0 - erf( x );
}

static double scalbn( double x, int n )
{
  /* not efficient */
  return ldexp( x, n );
}
#endif
<#

;;; Unimplemented Support

(define-inline (%unimplemented-error name)
  (error name (##core#immutable '"this function is unavailable on this platform")) )

#; ;UNUSED
(define-syntax define-unimplemented
  (syntax-rules ()
    ((_ ?name)
     (define (?name . _) (%unimplemented-error ?name) ) ) ) )

(define-syntax lambda-unimplemented
  (syntax-rules ()
    ((_ ?name)
     (lambda _ (%unimplemented-error ?name) ) ) ) )

;;;

;; Bessel functions of the 1st kind

(define bessel-j0
  (cond-expand
    (windows  (foreign-lambda double "_j0" double) )
    (else     (foreign-lambda double "j0" double) ) ) )

(define bessel-j1
  (cond-expand
    (windows  (foreign-lambda double "_j1" double) )
    (else     (foreign-lambda double "j1" double) ) ) )

(define bessel-jn
  (cond-expand
    (windows  (foreign-lambda double "_jn" int double) )
    (else     (foreign-lambda double "jn" int double) ) ) )

;; Bessel functions of the 2nd kind

(define bessel-y0
  (cond-expand
    (windows  (foreign-lambda double "_y0" double) )
    (else     (foreign-lambda double "y0" double) ) ) )

(define bessel-y1
  (cond-expand
    (windows  (foreign-lambda double "_y1" double) )
    (else     (foreign-lambda double "y1" double) ) ) )

(define bessel-yn
  (cond-expand
    (windows  (foreign-lambda double "_yn" int double) )
    (else     (foreign-lambda double "yn" int double) ) ) )

;; Error functions

(define erf (foreign-lambda double "erf" double))
(define erfc (foreign-lambda double "erfc" double))

;; Hyperbolic functions

(define cosh (foreign-lambda double "cosh" double))
(define sinh (foreign-lambda double "sinh" double))
(define tanh (foreign-lambda double "tanh" double))

;; Inverse Hyperbolic functions

(define acosh
  (cond-expand
    (windows  (lambda-unimplemented 'acosh) )
    (else     (foreign-lambda double "acosh" double)) ) )

(define asinh
  (cond-expand
    (windows  (lambda-unimplemented 'asinh) )
    (else     (foreign-lambda double "asinh" double)) ) )

(define atanh
  (cond-expand
    (windows  (lambda-unimplemented 'atanh) )
    (else     (foreign-lambda double "atanh" double)) ) )

;; Euclidean distance function

(define hypot (foreign-lambda double "hypot" double double) )

;; Gamma function

(define gamma
  (cond-expand
    (windows  (lambda-unimplemented 'gamma) )
    (linux    (foreign-lambda double "tgamma" double) )
    (macosx   (foreign-lambda double "tgamma" double) )
    (else     (foreign-lambda double "gamma" double) ) ) )

(define tgamma gamma)

;; Ln Abs Gamma function

(define lgamma
  (cond-expand
    (windows  (lambda-unimplemented 'lgamma) )
    (else     (foreign-lambda double "lgamma" double) ) ) )

;; Base-10 logarithm

(define log10 (foreign-lambda double "log10" double))

;; Base-2 logarithm

(define log2 (foreign-lambda double "log2" double) )

;; Natural logarithm of 1+x accurate for very small x

(define log1p (foreign-lambda double "log1p" double) )

;; Compute x * 2**n

(define ldexp (foreign-lambda double "ldexp" double integer))

;; Efficiently compute x * 2**n

(define scalbn (foreign-lambda double "scalbn" double integer) )

;; Log function for base n

(define (log-with-base b)
	(cond
	  ((= 2 b)
	    log2 )
    ((= 10 b)
      log10 )
    (else
      (let ((lnb (log b)))
        (lambda (n)
          ((foreign-lambda* double ((double x) (double lnb))
            "C_return( log( x ) / lnb );") n lnb)) ) ) ) )

(define make-log/base log-with-base)

;; Flonum remainder

(define fpmod (foreign-lambda double "fmod" double double))

;; Return integer & fraction (as multiple values) of a flonum

(define modf (foreign-primitive ((double x)) "
  double ipart;
  double result  = modf( x, &ipart );
  C_word* values = C_alloc( 2 * C_SIZEOF_FLONUM );
  C_word value1  = C_flonum( &values, ipart );
  C_word value2  = C_flonum( &values, result );
#ifdef ARGVECTOR_CHICKEN
  C_word av[4] = { C_SCHEME_UNDEFINED, C_k, value1, value2 };
  C_values( 4, av );
#else
  C_values( 4, C_SCHEME_UNDEFINED, C_k, value1, value2 );
#endif
  ") )

;; Return mantissa & exponent (as multiple values) of a flonum

(define frexp (foreign-primitive ((double x)) "
  int exp;
  double result = frexp( x, &exp );
  C_word* values = C_alloc( C_SIZEOF_FLONUM );
  C_word value1 = C_flonum( &values, result );
  C_word value2 = C_fix( exp );
#ifdef ARGVECTOR_CHICKEN
  C_word av[4] = { C_SCHEME_UNDEFINED, C_k, value1, value2 };
  C_values( 4, av );
#else
  C_values( 4, C_SCHEME_UNDEFINED, C_k, value1, value2 );
#endif
  ") )

;; Returns arg1 with same sign as arg2

(define copysign
  (cond-expand
    (windows  (foreign-lambda double "_copysign" double double))
    (else     (foreign-lambda double "copysign" double double)) ) )

;; Increments/decrements arg1 in the direction of arg2

(define nextafter
  (cond-expand
    (windows  (foreign-lambda double "_nextafter" double double))
    (else     (foreign-lambda double "nextafter" double double)) ) )

;; #t when negative, #f otherwise

(define signbit
  (cond-expand
    (windows
      (foreign-lambda* bool ((double n)) "C_return( _copysign( 1.0, n ) < 0 );"))
    (else
      (lambda (num)
        (or
          (fp= -0.0 num)
          ((foreign-lambda bool "signbit" double) num) ) ) ) ) )

;; Cube Root

(define cbrt
  (cond-expand
    (windows  (lambda-unimplemented 'cbrt))
    (else     (foreign-lambda double "cbrt" double)) ) )

;; Returns a symbol denoting the kind of floating-point number.

(define fpclass
  (cond-expand
    ((and windows (not cygwin))
      (foreign-lambda* symbol ((double x)) "
        char *name;
        switch (_fpclass( x )) {
        case _FPCLASS_SNAN:
          name = \"signaling-nan\";
          break;
        case _FPCLASS_QNAN:
          name = \"quiet-nan\";
          break;
        case _FPCLASS_NINF:
          name = \"negative-infinite\";
          break;
        case _FPCLASS_NN:
          name = \"negative-normal\";
          break;
        case _FPCLASS_ND:
          name = \"negative-subnormal\";
          break;
        case _FPCLASS_NZ:
          name = \"negative-zero\";
          break;
        case _FPCLASS_PZ:
          name = \"positive-zero\";
          break;
        case _FPCLASS_PD:
          name = \"positive-subnormal\";
          break;
        case _FPCLASS_PN:
          name = \"positive-normal\";
          break;
        case _FPCLASS_PINF:
          name = \"positive-infinite\";
          break;
        default:
          name = \"unclassified\";
          break;
        }
        C_return( name );") )
    (else
      (lambda (num)
        ;
        (define C_fpclassify
          (foreign-lambda* symbol ((double x)) "
            char *name;
            switch (fpclassify( x )) {
            case FP_INFINITE:
              name = x < 0 ? \"negative-infinite\" : \"positive-infinite\";
              break;
            case FP_NAN:
              /*FIXME A quiet nan can be distinguished by bit inspection*/
              name = \"signaling-nan\";
              break;
            case FP_NORMAL:
              name = x < 0 ? \"negative-normal\" : \"positive-normal\";
              break;
            case FP_SUBNORMAL:
              name = x < 0 ? \"negative-subnormal\" : \"positive-subnormal\";
              break;
            case FP_ZERO:
              name = signbit( x ) ? \"negative-zero\" : \"positive-zero\";
              break;
            default:
              name = \"unclassified\";
              break;
            }
            C_return( name );"))
        ;
        (if (fp= -0.0 num)
          'negative-zero
          (C_fpclassify num) ) ) ) ) )

;; Returns a symbol denoting the kind of floating-point number.

(define fpclassify
  (cond-expand
    ((and windows (not cygwin))
      (foreign-lambda* symbol ((double x)) "
        char *name;
        switch (_fpclass( x )) {
        case _FPCLASS_SNAN:
        case _FPCLASS_QNAN:
          name = \"nan\";
          break;
        case _FPCLASS_NINF:
        case _FPCLASS_PINF:
          name = \"infinite\";
          break;
        case _FPCLASS_NN:
        case _FPCLASS_PN:
          name = \"normal\";
          break;
        case _FPCLASS_ND:
        case _FPCLASS_PD:
          name = \"subnormal\";
          break;
        case _FPCLASS_NZ:
        case _FPCLASS_PZ:
          name = \"zero\";
          break;
        default:
          name = \"unclassified\";
          break;
        }
        C_return( name );") )
    (else
      (foreign-lambda* symbol ((double x)) "
        char *name;
        switch (fpclassify( x )) {
        case FP_INFINITE:
          name = \"infinite\";
          break;
        case FP_NAN:
          name = \"nan\";
          break;
        case FP_NORMAL:
          name = \"normal\";
          break;
        case FP_SUBNORMAL:
          name = \"subnormal\";
          break;
        case FP_ZERO:
          name = \"zero\";
          break;
        default:
          name = \"unclassified\";
          break;
        }
        C_return( name );") ) ) )

) ;module mathh

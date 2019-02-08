;;;; float-limits.scm
;;;; Kon Lovett, Mar '09

;;; Prelude

(declare
	(usual-integrations)
  (inline)
  (local)
  (number-type generic) )

#>
#include <float.h>
#if 0
#ifndef LDBL_MAX
# define LDBL_MAX NAN
#endif
#ifndef LDBL_MIN
# define LDBL_MIN NAN
#endif
#ifndef LDBL_EPSILON
# define LDBL_EPSILON NAN
#endif
#ifndef LDBL_MANT_DIG
# define LDBL_MANT_DIG NAN
#endif
#ifndef LDBL_DIG
# define LDBL_DIG NAN
#endif
#ifndef LDBL_MAX_EXP
# define LDBL_MAX_EXP NAN
#endif
#ifndef LDBL_MIN_EXP
# define LDBL_MIN_EXP NAN
#endif
#ifndef LDBL_MAX_10_EXP
# define LDBL_MAX_10_EXP NAN
#endif
#ifndef LDBL_MIN_10_EXP
# define LDBL_MIN_10_EXP NAN
#endif
#endif
<#


;;; float-limits

(module float-limits (;export
  ;
  float-radix
  ;
  maximum-float minimum-float
  float-epsilon float-precision float-decimal-precision
  float-maximum-exponent float-minimum-exponent
  float-maximum-decimal-exponent float-minimum-decimal-exponent
  ;
  maximum-double minimum-double
  double-epsilon double-precision double-decimal-precision
  double-maximum-exponent double-minimum-exponent
  double-maximum-decimal-exponent double-minimum-decimal-exponent
  ;
  #;maximum-long-double #;minimum-long-double
  #;long-double-epsilon #;long-double-precision #;long-double-decimal-precision
  #;long-double-maximum-exponent #;long-double-minimum-exponent
  #;long-double-maximum-decimal-exponent #;long-double-minimum-decimal-exponent)

(import scheme chicken foreign)

;;

(define float-radix (foreign-value "FLT_RADIX" int))

;;

(define maximum-float (foreign-value "FLT_MAX" double))
(define minimum-float (foreign-value "FLT_MIN" double))

(define float-epsilon (foreign-value "FLT_EPSILON" double))

(define float-precision (foreign-value "FLT_MANT_DIG" int))
(define float-decimal-precision (foreign-value "FLT_DIG" int))

(define float-maximum-exponent (foreign-value "FLT_MAX_EXP" int))
(define float-minimum-exponent (foreign-value "FLT_MIN_EXP" int))
(define float-maximum-decimal-exponent (foreign-value "FLT_MAX_10_EXP" int))
(define float-minimum-decimal-exponent (foreign-value "FLT_MIN_10_EXP" int))

;;

(define maximum-double (foreign-value "DBL_MAX" double))
(define minimum-double (foreign-value "DBL_MIN" double))

(define double-epsilon (foreign-value "DBL_EPSILON" double))

(define double-precision (foreign-value "DBL_MANT_DIG" int))
(define double-decimal-precision (foreign-value "DBL_DIG" int))

(define double-maximum-exponent (foreign-value "DBL_MAX_EXP" int))
(define double-minimum-exponent (foreign-value "DBL_MIN_EXP" int))
(define double-maximum-decimal-exponent (foreign-value "DBL_MAX_10_EXP" int))
(define double-minimum-decimal-exponent (foreign-value "DBL_MIN_10_EXP" int))

;;

#|
(define maximum-long-double (foreign-value "LDBL_MAX" long-double))
(define minimum-long-double (foreign-value "LDBL_MIN" long-double))

(define long-double-epsilon (foreign-value "LDBL_EPSILON" long-double))

(define long-double-precision (foreign-value "LDBL_MANT_DIG" int))
(define long-double-decimal-precision (foreign-value "LDBL_DIG" int))

(define long-double-maximum-exponent (foreign-value "LDBL_MAX_EXP" int))
(define long-double-minimum-exponent (foreign-value "LDBL_MIN_EXP" int))
(define long-double-maximum-decimal-exponent (foreign-value "LDBL_MAX_10_EXP" int))
(define long-double-minimum-decimal-exponent (foreign-value "LDBL_MIN_10_EXP" int))
|#

) ;module float-limits

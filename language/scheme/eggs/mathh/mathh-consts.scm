;;;; mathh-consts.scm
;;;; Common flonum constants in <math.h> + more

;;; Flonum Constants

(module mathh-consts *

(import scheme chicken)

(include "mathh-constants")

;;;

(define e         E)          ; e
(define 1/e       1/E)        ; 1/e
(define e^2       E^2)        ; e^2
(define e^pi/4    E^PI/4)     ; e^(pi/4)

(define log2e     LOG2E)			; log_2(e)
(define log10e    LOG10E)			; log_10(e)

(define ln2       LN2)		    ; ln(2)
(define ln3       LN3)		    ; ln(3)
(define lnpi      LNPI)       ; ln(pi)
(define ln10      LN10)       ; ln(10)
(define 1/ln2     1/LN2)      ; 1/ln(2)
(define 1/ln10    1/LN10)     ; 1/ln(10)

(define pi        PI)         ; pi
(define 2pi       2PI)        ; pi * 2
(define pi/2      PI/2)				; pi/2
(define pi/4      PI/4)				; pi/4
(define 1/pi      1/PI)		    ; 1/pi
(define 2/pi      2/PI)				; 2/pi
(define 2/sqrtpi  2/SQRTPI)		; 2/sqrt(pi)
(define sqrtpi    SQRTPI)     ; sqrt(pi)
(define pi^2      PI^2)       ; pi^2
(define degree    DEGREE)     ; pi/180

(define gamma1/2  GAMMA1/2)   ; gamma(1/2)
(define gamma1/3  GAMMA1/3)   ; gamma(1/3)
(define gamma2/3  GAMMA2/3)   ; gamma(2/3)

(define sqrt2     SQRT2)      ; sqrt(2)
(define sqrt3     SQRT3)      ; sqrt(3)
(define sqrt5     SQRT5)      ; sqrt(5)
(define sqrt10    SQRT10)     ; sqrt(10)

(define cubert2   CUBERT2)    ; cubert(2)
(define cubert3   CUBERT3)    ; cubert(3)

(define 4thrt2    4THRT2)     ; fourthrt(2)

(define 1/sqrt2   1/SQRT2)    ; 1/sqrt(2)

(define phi       PHI)        ; phi
(define lnphi     LNPHI)  	  ; ln(phi)
(define 1/lnphi   1/LNPHI)    ; 1/ln(phi)

(define euler     EULER)  	  ; euler
(define e^euler   E^EULER)  	; e^euler


(define sin1      SIN1)  	    ; sin(1)
(define cos1      COS1)  	    ; cos(1)

(define zeta3     ZETA3)  	  ; theta(3)

) ;module mathh-consts

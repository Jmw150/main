;;;; int-limits.scm
;;;; Kon Lovett, Mar '09

;;; Prelude

(declare
	(usual-integrations)
  (inline)
  (local)
	(number-type fixnum) )

#>
#if defined(HAVE_LONG_LONG) && HAVE_LONG_LONG
# define LONG_LONG_SIZE           sizeof( long long )
# define UNSIGNED_LONG_LONG_SIZE  sizeof( unsigned long long )
#else
# define LONG_LONG_SIZE           -1
# define UNSIGNED_LONG_LONG_SIZE  -1
#endif

#define MOST_POSITIVE_INT32 ((int32_t) 0x7fffffffL)
#if 0
#define MOST_POSITIVE_INT64 ((int64_t) 0x7fffffffffffffffLL)
#endif
<#


;;; int-limits

(module int-limits (;export
  ;
  machine-word-bits machine-word-precision
  maximum-unsigned-machine-word
  most-negative-machine-word most-positive-machine-word
  ;
  unsigned-integer32-size
  maximum-unsigned-integer32
  most-negative-integer32 most-positive-integer32
  ;
  unsigned-integer64-size
  maximum-unsigned-integer64
  most-negative-integer64 most-positive-integer64
  ;
  char-size       unsigned-char-size
  short-size      unsigned-short-size
  int-size        unsigned-int-size
  long-size       unsigned-long-size
  long-long-size  unsigned-long-long-size )

(import scheme chicken foreign)

(use numbers)

;; machine-word

(define machine-word-bits (foreign-value "C_WORD_SIZE" int))
(define machine-word-precision (foreign-value "(C_WORD_SIZE - 1)" int))
(define maximum-unsigned-machine-word (foreign-value "C_UWORD_MAX" unsigned-long))
(define most-negative-machine-word (foreign-value "C_WORD_MIN" long))
(define most-positive-machine-word (foreign-value "C_WORD_MAX" long))

;; integer32

(define unsigned-integer32-size (foreign-value "sizeof( uint32_t )" int))
(define maximum-unsigned-integer32 (foreign-value "((uint32_t)(~0UL))" unsigned-integer32))
(define most-negative-integer32 (foreign-value "(-MOST_POSITIVE_INT32 - 1)" integer32))
(define most-positive-integer32 (foreign-value "MOST_POSITIVE_INT32" integer32))

;; integer64

(define unsigned-integer64-size (foreign-value "sizeof( uint64_t )" int))

;(define maximum-unsigned-integer64 (foreign-value "((uint64_t)(~0ULL))" unsigned-integer64))
;(define most-negative-integer64 (foreign-value "(-MOST_POSITIVE_INT64 - 1)" integer64))
;(define most-positive-integer64 (foreign-value "MOST_POSITIVE_INT64" integer64))

(define maximum-unsigned-integer64 (- (expt 2 64) 1))
(define most-negative-integer64 (- (expt 2 63)))
(define most-positive-integer64 (- (expt 2 63) 1))

;; char

(define unsigned-char-size (foreign-value "sizeof( unsigned char )" int))
(define char-size (foreign-value "sizeof( unsigned char )" int))

;; short

(define unsigned-short-size (foreign-value "sizeof( unsigned short )" int))
(define short-size (foreign-value "sizeof( unsigned short )" int))

;; int

(define unsigned-int-size (foreign-value "sizeof( unsigned int )" int))
(define int-size (foreign-value "sizeof( unsigned int )" int))

;; long

(define unsigned-long-size (foreign-value "sizeof( unsigned long )" int))
(define long-size (foreign-value "sizeof( unsigned long )" int))

;; long-long

(define unsigned-long-long-size (foreign-value "UNSIGNED_LONG_LONG_SIZE" int))
(define long-long-size (foreign-value "LONG_LONG_SIZE" int))

) ;module int-limits

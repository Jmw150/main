;;;; to-hex.scm  -*- Hen -*-
;;;; Kon Lovett, Sep '10
;;;; Kon Lovett, Sep '17

(module to-hex

(;export
  mem_to_hex
  s8vec_to_hex
  u8vec_to_hex
  blob_to_hex
  str_to_hex
  ;
  hex_to_str
  hex_to_blob)

(import scheme chicken foreign)

;;;

;;

#>
static void
bv_to_hex( uint8_t *out, uint8_t *in, int off, int len )
{
  static char digits[] = "0123456789abcdef";

  in += off;
  while( len-- ) {
    *out++ = digits[ *in >> 4 ];
    *out++ = digits[ *in++ & 0x0f ];
  }
}

static void
hex_to_bv( uint8_t *out, uint8_t *in, int off, int len )
{
# define hex_nibble(c)  (isdigit(c) ? ((c) - '0') : (((c) - 'a') + 10))

  in += off;
  while( 0 <= (len -= 2) ) {
    unsigned char in0 = tolower( in[0] );
    unsigned char in1 = tolower( in[1] );
    *out++ = (hex_nibble( in0 ) << 4) | hex_nibble( in1 );
    in += 2;
  }

# undef hex_nibble
}
<#

;;

(define C_str_to_hex
  (foreign-lambda void "bv_to_hex" nonnull-scheme-pointer nonnull-scheme-pointer int int))

(define C_blob_to_hex
  (foreign-lambda void "bv_to_hex" nonnull-scheme-pointer nonnull-blob int int))

(define C_u8vec_to_hex
  (foreign-lambda void "bv_to_hex" nonnull-scheme-pointer nonnull-u8vector int int))

(define C_s8vec_to_hex
  (foreign-lambda*
      void
      ((nonnull-scheme-pointer out) (nonnull-s8vector in) (int off) (int len))
    "bv_to_hex(out, (uint8_t *)in, off, len);"))

(define C_mem_to_hex
  (foreign-lambda void "bv_to_hex" nonnull-scheme-pointer nonnull-c-pointer int int))

;;

(define C_hex_to_str
  (foreign-lambda void "hex_to_bv" nonnull-scheme-pointer nonnull-scheme-pointer int int))

;;;

;;

(: str_to_hex (string string fixnum fixnum -> string))
(define (str_to_hex out in off len)
  (C_str_to_hex out in off len)
  out )

(: blob_to_hex (string blob fixnum fixnum -> string))
(define (blob_to_hex out in off len)
  (C_blob_to_hex out in off len)
  out )

(: u8vec_to_hex (string u8vector fixnum fixnum -> string))
(define (u8vec_to_hex out in off len)
  (C_u8vec_to_hex out in off len)
  out )

(: s8vec_to_hex (string s8vector fixnum fixnum -> string))
(define (s8vec_to_hex out in off len)
  (C_s8vec_to_hex out in off len)
  out )

(: mem_to_hex (string pointer fixnum fixnum -> string))
(define (mem_to_hex out in off len)
  (C_mem_to_hex out in off len)
  out )

;;

(: hex_to_str (string string fixnum fixnum -> string))
(define (hex_to_str out in off len)
  (C_hex_to_str out in off len)
  out )

(: hex_to_blob (blob string fixnum fixnum -> blob))
(define (hex_to_blob out in off len)
  (C_hex_to_str out in off len)
  out )

) ;module to-hex

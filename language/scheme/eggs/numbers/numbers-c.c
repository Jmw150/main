/* numbers-c.c
 *
 * Copyright 2010-2017 The CHICKEN Team
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *    1. Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 * 
 *    2. Redistributions in binary form must reproduce the above
 *       copyright notice, this list of conditions and the following
 *       disclaimer in the documentation and/or other materials provided
 *       with the distribution.
 * 
 *    3. The name of the author may not be used to endorse or promote
 *       products derived from this software without specific prior
 *       written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT,
 * INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#include <assert.h>
#include <errno.h>
#include <math.h> /* frexp() */

#define nmax(x, y)     ((x) > (y) ? (x) : (y)) /* From runtime.c */
#define nmin(x, y)     ((x) < (y) ? (x) : (y)) /* From runtime.c */
#define free_tmp_bignum(b)    C_free((void *)(b))

static void *tags;

#include "numbers-c.h"

/* The bignum digit representation is fullword- little endian, so on
 * LE machines the halfdigits are numbered in the same order.  On BE
 * machines, we must swap the odd and even positions.
 */
#ifdef C_BIG_ENDIAN
#define C_uhword_ref(x, p)           ((C_uhword *)(x))[(p)^1]
#else
#define C_uhword_ref(x, p)           ((C_uhword *)(x))[(p)]
#endif
#define C_uhword_set(x, p, d)        (C_uhword_ref(x,p) = (d))

static C_word init_tags(___scheme_value tagvec);
static void CONT_PROC(bignum_negate_2, c, self, new_big) C_noret;
static C_word rat_cmp(C_word x, C_word y);
static C_word basic_cmp(C_word x, C_word y, char *loc, int eqp);
static void CONT_PROC(allocate_bignum_2, c, self, bigvec) C_noret;
static C_word allocate_tmp_bignum(C_word size, C_word negp, C_word initp);
static C_uword bignum_digits_destructive_scale_up_with_carry(C_uword *start, C_uword *end, C_uword factor, C_uword carry);
static C_uword bignum_digits_destructive_scale_down(C_uword *start, C_uword *end, C_uword denominator);
static C_uword bignum_digits_destructive_shift_right(C_uword *start, C_uword *end, int shift_right, int negp);
static C_uword bignum_digits_destructive_shift_left(C_uword *start, C_uword *end, int shift_left);
static void bignum_plus_unsigned(C_word k, C_word x, C_word y, C_word negp) C_noret;
static void CONT_PROC(bignum_plus_unsigned_2, c, self, result) C_noret;
static C_word int_flo_cmp(C_word intnum, C_word flonum);
static C_word flo_int_cmp(C_word flonum, C_word intnum);
static C_word rat_flo_cmp(C_word ratnum, C_word flonum);
static C_word flo_rat_cmp(C_word flonum, C_word ratnum);
static int bignum_cmp_unsigned(C_word x, C_word y);
static void bignum_minus_unsigned(C_word k, C_word x, C_word y) C_noret;
static void CONT_PROC(bignum_minus_unsigned_2, c, self, result) C_noret;
static void CONT_PROC(integer_times_2, c, self, new_big) C_noret;
static C_regparm void bignum_digits_multiply(C_word x, C_word y, C_word result);
static void bignum_times_bignum_unsigned(C_word k, C_word x, C_word y, C_word negp) C_noret;
static void CONT_PROC(bignum_times_bignum_unsigned_2, c, self, result) C_noret;
static void CONT_PROC(digits_to_integer_2, c, self, result) C_noret;
static C_regparm C_word str_to_bignum(C_word bignum, char *str, char *str_end, int radix);
static void CONT_PROC(bignum_to_str_2, c, self, string) C_noret;
static void fabs_frexp_to_digits(C_uword exp, double sign, C_uword *start, C_uword *scan);
static C_word flo_to_tmp_bignum(C_word x);
static void CONT_PROC(flo_to_int_2, c, self, result) C_noret;
static void CONT_PROC(bignum_actual_shift, c, self, result) C_noret;
static void CONT_PROC(bignum_actual_extraction, c, self, result) C_noret;
static void CONT_PROC(bignum_random_2, c, self, result) C_noret;
static void CONT_PROC(bignum_bitwise_and_2, c, self, result) C_noret;
static void CONT_PROC(bignum_bitwise_ior_2, c, self, result) C_noret;
static void CONT_PROC(bignum_bitwise_xor_2, c, self, result) C_noret;
static void bignum_digits_destructive_negate(C_word result);
static C_regparm void basic_divrem(C_word k, C_word x, C_word y, C_word return_r, C_word return_q) C_noret;
static C_regparm void integer_divrem(C_word k, C_word x, C_word y, C_word return_q, C_word return_r) C_noret;
static C_regparm void bignum_divrem(C_word k, C_word x, C_word y, C_word return_q, C_word return_r) C_noret;
static void CONT_PROCN(divrem_intflo_2, c, self) C_noret;
static void CONT_PROC(bignum_divrem_fixnum_2, c, self, negated_big) C_noret;
static C_word bignum_remainder_unsigned_halfdigit(C_word num, C_word den);
static void CONT_PROC(bignum_destructive_divide_unsigned_small, c, self, quotient);
static void CONT_PROC(bignum_divide_2_unsigned, c, self, quotient) C_noret;
static void CONT_PROC(bignum_divide_2_unsigned_2, c, self, remainder) C_noret;
static void bignum_destructive_divide_normalized(C_word big_u, C_word big_v, C_word big_q);

static void barf(int code, char *loc, ...) C_noret;
static void try_extended_number(char *ext_proc_name, C_word c, C_word k, ...) C_noret;

/* Use high numbers for when CHICKEN 4 grows more error codes! */
#define C_BAD_ARGUMENT_TYPE_NO_REAL_ERROR                99948
#define C_BAD_ARGUMENT_TYPE_COMPLEX_NO_ORDERING_ERROR    99949

/* XXX THIS IS DUPLICATED HERE FROM runtime.c, but should be ripped out */
static void barf(int code, char *loc, ...)
{
  char *msg;
  int c, i;
  va_list v;
  /* Just take a random size that will "always" fit... */
  C_word err, ab[C_SIZEOF_STRING(64)], *a = ab;

  err = C_lookup_symbol(C_intern2(&a, C_text("numbers#@error-hook")));

  switch(code) {
  case C_BAD_ARGUMENT_COUNT_ERROR:
    msg = C_text("bad argument count");
    c = 3;
    break;

  case C_BAD_MINIMUM_ARGUMENT_COUNT_ERROR:
    msg = C_text("too few arguments");
    c = 3;
    break;
  
  case C_BAD_ARGUMENT_TYPE_ERROR:
    msg = C_text("bad argument type");
    c = 1;
    break;

  case C_DIVISION_BY_ZERO_ERROR:
    msg = C_text("division by zero");
    c = 0;
    break;

  case C_OUT_OF_RANGE_ERROR:
    msg = C_text("out of range");
    c = 2;
    break;

  case C_CANT_REPRESENT_INEXACT_ERROR:
    msg = C_text("inexact number cannot be represented as an exact number");
    c = 1;
    break;

  case C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR:
    msg = C_text("bad argument type - not a fixnum");
    c = 1;
    break;

  case C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR:
    msg = C_text("bad argument type - not a number");
    c = 1;
    break;

  case C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR:
    msg = C_text("bad argument type - not an integer");
    c = 1;
    break;

  case C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR:
    msg = C_text("bad argument type - not an unsigned integer");
    c = 1;
    break;

  case C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR:
    msg = C_text("bad argument type - not a flonum");
    c = 1;
    break;

  case C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR:
    msg = C_text("bad argument type - invalid base");
    c = 1;
    break;

  case C_BAD_ARGUMENT_TYPE_NO_REAL_ERROR:
    msg = C_text("bad argument type - not a real");
    c = 1;
    break;

  case C_BAD_ARGUMENT_TYPE_COMPLEX_NO_ORDERING_ERROR:
    msg = C_text("bad argument type - complex number has no ordering");
    c = 1;
    break;
    
  default:
    fprintf(stderr, "Unknown error");
    abort();
  }
  
  if(!C_immediatep(err)) {
#ifdef ARGVECTOR_CHICKEN
    C_word *av = C_alloc(c + 4);

    av[ 0 ] = C_block_item(err, 0);
    /* No continuation is passed: '##sys#error-hook' may not return: */
    av[ 1 ] = C_SCHEME_UNDEFINED;
    av[ 2 ] = C_fix(code);
    av[ 3 ] = C_intern2(&a, loc); /* loc is never NULL here, unlike in core */

    va_start(v, loc);
    for(i = 0; i < c; ++i)
      av[ i + 4 ] = va_arg(v, C_word);
    va_end(v);

    C_do_apply(c + 4, av);
#else
    C_save(C_fix(code));
    
    C_save(C_intern2(&a, loc)); /* loc is never NULL here, unlike in core */
    
    va_start(v, loc);
    i = c;

    while(i--)
      C_save(va_arg(v, C_word));

    va_end(v);
    /* No continuation is passed: '##sys#error-hook' may not return: */
    C_do_apply(c + 2, C_block_item(err, 0), C_SCHEME_UNDEFINED);
#endif
  } else {
    fprintf(stderr, "No error hook!");
    abort();
  }
}

void C_not_an_integer_error(char *loc, C_word x)
{
  barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, loc, x);
}

/* This exists because numbers_div_by_zero_error doesn't exist in CHICKENs < 4.9.0 */
void numbers_div_by_zero_error(char *loc)
{
  barf(C_DIVISION_BY_ZERO_ERROR, loc);
}


/* Never use extended number hook procedure names longer than this! */
/* Current longest name: numbers#@bignum-2-divrem-burnikel-ziegler */
#define MAX_EXTNUM_HOOK_NAME 64

/* This exists so that we don't have to create any extra closures */
static void try_extended_number(char *ext_proc_name, C_word c, C_word k, ...)
{
  static C_word ab[C_SIZEOF_STRING(MAX_EXTNUM_HOOK_NAME)];
  int i;
  va_list v;
  C_word ext_proc_sym, ext_proc = C_SCHEME_FALSE, *a = ab;

  ext_proc_sym = C_lookup_symbol(C_intern2(&a, ext_proc_name));

  if(!C_immediatep(ext_proc_sym))
    ext_proc = C_block_item(ext_proc_sym, 0);

  if (!C_immediatep(ext_proc) && C_closurep(ext_proc)) {
#ifdef ARGVECTOR_CHICKEN
    C_word *av = C_alloc(c + 1);
    av[ 0 ] = ext_proc;
    av[ 1 ] = k;
    va_start(v, k);

    for(i = 0; i < c - 1; ++i)
      av[ i + 2 ] = va_arg(v, C_word);

    va_end(v);
    C_do_apply(c + 1, av);
#else
    va_start(v, k);
    i = c - 1;

    while(i--)
      C_save(va_arg(v, C_word));

    va_end(v);
    C_do_apply(c - 1, ext_proc, k);
#endif
  } else {
    /* TODO: Convert to barf(), add new error code */
    fprintf(stderr, "No extended number hook for %s!\n", ext_proc_name);
    abort();
  }
}

static C_word
init_tags(___scheme_value tagvec)
{
  tags = CHICKEN_new_gc_root();
  CHICKEN_gc_root_set(tags, tagvec);
  return C_SCHEME_UNDEFINED;
}

#define ratnum_type_tag C_block_item(CHICKEN_gc_root_ref(tags), RAT_TAG)
#define compnum_type_tag C_block_item(CHICKEN_gc_root_ref(tags), COMP_TAG)

C_regparm C_word C_fcall C_i_numbers_numberp(C_word x)
{
  return C_mk_bool((x & C_FIXNUM_BIT) ||
                   (!C_immediatep(x) && 
                    (C_block_header(x) == C_FLONUM_TAG ||
                     C_IS_BIGNUM_TYPE(x) ||
                     (C_header_bits(x) == C_STRUCTURE_TYPE &&
                      (C_block_item(x, 0) == ratnum_type_tag ||
                       C_block_item(x, 0) == compnum_type_tag)))));
}

/* TODO: Rename to  C_i_integerp */
C_regparm C_word C_fcall C_i_numbers_integerp(C_word x)
{
  return C_mk_bool((x & C_FIXNUM_BIT) ||
                   (!C_immediatep(x) && 
                    ((C_block_header(x) == C_FLONUM_TAG &&
                      C_truep(C_u_i_fpintegerp_fixed(x))) ||
                     C_IS_BIGNUM_TYPE(x))));
}

C_inline C_word basic_eqvp(C_word x, C_word y)
{
  return (x == y ||

	  (!C_immediatep(x) && !C_immediatep(y) &&
	   C_block_header(x) == C_block_header(y) &&
	   
	   ((C_block_header(x) == C_FLONUM_TAG &&
	     C_flonum_magnitude(x) == C_flonum_magnitude(y)) ||
	    
	    (C_IS_BIGNUM_TYPE(x) && C_u_i_bignum_cmp(x, y) == C_fix(0)))));
}

C_regparm C_word C_fcall C_i_basic_positivep(C_word x)
{
  if (x & C_FIXNUM_BIT)
    return C_u_i_fixnum_positivep(x);
  else if (C_immediatep(x))
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "positive?", x);
  else if (C_block_header(x) == C_FLONUM_TAG)
    return C_mk_bool(C_flonum_magnitude(x) > 0.0);
  else if (C_IS_BIGNUM_TYPE(x))
    return C_mk_nbool(C_bignum_negativep(x));
  else if (C_header_bits(x) == C_STRUCTURE_TYPE &&
           (C_block_item(x, 0) == ratnum_type_tag))
    return C_u_i_integer_positivep(C_block_item(x, 1));
  else if (C_header_bits(x) == C_STRUCTURE_TYPE &&
           (C_block_item(x, 0) == compnum_type_tag))
    barf(C_BAD_ARGUMENT_TYPE_NO_REAL_ERROR, "positive?", x);
  else
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "positive?", x);
}

C_regparm C_word C_fcall C_u_i_integer_positivep(C_word x)
{
  if (x & C_FIXNUM_BIT) return C_u_i_fixnum_positivep(x);
  else return C_mk_nbool(C_bignum_negativep(x));
}

C_regparm C_word C_fcall C_i_basic_negativep(C_word x)
{
  if (x & C_FIXNUM_BIT)
    return C_u_i_fixnum_negativep(x);
  else if (C_immediatep(x))
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "negative?", x);
  else if (C_block_header(x) == C_FLONUM_TAG)
    return C_mk_bool(C_flonum_magnitude(x) < 0.0);
  else if (C_IS_BIGNUM_TYPE(x))
    return C_mk_bool(C_bignum_negativep(x));
  else if (C_header_bits(x) == C_STRUCTURE_TYPE &&
           (C_block_item(x, 0) == ratnum_type_tag))
    return C_u_i_integer_negativep(C_block_item(x, 1));
  else if (C_header_bits(x) == C_STRUCTURE_TYPE &&
           (C_block_item(x, 0) == compnum_type_tag))
    barf(C_BAD_ARGUMENT_TYPE_NO_REAL_ERROR, "negative?", x);
  else
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "negative?", x);
}

C_regparm C_word C_fcall C_u_i_integer_negativep(C_word x)
{
  if (x & C_FIXNUM_BIT) return C_u_i_fixnum_negativep(x);
  else return C_mk_bool(C_bignum_negativep(x));
}

/* TODO: Rename to C_i_eqvp */
C_regparm C_word C_fcall
C_i_numbers_eqvp(C_word x, C_word y)
{
  return
    C_mk_bool(basic_eqvp(x, y) ||
              (!C_immediatep(x) && !C_immediatep(y) &&
	       (C_block_header(x) == C_block_header(y) &&
	        C_header_bits(x) == C_STRUCTURE_TYPE &&
                C_block_item(x, 0) == C_block_item(y, 0) &&
                (C_block_item(x, 0) == ratnum_type_tag ||
                 C_block_item(x, 0) == compnum_type_tag) &&
                basic_eqvp(C_block_item(x, 1), C_block_item(y, 1)) &&
                basic_eqvp(C_block_item(x, 2), C_block_item(y, 2)))));
}

C_regparm C_word C_fcall C_i_nanp(C_word x)
{
  if (x & C_FIXNUM_BIT) {
    return C_SCHEME_FALSE;
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "nan?", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    return C_u_i_flonum_nanp(x);
  } else if (C_IS_BIGNUM_TYPE(x)) {
    return C_SCHEME_FALSE;
  } else if (C_header_bits(x) == C_STRUCTURE_TYPE) {
    /* To make this inlineable we don't call try_extended_number */
    if (C_block_item(x, 0) == ratnum_type_tag)
      return C_SCHEME_FALSE;
    else if (C_block_item(x, 0) == compnum_type_tag)
      return C_mk_bool(C_truep(C_i_nanp(C_block_item(x, 1))) ||
		       C_truep(C_i_nanp(C_block_item(x, 2))));
    else
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "nan?", x);
  } else {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "nan?", x);
  }
}

/* TODO: Rename to C_i_finitep */
C_regparm C_word C_fcall C_i_numbers_finitep(C_word x)
{
  if (x & C_FIXNUM_BIT) {
    return C_SCHEME_TRUE;
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "finite?", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    return C_u_i_flonum_finitep(x);
  } else if (C_IS_BIGNUM_TYPE(x)) {
    return C_SCHEME_TRUE;
  } else if (C_header_bits(x) == C_STRUCTURE_TYPE) {
    /* To make this inlineable we don't use try_extended_number */
    if (C_block_item(x, 0) == ratnum_type_tag)
      return C_SCHEME_TRUE;
    else if (C_block_item(x, 0) == compnum_type_tag)
      return C_and(C_i_numbers_finitep(C_block_item(x, 1)),
		   C_i_numbers_finitep(C_block_item(x, 2)));
    else
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "finite?", x);
  } else {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "finite?", x);
  }
}

/* TODO: Rename to C_i_infinitep */
C_regparm C_word C_fcall C_i_numbers_infinitep(C_word x)
{
  if (x & C_FIXNUM_BIT) {
    return C_SCHEME_FALSE;
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "infinite?", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    return C_u_i_flonum_infinitep(x);
  } else if (C_IS_BIGNUM_TYPE(x)) {
    return C_SCHEME_FALSE;
  } else if (C_header_bits(x) == C_STRUCTURE_TYPE) {
    /* To make this inlineable we don't use try_extended_number */
    if (C_block_item(x, 0) == ratnum_type_tag)
      return C_SCHEME_FALSE;
    else if (C_block_item(x, 0) == compnum_type_tag)
      return C_mk_bool(C_truep(C_i_numbers_infinitep(C_block_item(x, 1))) ||
                       C_truep(C_i_numbers_infinitep(C_block_item(x, 2))));
    else
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "infinite?", x);
  } else {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "infinite?", x);
  }
}

/* TODO: Rename to C_i_zerop */
C_regparm C_word C_fcall C_i_numbers_zerop(C_word x)
{
  if (x & C_FIXNUM_BIT) {
    return C_mk_bool(x == C_fix(0));
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "zero?", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    return C_mk_bool(C_flonum_magnitude(x) == 0.0);
  } else if (C_IS_BIGNUM_TYPE(x) ||
	     (C_header_bits(x) == C_STRUCTURE_TYPE &&
	      (C_block_item(x, 0) == ratnum_type_tag ||
	       C_block_item(x, 0) == compnum_type_tag))) {
    return C_SCHEME_FALSE;
  } else {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "zero?", x);
  }
}

/* Copy all the digits from source to target, obliterating what was
 * there.  If target is larger than source, the most significant
 * digits will remain untouched.
 */
C_inline void bignum_digits_destructive_copy(C_word target, C_word source)
{
  C_memcpy(C_bignum_digits(target), C_bignum_digits(source),
           C_wordstobytes(C_bignum_size(source)));
}

void C_ccall CPS_PROC2(C_2_basic_plus, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      C_word *a = C_alloc(C_SIZEOF_FIX_BIGNUM);
      C_kontinue(k, C_a_u_i_2_fixnum_plus(&a, 2, x, y));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "+", y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_word *a = C_alloc(C_SIZEOF_FLONUM);
      C_kontinue(k, C_flonum(&a, (double)C_unfix(x) + C_flonum_magnitude(y)));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      CPS_CALL(C_u_2_integer_plus, 4, (C_word)NULL, k, x, y);
    } else {
      try_extended_number("numbers#@extended-2-plus", 3, k, x, y);
    }
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "+", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    C_word *a = C_alloc(C_SIZEOF_FLONUM);
    if (y & C_FIXNUM_BIT) {
      C_kontinue(k, C_flonum(&a, C_flonum_magnitude(x) + (double)C_unfix(y)));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "+", y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_kontinue(k, C_a_i_flonum_plus(&a, 2, x, y));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      C_kontinue(k, C_flonum(&a, C_flonum_magnitude(x)+C_bignum_to_double(y)));
    } else {
      try_extended_number("numbers#@extended-2-plus", 3, k, x, y);
    }
  } else if (C_IS_BIGNUM_TYPE(x)) {
    if (y & C_FIXNUM_BIT) {
      CPS_CALL(C_u_2_integer_plus, 4, (C_word)NULL, k, x, y);
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "+", y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_word *a = C_alloc(C_SIZEOF_FLONUM);
      C_kontinue(k, C_flonum(&a, C_bignum_to_double(x)+C_flonum_magnitude(y)));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      CPS_CALL(C_u_2_integer_plus, 4, (C_word)NULL, k, x, y);
    } else {
      try_extended_number("numbers#@extended-2-plus", 3, k, x, y);
    }
  } else {
    try_extended_number("numbers#@extended-2-plus", 3, k, x, y);
  }
}

void C_ccall CPS_PROC2(C_u_2_integer_plus, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if ((x & y) & C_FIXNUM_BIT) {
    C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab;
    C_kontinue(k, C_a_u_i_2_fixnum_plus(&a, 2, x, y));
  } else {
    C_word ab[C_SIZEOF_FIX_BIGNUM * 2], *a = ab;
    if (x & C_FIXNUM_BIT) x = C_a_u_i_fix_to_big(&a, x);
    if (y & C_FIXNUM_BIT) y = C_a_u_i_fix_to_big(&a, y);

    if (C_bignum_negativep(x)) {
      if (C_bignum_negativep(y)) bignum_plus_unsigned(k, x, y, C_SCHEME_TRUE);
      else bignum_minus_unsigned(k, y, x);
    } else {
      if (C_bignum_negativep(y)) bignum_minus_unsigned(k, x, y);
      else bignum_plus_unsigned(k, x, y, C_SCHEME_FALSE);
    }
  }
}

/* Needs C_SIZEOF_FIX_BIGNUM */
C_regparm C_word C_fcall
C_a_u_i_2_fixnum_plus(C_word **ptr, C_word n, C_word x, C_word y)
{
  /* Exceptional situation: this will cause a real underflow */
  if (x == C_fix(C_MOST_NEGATIVE_FIXNUM) && y == C_fix(C_MOST_NEGATIVE_FIXNUM)) {
    return C_bignum1(ptr, 1, ((C_uword)-C_MOST_NEGATIVE_FIXNUM) << 1);
  } else {
    C_word z = C_unfix(x) + C_unfix(y);

    if(!C_fitsinfixnump(z)) {
      /* TODO: function/macro returning either fixnum or bignum from a C int */
      /* This should help with the C API/FFI too. */
      return C_bignum1(ptr, z < 0, labs(z));
    } else {
      return C_fix(z);
    }
  }
}

void C_ccall CPS_PROC2(C_2_basic_minus, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      C_word *a = C_alloc(C_SIZEOF_FIX_BIGNUM);
      C_kontinue(k, C_a_u_i_2_fixnum_minus(&a, 2, x, y));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "-", y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_word *a = C_alloc(C_SIZEOF_FLONUM);
      C_kontinue(k, C_flonum(&a, (double)C_unfix(x) - C_flonum_magnitude(y)));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      CPS_CALL(C_u_2_integer_minus, 4, (C_word)NULL, k, x, y);
    } else {
      try_extended_number("numbers#@extended-2-minus", 3, k, x, y);
    }
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "-", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    C_word *a = C_alloc(C_SIZEOF_FLONUM);
    if (y & C_FIXNUM_BIT) {
      C_kontinue(k, C_flonum(&a, C_flonum_magnitude(x) - (double)C_unfix(y)));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "-", y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_kontinue(k, C_a_i_flonum_difference(&a, 2, x, y)); /* XXX NAMING! */
    } else if (C_IS_BIGNUM_TYPE(y)) {
      C_kontinue(k, C_flonum(&a, C_flonum_magnitude(x)-C_bignum_to_double(y)));
    } else {
      try_extended_number("numbers#@extended-2-minus", 3, k, x, y);
    }
  } else if (C_IS_BIGNUM_TYPE(x)) {
    if (y & C_FIXNUM_BIT) {
      CPS_CALL(C_u_2_integer_minus, 4, (C_word)NULL, k, x, y);
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "-", y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_word *a = C_alloc(C_SIZEOF_FLONUM);
      C_kontinue(k, C_flonum(&a, C_bignum_to_double(x)-C_flonum_magnitude(y)));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      CPS_CALL(C_u_2_integer_minus, 4, (C_word)NULL, k, x, y);
    } else {
      try_extended_number("numbers#@extended-2-minus", 3, k, x, y);
    }
  } else {
    try_extended_number("numbers#@extended-2-minus", 3, k, x, y);
  }
}

void C_ccall CPS_PROC2(C_u_2_integer_minus, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if ((x & y) & C_FIXNUM_BIT) {
    C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab;
    C_kontinue(k, C_a_u_i_2_fixnum_minus(&a, 2, x, y));
  } else {
    C_word ab[C_SIZEOF_FIX_BIGNUM * 2], *a = ab;
    if (x & C_FIXNUM_BIT) x = C_a_u_i_fix_to_big(&a, x);
    if (y & C_FIXNUM_BIT) y = C_a_u_i_fix_to_big(&a, y);

    if (C_bignum_negativep(x)) {
      if (C_bignum_negativep(y)) bignum_minus_unsigned(k, y, x);
      else bignum_plus_unsigned(k, x, y, C_SCHEME_TRUE);
    } else {
      if (C_bignum_negativep(y)) bignum_plus_unsigned(k, x, y, C_SCHEME_FALSE);
      else bignum_minus_unsigned(k, x, y);
    }
  }
}

/* Needs C_SIZEOF_FIX_BIGNUM */
C_regparm C_word C_fcall
C_a_u_i_2_fixnum_minus(C_word **ptr, C_word n, C_word x, C_word y)
{
  C_word z = C_unfix(x) - C_unfix(y);

  if(!C_fitsinfixnump(z)) {
    /* TODO: function/macro returning either fixnum or bignum from a C int */
    /* This should help with the C API/FFI too. */
    return C_bignum1(ptr, z < 0, labs(z));
  } else {
    return C_fix(z);
  }
}

static void
bignum_plus_unsigned(C_word k, C_word x, C_word y, C_word negp)
{
  C_word kab[C_SIZEOF_CLOSURE(4)], *ka = kab, k2, size;

  if (C_bignum_size(y) > C_bignum_size(x)) {  /* Ensure size(y) <= size(x) */
    C_word z = x;
    x = y;
    y = z;
  }

  k2 = C_closure(&ka, 4, (C_word)bignum_plus_unsigned_2, k, x, y);
  
  size = C_fix(C_bignum_size(x) + 1); /* One more digit, for possible carry. */
  C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
}

static void CONT_PROC(bignum_plus_unsigned_2, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
         x = C_block_item(self, 2),
         y = C_block_item(self, 3);
  C_uword *scan_y = C_bignum_digits(y),
          *end_y = scan_y + C_bignum_size(y),
          *scan_r = C_bignum_digits(result),
          *end_r = scan_r + C_bignum_size(result),
          sum, digit;
  int carry = 0;

  /* Copy x into r so we can operate on two pointers, which is faster
   * than three, and we can stop earlier after adding y.  It's slower
   * if x and y have equal length.  On average it's slightly faster.
   */
  bignum_digits_destructive_copy(result, x);
  *(end_r-1) = 0; /* Ensure most significant digit is initialised */

  /* Move over x and y simultaneously, destructively adding digits w/ carry. */
  while (scan_y < end_y) {
    digit = *scan_r;
    if (carry) {
      sum = digit + *scan_y++ + 1;
      carry = sum <= digit;
    } else {
      sum = digit + *scan_y++;
      carry = sum < digit;
    }
    (*scan_r++) = sum;
  }
  
  /* The end of y, the smaller number.  Propagate carry into the rest of x. */
  while (carry) {
    sum = (*scan_r) + 1;
    carry = (sum == 0);
    (*scan_r++) = sum;
  }
  assert(scan_r <= end_r);

  C_kontinue(k, C_bignum_simplify(result));
}

static int
bignum_cmp_unsigned(C_word x, C_word y)
{
  C_word xlen = C_bignum_size(x), ylen = C_bignum_size(y);

  if (xlen < ylen) {
    return -1;
  } else if (xlen > ylen) {
    return 1;
  } else if (x == y) {
    return 0;
  } else {
    C_uword *startx = C_bignum_digits(x),
            *scanx = startx + xlen,
            *scany = C_bignum_digits(y) + ylen;

    while (startx < scanx) {
      C_uword xdigit = (*--scanx), ydigit = (*--scany);
      if (xdigit < ydigit)
        return -1;
      if (xdigit > ydigit)
        return 1;
    }
    return 0;
  }
}

static void
bignum_minus_unsigned(C_word k, C_word x, C_word y)
{
  C_word kab[C_SIZEOF_CLOSURE(4)], *ka = kab, k2, size;

  switch(bignum_cmp_unsigned(x, y)) {
  case 0:	      /* x = y, return 0 */
    C_kontinue(k, C_fix(0));
  case -1:	      /* abs(x) < abs(y), return -(abs(y) - abs(x)) */
    k2 = C_closure(&ka, 4, (C_word)bignum_minus_unsigned_2, k, y, x);
    
    size = C_fix(C_bignum_size(y)); /* Maximum size of result is length of y. */
    C_allocate_bignum(5, (C_word)NULL, k2, size, C_SCHEME_TRUE, C_SCHEME_FALSE);
  case 1:	      /* abs(x) > abs(y), return abs(x) - abs(y) */
  default:
    k2 = C_closure(&ka, 4, (C_word)bignum_minus_unsigned_2, k, x, y);
    
    size = C_fix(C_bignum_size(x)); /* Maximum size of result is length of x. */
    C_allocate_bignum(5, (C_word)NULL, k2, size, C_SCHEME_FALSE, C_SCHEME_FALSE);
    break;
  }
}

static void CONT_PROC(bignum_minus_unsigned_2, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
         x = C_block_item(self, 2),
         y = C_block_item(self, 3);
  C_uword *scan_r = C_bignum_digits(result),
          *end_r = scan_r + C_bignum_size(result),
          *scan_y = C_bignum_digits(y),
          *end_y = scan_y + C_bignum_size(y),
          difference, digit;
  int borrow = 0;

  bignum_digits_destructive_copy(result, x); /* See bignum_plus_unsigned_2 */

  /* Destructively subtract y's digits w/ borrow from and back into r. */
  while (scan_y < end_y) {
    digit = *scan_r;
    if (borrow) {
      difference = digit - *scan_y++ - 1;
      borrow = difference >= digit;
    } else {
      difference = digit - *scan_y++;
      borrow = difference > digit;
    }
    (*scan_r++) = difference;
  }

  /* The end of y, the smaller number.  Propagate borrow into the rest of x. */
  while (borrow) {
    digit = *scan_r;
    difference = digit - borrow;
    borrow = difference >= digit;
    (*scan_r++) = difference;
  }

  assert(scan_r <= end_r);

  C_kontinue(k, C_bignum_simplify(result));
}

C_word C_ccall
C_u_i_2_fixnum_gcd(C_word x, C_word y)
{
   x = (x & C_INT_SIGN_BIT) ? -C_unfix(x) : C_unfix(x);
   y = (y & C_INT_SIGN_BIT) ? -C_unfix(y) : C_unfix(y);
   
   while(y != 0) {
     C_word r = x % y;
     x = y;
     y = r;
   }
   return C_fix(x);
}

C_word C_ccall
C_a_u_i_2_flonum_gcd(C_word **p, C_word n, C_word x, C_word y)
{
   double xub, yub, r;

   if (!C_truep(C_u_i_fpintegerp_fixed(x)))
     barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "gcd", x);
   if (!C_truep(C_u_i_fpintegerp_fixed(y)))
     barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "gcd", y);

   xub = C_flonum_magnitude(x);
   yub = C_flonum_magnitude(y);

   if (xub < 0.0) xub = -xub;
   if (yub < 0.0) yub = -yub;
   
   while(yub != 0.0) {
     r = fmod(xub, yub);
     xub = yub;
     yub = r;
   }
   return C_flonum(p, xub);
}

void C_ccall CPS_PROC1(C_basic_abs, c, self, k, x)
{
  CPS_BODY1(c, self, k, x);
  if (c != 3) {
    C_bad_argc_2(c, 3, self);
  } else if (x & C_FIXNUM_BIT) {
    C_word *a = C_alloc(C_SIZEOF_FIX_BIGNUM);
    C_kontinue(k, C_a_u_i_fixnum_abs(&a, 1, x));
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "abs", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    C_word *a = C_alloc(C_SIZEOF_FLONUM);
    C_kontinue(k, C_a_i_flonum_abs(&a, 1, x));
  } else if (C_IS_BIGNUM_TYPE(x)) {
    CPS_CALL(C_u_integer_abs, 3, (C_word)NULL, k, x);
  } else {
    try_extended_number("numbers#@extended-abs", 2, k, x);
  }
}

void C_ccall CPS_PROC1(C_u_integer_abs, c, self, k, x)
{
  CPS_BODY1(c, self, k, x);
  if (x & C_FIXNUM_BIT) {
    C_word *a = C_alloc(C_SIZEOF_FIX_BIGNUM);
    C_kontinue(k, C_a_u_i_fixnum_abs(&a, 1, x));
  } else if (C_bignum_negativep(x)) {
    CPS_CALL(C_u_integer_negate, 3, (C_word)NULL, k, x);
  } else {
    C_kontinue(k, x);
  }
}

void C_ccall CPS_PROC1(C_basic_signum, c, self, k, x)
{
  CPS_BODY1(c, self, k, x);
  if (c != 3) {
    C_bad_argc_2(c, 3, self);
  } else if (x & C_FIXNUM_BIT) {
    C_kontinue(k, C_u_i_fixnum_signum(x));
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "signum", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    C_word *a = C_alloc(C_SIZEOF_FLONUM);
    C_kontinue(k, C_a_u_i_flonum_signum(&a, 1, x));
  } else if (C_IS_BIGNUM_TYPE(x)) {
    C_kontinue(k, C_bignum_negativep(x) ? C_fix(-1) : C_fix(1));
  } else {
    try_extended_number("numbers#@extended-signum", 2, k, x);
  }
}

C_regparm C_word C_fcall C_u_i_integer_signum(C_word x)
{
  if (x & C_FIXNUM_BIT) return C_u_i_fixnum_signum(x);
  else return (C_bignum_negativep(x) ? C_fix(-1) : C_fix(1));
}

C_regparm C_word C_fcall C_i_basic_evenp(C_word x)
{
  if(x & C_FIXNUM_BIT) {
    return C_i_fixnumevenp(x);
  } else if(C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "even?", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    double val, dummy;
    val = C_flonum_magnitude(x);
    if(C_isnan(val) || C_isinf(val) || C_modf(val, &dummy) != 0.0)
      barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "even?", x);
    else
      return C_mk_bool(fmod(val, 2.0) == 0.0);
  } else if (C_IS_BIGNUM_TYPE(x)) {
    return C_mk_nbool(C_bignum_digits(x)[0] & 1);
  } else { /* No need to try extended number */
    barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "even?", x);
  }
}

C_regparm C_word C_fcall C_u_i_integer_evenp(C_word x)
{
  if (x & C_FIXNUM_BIT) return C_i_fixnumevenp(x);
  return C_mk_nbool(C_bignum_digits(x)[0] & 1);
}

C_regparm C_word C_fcall C_i_basic_oddp(C_word x)
{
  if(x & C_FIXNUM_BIT) {
    return C_i_fixnumoddp(x);
  } else if(C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "odd?", x);
  } else if(C_block_header(x) == C_FLONUM_TAG) {
    double val, dummy;
    val = C_flonum_magnitude(x);
    if(C_isnan(val) || C_isinf(val) || C_modf(val, &dummy) != 0.0)
      barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "odd?", x);
    else
      return C_mk_bool(fmod(val, 2.0) != 0.0);
  } else if (C_IS_BIGNUM_TYPE(x)) {
    return C_mk_bool(C_bignum_digits(x)[0] & 1);
  } else {
    barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "odd?", x);
  }
}

C_regparm C_word C_fcall C_u_i_integer_oddp(C_word x)
{
  if (x & C_FIXNUM_BIT) return C_i_fixnumoddp(x);
  return C_mk_bool(C_bignum_digits(x)[0] & 1);
}

void C_ccall CPS_PROC1(C_basic_negate, c, self, k, x)
{
  CPS_BODY1(c, self, k, x);
  if (x & C_FIXNUM_BIT) {
    C_word *a = C_alloc(C_SIZEOF_FIX_BIGNUM);
    C_kontinue(k, C_a_u_i_fixnum_negate(&a, 1, x));
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "-", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    C_word *a = C_alloc(C_SIZEOF_FLONUM);
    C_kontinue(k, C_a_i_flonum_negate(&a, 1, x));
  } else if (C_IS_BIGNUM_TYPE(x)) {
    CPS_CALL(C_u_integer_negate, 3, (C_word)NULL, k, x);
  } else {
    try_extended_number("numbers#@extended-negate", 2, k, x);
  }
}

void C_ccall CPS_PROC1(C_u_integer_negate, c, self, k, x)
{
  CPS_BODY1(c, self, k, x);
  if (x & C_FIXNUM_BIT) {
    C_word *a = C_alloc(C_SIZEOF_FIX_BIGNUM);
    C_kontinue(k, C_a_u_i_fixnum_negate(&a, 1, x));
  } else {
    if (C_bignum_negated_fitsinfixnump(x)) {
      C_kontinue(k, C_fix(C_MOST_NEGATIVE_FIXNUM));
    } else {
      C_word *ka, k2, negp = C_mk_nbool(C_bignum_negativep(x)),
             size = C_fix(C_bignum_size(x));
      ka = C_alloc(C_SIZEOF_CLOSURE(3));
      k2 = C_closure(&ka, 3, (C_word)bignum_negate_2, k, x);
      C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
    }
  }
}

static void CONT_PROC(bignum_negate_2, c, self, new_big)
{
  CONT_BODY(self, new_big);
  C_word k = C_block_item(self, 1),
	 old_big = C_block_item(self, 2);
  bignum_digits_destructive_copy(new_big, old_big);
  C_kontinue(k, C_bignum_simplify(new_big));
}

C_regparm C_word C_fcall
C_a_u_i_fixnum_negate(C_word **ptr, C_word n, C_word x)
{
  /* Exceptional situation: this will cause an overflow to itself */
  if (x == C_fix(C_MOST_NEGATIVE_FIXNUM)) /* C_fitsinfixnump(x) */
    return C_bignum1(ptr, 0, -C_MOST_NEGATIVE_FIXNUM);
  else
    return C_fix(-C_unfix(x));
}

/* TODO: Rename to C_nequalp */
void C_ccall CPS_PROCN(C_numbers_nequalp, c, self, k)
{
  CPS_BODYN(c, self, k);
  C_word x, y, result;
#ifdef ARGVECTOR_CHICKEN
  int i = 2;
#else
  va_list v;
#endif

  if (c < 4) C_bad_argc_2(c, 4, self);

  c -= 2; 
#ifdef ARGVECTOR_CHICKEN
  x = __av[i++];
#else
  va_start(v, k);
  x = va_arg(v, C_word);
#endif

  while(--c) {
#ifdef ARGVECTOR_CHICKEN
    y = __av[i++];
#else
    y = va_arg(v, C_word);
#endif
    result = C_i_2_basic_equalp(x, y);
    if (result == C_SCHEME_FALSE) break;
  }

#ifndef ARGVECTOR_CHICKEN
  va_end(v);
#endif
  C_kontinue(k, result);
}

/* Compare two numbers as ratnums.  Either may be rat-, fix- or bignums */
static C_word rat_cmp(C_word x, C_word y)
{
  C_word ab[C_SIZEOF_FIX_BIGNUM*4], *a = ab, x1, x2, y1, y2,
         s, t, ssize, tsize, result, negp;
  C_uword *scan;

  /* Check for 1 or 0; if x or y is this, the other must be the ratnum */
  if (x == C_fix(0)) {	      /* Only the sign of y1 matters */
    return basic_cmp(x, C_block_item(y, 1), "ratcmp", 0);
  } else if (x == C_fix(1)) { /* x1*y1 <> x2*y2 --> y2 <> y1 | x1/x2 = 1/1 */
    return basic_cmp(C_block_item(y, 2), C_block_item(y, 1), "ratcmp", 0);
  } else if (y == C_fix(0)) { /* Only the sign of x1 matters */
    return basic_cmp(C_block_item(x, 1), y, "ratcmp", 0);
  } else if (y == C_fix(1)) { /* x1*y1 <> x2*y2 --> x1 <> x2 | y1/y2 = 1/1 */
    return basic_cmp(C_block_item(x, 1), C_block_item(x, 2), "ratcmp", 0);
  }

  /* Extract components x=x1/x2 and y=y1/y2 */
  if (x & C_FIXNUM_BIT || C_IS_BIGNUM_TYPE(x)) x1 = x, x2 = C_fix(1);
  else x1 = C_block_item(x, 1), x2 = C_block_item(x, 2);

  if (y & C_FIXNUM_BIT || C_IS_BIGNUM_TYPE(y)) y1 = y, y2 = C_fix(1);
  else y1 = C_block_item(y, 1), y2 = C_block_item(y, 2);

  /* We only want to deal with bignums (this is tricky enough) */
  if (x1 & C_FIXNUM_BIT) x1 = C_a_u_i_fix_to_big(&a, x1);
  if (x2 & C_FIXNUM_BIT) x2 = C_a_u_i_fix_to_big(&a, x2);
  if (y1 & C_FIXNUM_BIT) y1 = C_a_u_i_fix_to_big(&a, y1);
  if (y2 & C_FIXNUM_BIT) y2 = C_a_u_i_fix_to_big(&a, y2);

  /* We multiply using schoolbook method, so this will be very slow in
   * extreme cases.  This is a tradeoff we make so that comparisons
   * are inlineable, which makes a big difference for the common case.
   */
  ssize = C_bignum_size(x1) + C_bignum_size(y2);
  negp = C_mk_bool(C_bignum_negativep(x1));
  s = allocate_tmp_bignum(C_fix(ssize), negp, C_SCHEME_TRUE);
  bignum_digits_multiply(x1, y2, s); /* Swap args if x1 < y2? */

  tsize = C_bignum_size(y1) + C_bignum_size(x2);
  negp = C_mk_bool(C_bignum_negativep(y1));
  t = allocate_tmp_bignum(C_fix(tsize), negp, C_SCHEME_TRUE);
  bignum_digits_multiply(y1, x2, t); /* Swap args if y1 < x2? */

  /* Shorten the numbers if needed */
  for (scan = C_bignum_digits(s)+ssize-1; *scan == 0; scan--) ssize--;
  C_bignum_mutate_size(s, ssize);
  for (scan = C_bignum_digits(t)+tsize-1; *scan == 0; scan--) tsize--;
  C_bignum_mutate_size(t, tsize);

  result = C_u_i_bignum_cmp(s, t);

  free_tmp_bignum(t);
  free_tmp_bignum(s);
  return result;
}

/* The primitive comparison operator.  eqp should be 1 if we're only
 * interested in equality testing (can speed things up and in case of
 * compnums, equality checking is the only available operation).  This
 * may return #f, in case there is no answer (for NaNs) or as a quick
 * and dirty non-zero answer when eqp is true.  Ugly but effective :)
 */
static C_word basic_cmp(C_word x, C_word y, char *loc, int eqp)
{
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      return C_fix((x < y) ? -1 : ((x > y) ? 1 : 0));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      return int_flo_cmp(x, y);
    } else if (C_IS_BIGNUM_TYPE(y)) {
      C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab;
      return C_u_i_bignum_cmp(C_a_u_i_fix_to_big(&a, x), y);
    } else if (C_header_bits(y) == C_STRUCTURE_TYPE &&
	       C_block_item(y, 0) == ratnum_type_tag) {
      if (eqp) return C_SCHEME_FALSE;
      else return rat_cmp(x, y);
    } else if (C_block_item(y, 0) == compnum_type_tag) {
      if (eqp) return C_SCHEME_FALSE;
      else barf(C_BAD_ARGUMENT_TYPE_COMPLEX_NO_ORDERING_ERROR, loc, y);
    } else {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    }
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    if (y & C_FIXNUM_BIT) {
      return flo_int_cmp(x, y);
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      double a = C_flonum_magnitude(x), b = C_flonum_magnitude(y);
      if (C_isnan(a) || C_isnan(b)) return C_SCHEME_FALSE; /* "mu" */
      else return C_fix((a < b) ? -1 : ((a > b) ? 1 : 0));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      return flo_int_cmp(x, y);
    } else if (C_header_bits(y) == C_STRUCTURE_TYPE) {
      if (C_block_item(y, 0) == ratnum_type_tag) {
        return flo_rat_cmp(x, y);
      } else if (C_block_item(y, 0) == compnum_type_tag) {
	if (eqp) return C_SCHEME_FALSE;
        else barf(C_BAD_ARGUMENT_TYPE_COMPLEX_NO_ORDERING_ERROR, loc, y);
      } else {
        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
      }
    } else {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    }
  } else if (C_IS_BIGNUM_TYPE(x)) {
    if (y & C_FIXNUM_BIT) {
      C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab;
      return C_u_i_bignum_cmp(x, C_a_u_i_fix_to_big(&a, y));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      return int_flo_cmp(x, y);
    } else if (C_IS_BIGNUM_TYPE(y)) {
      return C_u_i_bignum_cmp(x, y);
    } else if (C_header_bits(y) == C_STRUCTURE_TYPE &&
	       C_block_item(y, 0) == ratnum_type_tag) {
      if (eqp) return C_SCHEME_FALSE;
      else return rat_cmp(x, y);
    } else if (C_block_item(y, 0) == compnum_type_tag) {
      if (eqp) return C_SCHEME_FALSE;
      else barf(C_BAD_ARGUMENT_TYPE_COMPLEX_NO_ORDERING_ERROR, loc, y);
    } else {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    }
  } else if (C_header_bits(x) == C_STRUCTURE_TYPE &&
             (C_block_item(x, 0) == ratnum_type_tag)) {
    if (y & C_FIXNUM_BIT) {
      if (eqp) return C_SCHEME_FALSE;
      else return rat_cmp(x, y);
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      return rat_flo_cmp(x, y);
    } else if (C_IS_BIGNUM_TYPE(y)) {
      if (eqp) return C_SCHEME_FALSE;
      else return rat_cmp(x, y);
    } else if (C_header_bits(y) == C_STRUCTURE_TYPE &&
               (C_block_item(y, 0) == ratnum_type_tag)) {
      if (eqp) {
        return C_and(C_and(C_u_i_2_integer_equalp(C_block_item(x, 1),
                                                  C_block_item(y, 1)),
                           C_u_i_2_integer_equalp(C_block_item(x, 2),
                                                  C_block_item(y, 2))),
                     C_fix(0));
      } else {
        return rat_cmp(x, y);
      }
    } else if (C_header_bits(y) == C_STRUCTURE_TYPE &&
               (C_block_item(y, 0) == compnum_type_tag)) {
      if (eqp) return C_SCHEME_FALSE;
      else barf(C_BAD_ARGUMENT_TYPE_COMPLEX_NO_ORDERING_ERROR, loc, y);
    } else {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    }
  } else if (C_header_bits(x) == C_STRUCTURE_TYPE &&
             (C_block_item(x, 0) == compnum_type_tag)) {
    if (!eqp) {
      barf(C_BAD_ARGUMENT_TYPE_COMPLEX_NO_ORDERING_ERROR, loc, x);
    } else if (y & C_FIXNUM_BIT) {
      return C_SCHEME_FALSE;
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    } else if (C_block_header(y) == C_FLONUM_TAG ||
               C_IS_BIGNUM_TYPE(y) ||
               (C_header_bits(y) == C_STRUCTURE_TYPE &&
                (C_block_item(y, 0) == ratnum_type_tag))) {
      return C_SCHEME_FALSE;
    } else if (C_header_bits(y) == C_STRUCTURE_TYPE &&
               (C_block_item(y, 0) == compnum_type_tag)) {
      return C_and(C_and(C_i_2_basic_equalp(C_block_item(x, 1),
                                            C_block_item(y, 1)),
                         C_i_2_basic_equalp(C_block_item(x, 2),
                                            C_block_item(y, 2))),
                   C_fix(0));
    } else {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, y);
    }
  } else {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, loc, x);
  }
}

C_regparm C_word C_fcall
C_i_2_basic_equalp(C_word x, C_word y)
{
   return C_mk_bool(basic_cmp(x, y, "=", 1) == C_fix(0));
}

C_word C_ccall C_u_i_2_integer_equalp(C_word x, C_word y)
{
  if (x & C_FIXNUM_BIT)
    return C_mk_bool(x == y);
  else if (y & C_FIXNUM_BIT)
    return C_SCHEME_FALSE;
  else
    return C_mk_bool(C_u_i_bignum_cmp(x, y) == C_fix(0));
}

/* TODO: Rename to C_lessp */
void C_ccall CPS_PROCN(C_numbers_lessp, c, self, k)
{
  CPS_BODYN(c, self, k);
  C_word x, y, result;
#ifdef ARGVECTOR_CHICKEN
  int i = 2;
#else
  va_list v;
#endif
  
  if (c < 4) C_bad_argc_2(c, 4, self);

  c -= 2; 
#ifdef ARGVECTOR_CHICKEN
  x = __av[i++];
#else
  va_start(v, k);
  x = va_arg(v, C_word);
#endif

  while(--c) {
#ifdef ARGVECTOR_CHICKEN
    y = __av[i++];
#else
    y = va_arg(v, C_word);
#endif
    result = C_i_2_basic_lessp(x, y);
    if (result == C_SCHEME_FALSE) break;
    x = y;
  }

#ifndef ARGVECTOR_CHICKEN
  va_end(v);
#endif
  C_kontinue(k, result);
}

/* TODO: Rename to C_less_or_equal_p */
void C_ccall CPS_PROCN(C_numbers_less_or_equal_p, c, self, k)
{
  CPS_BODYN(c, self, k);
  C_word x, y, result;
#ifdef ARGVECTOR_CHICKEN
  int i = 2;
#else
  va_list v;
#endif

  if (c < 4) C_bad_argc_2(c, 4, self);

  c -= 2; 
#ifdef ARGVECTOR_CHICKEN
  x = __av[i++];
#else
  va_start(v, k);
  x = va_arg(v, C_word);
#endif

  while(--c) {
#ifdef ARGVECTOR_CHICKEN
    y = __av[i++];
#else
    y = va_arg(v, C_word);
#endif
    result = C_i_2_basic_less_or_equalp(x, y);
    if (result == C_SCHEME_FALSE) break;
    x = y;
  }

#ifndef ARGVECTOR_CHICKEN
  va_end(v);
#endif
  C_kontinue(k, result);
}

C_regparm C_word C_fcall C_i_2_basic_lessp(C_word x, C_word y)
{
   return C_mk_bool(basic_cmp(x, y, "<", 0) == C_fix(-1));
}

C_regparm C_word C_fcall C_i_2_basic_less_or_equalp(C_word x, C_word y)
{
   C_word res = basic_cmp(x, y, "<=", 0);
   return C_mk_bool(res == C_fix(0) || res == C_fix(-1));
}

C_word C_ccall
C_u_i_2_integer_lessp(C_word x, C_word y)
{
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      return C_mk_bool(C_unfix(x) < C_unfix(y));
    } else {
      return C_mk_nbool(C_bignum_negativep(y));
    }
  } else if (y & C_FIXNUM_BIT) {
    return C_mk_bool(C_bignum_negativep(x));
  } else {
    return C_mk_bool(C_u_i_bignum_cmp(x, y) == C_fix(-1));
  }
}

C_word C_ccall
C_u_i_2_integer_less_or_equalp(C_word x, C_word y)
{
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      return C_mk_bool(C_unfix(x) <= C_unfix(y));
    } else {
      return C_mk_nbool(C_bignum_negativep(y));
    }
  } else if (y & C_FIXNUM_BIT) {
    return C_mk_bool(C_bignum_negativep(x));
  } else {
    C_word res = C_u_i_bignum_cmp(x, y);
    return C_mk_bool(res == C_fix(0) || res == C_fix(-1));
  }
}

/* TODO: Rename to C_greater_p */
void C_ccall CPS_PROCN(C_numbers_greaterp, c, self, k)
{
  CPS_BODYN(c, self, k);
  C_word x, y, result;
#ifdef ARGVECTOR_CHICKEN
  int i = 2;
#else
  va_list v;
#endif

  if (c < 4) C_bad_argc_2(c, 4, self);

  c -= 2; 
#ifdef ARGVECTOR_CHICKEN
  x = __av[i++];
#else
  va_start(v, k);
  x = va_arg(v, C_word);
#endif

  while(--c) {
#ifdef ARGVECTOR_CHICKEN
    y = __av[i++];
#else
    y = va_arg(v, C_word);
#endif
    result = C_i_2_basic_greaterp(x, y);
    if (result == C_SCHEME_FALSE) break;
    x = y;
  }

#ifndef ARGVECTOR_CHICKEN
  va_end(v);
#endif
  C_kontinue(k, result);
}

/* TODO: Rename to C_greater_or_equal_p */
void C_ccall CPS_PROCN(C_numbers_greater_or_equal_p, c, self, k)
{
  CPS_BODYN(c, self, k);
  C_word x, y, result;
#ifdef ARGVECTOR_CHICKEN
  int i = 2;
#else
  va_list v;
#endif

  if (c < 4) C_bad_argc_2(c, 4, self);

  c -= 2; 
#ifdef ARGVECTOR_CHICKEN
  x = __av[i++];
#else
  va_start(v, k);
  x = va_arg(v, C_word);
#endif

  while(--c) {
#ifdef ARGVECTOR_CHICKEN
    y = __av[i++];
#else
    y = va_arg(v, C_word);
#endif
    result = C_i_2_basic_greater_or_equalp(x, y);
    if (result == C_SCHEME_FALSE) break;
    x = y;
  }

#ifndef ARGVECTOR_CHICKEN
  va_end(v);
#endif
  C_kontinue(k, result);
}

C_regparm C_word C_fcall C_i_2_basic_greaterp(C_word x, C_word y)
{
   return C_mk_bool(basic_cmp(x, y, ">", 0) == C_fix(1));
}

C_regparm C_word C_fcall C_i_2_basic_greater_or_equalp(C_word x, C_word y)
{
   C_word res = basic_cmp(x, y, ">=", 0);
   return C_mk_bool(res == C_fix(0) || res == C_fix(1));
}

C_word C_ccall
C_u_i_2_integer_greaterp(C_word x, C_word y)
{
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      return C_mk_bool(C_unfix(x) > C_unfix(y));
    } else {
      return C_mk_bool(C_bignum_negativep(y));
    }
  } else if (y & C_FIXNUM_BIT) {
    return C_mk_nbool(C_bignum_negativep(x));
  } else {
    return C_mk_bool(C_u_i_bignum_cmp(x, y) == C_fix(1));
  }
}

C_word C_ccall
C_u_i_2_integer_greater_or_equalp(C_word x, C_word y)
{
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      return C_mk_bool(C_unfix(x) >= C_unfix(y));
    } else {
      return C_mk_bool(C_bignum_negativep(y));
    }
  } else if (y & C_FIXNUM_BIT) {
    return C_mk_nbool(C_bignum_negativep(x));
  } else {
    C_word res = C_u_i_bignum_cmp(x, y);
    return C_mk_bool(res == C_fix(0) || res == C_fix(1));
  }
}

/* This is a bit weird: We have to compare flonums as bignums due to
 * precision loss on 64-bit platforms.  For simplicity, we convert
 * fixnums to bignums here.
 */
static C_word int_flo_cmp(C_word intnum, C_word flonum)
{
  C_word ab[C_SIZEOF_FIX_BIGNUM + C_SIZEOF_FLONUM], *a = ab, x, y, res;
  double i, f;

  f = C_flonum_magnitude(flonum);

  if (C_isnan(f)) {
    return C_SCHEME_FALSE; /* "mu" */
  } else if (C_isinf(f)) {
    return C_fix((f > 0.0) ? -1 : 1); /* x is smaller if f is +inf.0 */
  } else {
    f = modf(f, &i);

    x = (intnum & C_FIXNUM_BIT) ? C_a_u_i_fix_to_big(&a, intnum) : intnum;
    y = flo_to_tmp_bignum(C_flonum(&a, i));

    res = C_u_i_bignum_cmp(x, y);
    free_tmp_bignum(y);

    if (res == C_fix(0)) /* Use fraction to break tie. If f > 0, x is smaller */
      return C_fix((f > 0.0) ? -1 : ((f < 0.0) ? 1 : 0));
    else
      return res;
  }
}

/* For convenience (ie, to reduce the degree of mindfuck) */
static C_word flo_int_cmp(C_word flonum, C_word intnum)
{
  C_word res = int_flo_cmp(intnum, flonum);
  switch(res) {
  case C_fix(1): return C_fix(-1);
  case C_fix(-1): return C_fix(1);
  default: return res; /* Can be either C_fix(0) or C_SCHEME_FALSE(!) */
  }
}

/* This code is completely braindead, but at least it allows us to do
 * inline comparisons!
 */
static C_word rat_flo_cmp(C_word ratnum, C_word flonum)
{
  C_word ab[C_SIZEOF_FIX_BIGNUM * 2 + C_SIZEOF_FLONUM], *a = ab,
         num, denom, ibig, res, nscaled, iscaled, negp;
  C_uword *scan;
  int shift_amount, ilen, nlen;
  double i, f;

  f = C_flonum_magnitude(flonum);

  if (C_isnan(f)) {
    return C_SCHEME_FALSE; /* "mu" */
  } else if (C_isinf(f)) {
    return C_fix((f > 0.0) ? -1 : 1); /* x is smaller if f is +inf.0 */
  } else {
    /* Scale up the floating-point number to become a whole integer,
     * and remember power of two (# of bits) to shift the numerator.
     */
    shift_amount = 0;

    /* TODO: This doesn't work for denormalized flonums! */
    while (modf(f, &i) != 0.0) {
      f = ldexp(f, 1);
      shift_amount++;
    }

    i = f; /* TODO: split i and f so it'll work for denormalized flonums */

    num = C_block_item(ratnum, 1);
    num = (num & C_FIXNUM_BIT) ? C_a_u_i_fix_to_big(&a, num) : num;

    if (C_bignum_negativep(num) && i >= 0.0) { /* Save time if signs differ */
      return C_fix(-1);
    } else if (!C_bignum_negativep(num) && i <= 0.0) { /* num is never 0 */
      return C_fix(1);
    } else {
      negp = C_mk_bool(C_bignum_negativep(num));

      denom = C_block_item(ratnum, 2);
      denom = (denom & C_FIXNUM_BIT) ? C_a_u_i_fix_to_big(&a, denom) : denom;

      ibig = flo_to_tmp_bignum(C_flonum(&a, i));

      nlen = C_bignum_size(num) + C_bignum_size(denom);
      ilen = C_bignum_size(ibig) + C_bignum_size(denom);

      /* Now, multiply the scaled flonum by the denominator, so we can
       * compare it directly to the scaled numerator.  Unfortunately,
       * this won't use Karatsuba multiplication, so for large numbers
       * it will be slower than it could be if comparisons were done
       * in CPS context.
       */
      iscaled = allocate_tmp_bignum(C_fix(ilen), negp, C_SCHEME_TRUE);
      bignum_digits_multiply(denom, ibig, iscaled); /* Swap args if i < d? */
      free_tmp_bignum(ibig);

      nlen += C_BIGNUM_BITS_TO_DIGITS(shift_amount);
      nscaled = allocate_tmp_bignum(C_fix(nlen), negp, C_SCHEME_TRUE);

      scan = C_bignum_digits(nscaled) + shift_amount / C_BIGNUM_DIGIT_LENGTH;
      C_memcpy(scan, C_bignum_digits(num), C_wordstobytes(C_bignum_size(num)));
      shift_amount = shift_amount % C_BIGNUM_DIGIT_LENGTH;
      if(shift_amount > 0) {
        bignum_digits_destructive_shift_left(
         scan, C_bignum_digits(nscaled) + nlen, shift_amount);
      }

      /* Shorten the numbers if needed */
      for (scan = C_bignum_digits(iscaled)+ilen-1; *scan == 0; scan--) ilen--;
      C_bignum_mutate_size(iscaled, ilen);
      for (scan = C_bignum_digits(nscaled)+nlen-1; *scan == 0; scan--) nlen--;
      C_bignum_mutate_size(nscaled, nlen);

      /* Finally, we're ready to compare them! */
      res = C_u_i_bignum_cmp(nscaled, iscaled);
      free_tmp_bignum(nscaled);
      free_tmp_bignum(iscaled);

      return res;
    }
  }
}

static C_word flo_rat_cmp(C_word flonum, C_word ratnum)
{
  C_word res = rat_flo_cmp(ratnum, flonum);
  switch(res) {
  case C_fix(1): return C_fix(-1);
  case C_fix(-1): return C_fix(1);
  default: return res; /* Can be either C_fix(0) or C_SCHEME_FALSE(!) */
  }
}

C_word
C_u_i_bignum_cmp(C_word x, C_word y)
{
  if (C_bignum_negativep(x)) {
    if (C_bignum_negativep(y)) { /* Largest negative number is smallest */
      return C_fix(bignum_cmp_unsigned(y, x));
    } else {
      return C_fix(-1);
    }
  } else {
    if (C_bignum_negativep(y)) {
      return C_fix(1);
    } else {
      return C_fix(bignum_cmp_unsigned(x, y));
    }
  }
}

/* NOTE: If C_allocate_bignum is to be callable from Scheme, it needs
 * to be converted to argvector.  But that's a very big change.
 */
void C_ccall
C_allocate_bignum(C_word c, C_word self, C_word k, C_word size, C_word negp, C_word initp)
{
#ifdef ARGVECTOR_CHICKEN
  C_word kab[C_SIZEOF_CLOSURE(3)], *ka = kab, av[6];

  av[ 0 ] = (C_word)NULL;   /* No "self" closure */
  av[ 1 ] = C_closure(&ka, 3, (C_word)allocate_bignum_2, k, negp);
  av[ 2 ] = C_bytes(C_fixnum_plus(size, C_fix(1))); /* Add header */
  av[ 3 ] = C_SCHEME_TRUE;  /* Byte vector */
  av[ 4 ] = C_and(initp, C_make_character('\0'));
  av[ 5 ] = C_SCHEME_FALSE; /* Don't align at 8 bytes */
  C_allocate_vector(6, av);
#else
  C_word kab[C_SIZEOF_CLOSURE(3)], *ka = kab, k2, init;
  k2 = C_closure(&ka, 3, (C_word)allocate_bignum_2, k, negp);

  init = C_and(initp, C_make_character('\0'));
  C_allocate_vector(6, (C_word)NULL, k2,
		    C_bytes(C_fixnum_plus(size, C_fix(1))), /* Add header */
                    /* Byte vec, initialization, align at 8 bytes */
                    C_SCHEME_TRUE, init, C_SCHEME_FALSE);
#endif
}

static void CONT_PROC(allocate_bignum_2, c, self, bigvec)
{
  CONT_BODY(self, bigvec);
  C_word ab[C_SIZEOF_STRUCTURE(2)], *a = ab, bignum,
         k = C_block_item(self, 1),
         negp = C_truep(C_block_item(self, 2)) ? 1 : 0,
         tagvec = CHICKEN_gc_root_ref(tags);

  C_set_block_item(bigvec, 0, negp);

  bignum = C_a_i_record2(&a, 2, C_block_item(tagvec, BIG_TAG), bigvec);
  C_kontinue(k, bignum);
}

static C_word
allocate_tmp_bignum(C_word size, C_word negp, C_word initp)
{
  C_word *mem = malloc(C_wordstobytes(C_SIZEOF_BIGNUM(C_unfix(size)))),
          bigvec = (C_word)(mem + C_SIZEOF_STRUCTURE(2)),
	  tagvec = CHICKEN_gc_root_ref(tags);
  if (mem == NULL) abort();     /* TODO: panic */
  
  C_block_header_init(bigvec, (C_STRING_TYPE | C_wordstobytes(C_unfix(size)+1)));
  C_set_block_item(bigvec, 0, C_truep(negp));

  if (C_truep(initp)) {
    C_memset(((C_uword *)C_data_pointer(bigvec))+1,
             0, C_wordstobytes(C_unfix(size)));
  }

  return C_a_i_record2(&mem, 2, C_block_item(tagvec, BIG_TAG), bigvec);
}

/* Simplification: scan trailing zeroes, then return a fixnum if the
 * value fits, or trim the bignum's length. */
C_word C_ccall
C_bignum_simplify(C_word big)
{
  C_uword *start = C_bignum_digits(big),
          *last_digit = start + C_bignum_size(big) - 1,
          *scan = last_digit, tmp;
  int length;

  while (scan >= start && *scan == 0)
    scan--;
  length = scan - start + 1;
  
  switch(length) {
  case 0:
    return C_fix(0);
  case 1:
    tmp = *start;
    if (C_bignum_negativep(big) ?
        !(tmp & C_INT_SIGN_BIT) && C_fitsinfixnump(-(C_word)tmp) :
        C_ufitsinfixnump(tmp))
      return C_bignum_negativep(big) ? C_fix(-(C_word)tmp) : C_fix(tmp);
    /* FALLTHROUGH */
  default:
    if (scan < last_digit) C_bignum_mutate_size(big, length);
    return big;
  }
}

static C_uword
bignum_digits_destructive_scale_up_with_carry(C_uword *start, C_uword *end, C_uword factor, C_uword carry)
{
  C_uword digit, p;

  assert(C_fitsinbignumhalfdigitp(carry));
  assert(C_fitsinbignumhalfdigitp(factor));

  /* See fixnum_times.  Substitute xlo = factor, xhi = 0, y = digit
   * and simplify the result to reduce variable usage.
   */
  while (start < end) {
    digit = (*start);

    p = factor * C_BIGNUM_DIGIT_LO_HALF(digit) + carry;
    carry = C_BIGNUM_DIGIT_LO_HALF(p);

    p = factor * C_BIGNUM_DIGIT_HI_HALF(digit) + C_BIGNUM_DIGIT_HI_HALF(p);
    (*start++) = C_BIGNUM_DIGIT_COMBINE(C_BIGNUM_DIGIT_LO_HALF(p), carry);
    carry = C_BIGNUM_DIGIT_HI_HALF(p);
  }
  return carry;
}

static C_uword
bignum_digits_destructive_scale_down(C_uword *start, C_uword *end, C_uword denominator)
{
  C_uword digit, k = 0;
  C_uhword q_j_hi, q_j_lo;

  /* Single digit divisor case from Hacker's Delight, Figure 9-1,
   * adapted to modify u[] in-place instead of writing to q[].
   */
  while (start < end) {
    digit = (*--end);

    k = C_BIGNUM_DIGIT_COMBINE(k, C_BIGNUM_DIGIT_HI_HALF(digit)); /* j */
    q_j_hi = k / denominator;
    k -= q_j_hi * denominator;

    k = C_BIGNUM_DIGIT_COMBINE(k, C_BIGNUM_DIGIT_LO_HALF(digit)); /* j-1 */
    q_j_lo = k / denominator;
    k -= q_j_lo * denominator;
    
    *end = C_BIGNUM_DIGIT_COMBINE(q_j_hi, q_j_lo);
  }
  return k;
}

static C_uword
bignum_digits_destructive_shift_right(C_uword *start, C_uword *end, int shift_right, int negp)
{
  int shift_left = C_BIGNUM_DIGIT_LENGTH - shift_right;
  C_uword digit, carry = negp ? ((~(C_uword)0) << shift_left) : 0;

  assert(shift_right < C_BIGNUM_DIGIT_LENGTH);

  while (start < end) {
    digit = *(--end);
    *end = (digit >> shift_right) | carry;
    carry = digit << shift_left;
  }
  return carry >> shift_left; /* The bits that were shifted out to the right */
}

static C_uword
bignum_digits_destructive_shift_left(C_uword *start, C_uword *end, int shift_left)
{
  C_uword carry = 0, digit;
  int shift_right = C_BIGNUM_DIGIT_LENGTH - shift_left;

  assert(shift_left < C_BIGNUM_DIGIT_LENGTH);

  while (start < end) {
    digit = *start;
    (*start++) = (digit << shift_left) | carry;
    carry = digit >> shift_right;
  }
  return carry;	 /* This would end up as most significant digit if it fit */
}

void C_ccall CPS_PROC2(C_2_basic_times, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      C_word *a = C_alloc(C_SIZEOF_BIGNUM(2));
      C_kontinue(k, C_a_u_i_2_fixnum_times(&a, 2, x, y));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "*", y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_word *a = C_alloc(C_SIZEOF_FLONUM);
      C_kontinue(k, C_flonum(&a, (double)C_unfix(x) * C_flonum_magnitude(y)));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      CPS_CALL(C_u_2_integer_times, 4, (C_word)NULL, k, x, y);
    } else {
      try_extended_number("numbers#@extended-2-times", 3, k, x, y);
    }
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "*", x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    C_word *a = C_alloc(C_SIZEOF_FLONUM);
    if (y & C_FIXNUM_BIT) {
      C_kontinue(k, C_flonum(&a, C_flonum_magnitude(x) * (double)C_unfix(y)));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "*", y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_kontinue(k, C_a_i_flonum_times(&a, 2, x, y));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      C_kontinue(k, C_flonum(&a, C_flonum_magnitude(x)*C_bignum_to_double(y)));
    } else {
      try_extended_number("numbers#@extended-2-times", 3, k, x, y);
    }
  } else if (C_IS_BIGNUM_TYPE(x)) {
    if (y & C_FIXNUM_BIT) {
      CPS_CALL(C_u_2_integer_times, 4, (C_word)NULL, k, x, y);
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "*", x);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_word *a = C_alloc(C_SIZEOF_FLONUM);
      C_kontinue(k, C_flonum(&a, C_bignum_to_double(x)*C_flonum_magnitude(y)));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      CPS_CALL(C_u_2_integer_times, 4, (C_word)NULL, k, x, y);
    } else {
      try_extended_number("numbers#@extended-2-times", 3, k, x, y);
    }
  } else {
    try_extended_number("numbers#@extended-2-times", 3, k, x, y);
  }
}

/* Needs SIZEOF_BIGNUM(2) */
C_regparm C_word C_fcall
C_a_u_i_2_fixnum_times(C_word **ptr, C_word n, C_word x, C_word y)
{
  C_uword negp, xhi, xlo, yhi, ylo, p, rhi, rlo;

  negp = ((x & C_INT_SIGN_BIT) ? !(y & C_INT_SIGN_BIT) : (y & C_INT_SIGN_BIT));
  x = (x & C_INT_SIGN_BIT) ? -C_unfix(x) : C_unfix(x);
  y = (y & C_INT_SIGN_BIT) ? -C_unfix(y) : C_unfix(y);

  xhi = C_BIGNUM_DIGIT_HI_HALF(x); xlo = C_BIGNUM_DIGIT_LO_HALF(x);
  yhi = C_BIGNUM_DIGIT_HI_HALF(y); ylo = C_BIGNUM_DIGIT_LO_HALF(y);
  
  /* This is simply bignum_digits_multiply unrolled for 2x2 halfdigits */
  p = xlo * ylo;
  rlo = C_BIGNUM_DIGIT_LO_HALF(p);

  p = xhi * ylo + C_BIGNUM_DIGIT_HI_HALF(p);
  rhi = C_BIGNUM_DIGIT_HI_HALF(p);

  p = xlo * yhi + C_BIGNUM_DIGIT_LO_HALF(p);
  rlo = C_BIGNUM_DIGIT_COMBINE(C_BIGNUM_DIGIT_LO_HALF(p), rlo);

  rhi = xhi * yhi + C_BIGNUM_DIGIT_HI_HALF(p) + rhi;

  if (rhi) {
    return C_bignum2(ptr, negp != 0, rlo, rhi);
  } else if (negp ?
             ((rlo & C_INT_SIGN_BIT) || !C_fitsinfixnump(-(C_word)rlo)) :
             !C_ufitsinfixnump(rlo)) {
    return C_bignum1(ptr, negp != 0, rlo);
  } else {
    return C_fix(negp ? -rlo : rlo);
  }
}

void C_ccall CPS_PROC2(C_u_2_integer_times, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      C_word *a = C_alloc(C_SIZEOF_BIGNUM(2));
      C_kontinue(k, C_a_u_i_2_fixnum_times(&a, 2, x, y));
    } else {
      C_word tmp = x; /* swap to ensure x is a bignum and y a fixnum */
      x = y;
      y = tmp;
    }
  }
  /* Here, we know for sure that X is a bignum */
  if (y == C_fix(0)) {
    C_kontinue(k, C_fix(0));
  } else if (y == C_fix(1)) {
    C_kontinue(k, x);
  } else if (y == C_fix(-1)) {
    CPS_CALL(C_u_integer_negate, 3, (C_word)NULL, k, x);
  } else if (y & C_FIXNUM_BIT) { /* Any other fixnum */
    C_word absy = (y & C_INT_SIGN_BIT) ? -C_unfix(y) : C_unfix(y),
           negp = C_mk_bool((y & C_INT_SIGN_BIT) ?
                            !C_bignum_negativep(x) :
                            C_bignum_negativep(x));
  
    if (C_fitsinbignumhalfdigitp(absy) ||
        (((C_uword)1 << (C_ilen(absy)-1)) == absy && C_fitsinfixnump(absy))) {
      C_word size, k2, *a = C_alloc(C_SIZEOF_CLOSURE(4));
      k2 = C_closure(&a, 4, (C_word)integer_times_2, k, x, C_fix(absy));
      size = C_fix(C_bignum_size(x) + 1); /* Needs _at most_ one more digit */
      C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
    } else {
      C_word *a = C_alloc(C_SIZEOF_FIX_BIGNUM);
      y = C_a_u_i_fix_to_big(&a, y);
      bignum_times_bignum_unsigned(k, x, y, negp);
    }
  } else {
    C_word negp = C_bignum_negativep(x) ?
                  !C_bignum_negativep(y) :
                  C_bignum_negativep(y);
    bignum_times_bignum_unsigned(k, x, y, C_mk_bool(negp));
  }
}

static void CONT_PROC(integer_times_2, c, self, new_big)
{
  CONT_BODY(self, new_big);
  C_word k = C_block_item(self, 1),
	 old_bigx = C_block_item(self, 2),
	 absy = C_unfix(C_block_item(self, 3));
  C_uword *digits = C_bignum_digits(new_big),
	  *end_digit = digits + C_bignum_size(old_bigx);
  int shift;

  bignum_digits_destructive_copy(new_big, old_bigx);

  /* Scale up, and sanitise the result. */
  shift = C_ilen(absy) - 1;
  if (((C_uword)1 << shift) == absy) { /* Power of two? */
    *end_digit = bignum_digits_destructive_shift_left(digits, end_digit, shift);
  } else {
    *end_digit =
      bignum_digits_destructive_scale_up_with_carry(digits, end_digit, absy, 0);
  }
  C_kontinue(k, C_bignum_simplify(new_big));
}

static void
bignum_times_bignum_unsigned(C_word k, C_word x, C_word y, C_word negp)
{
  if (C_bignum_size(y) < C_bignum_size(x)) { /* Ensure size(x) <= size(y) */
    C_word z = x;
    x = y;
    y = z;
  }

  if (C_bignum_size(x) < C_KARATSUBA_THRESHOLD) {  /* Gradebook */
    C_word kab[C_SIZEOF_CLOSURE(4)], *ka = kab, k2, size;
    k2 = C_closure(&ka, 4, (C_word)bignum_times_bignum_unsigned_2, k, x, y);
    size = C_fix(C_bignum_size(x) + C_bignum_size(y));
    C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_TRUE);
  } else {
    try_extended_number("numbers#@bignum-2-times-karatsuba", 3, k, x, y);
  }
}

static C_regparm void
bignum_digits_multiply(C_word x, C_word y, C_word result)
{
  C_uword product,
          *xd = C_bignum_digits(x),
          *yd = C_bignum_digits(y),
          *rd = C_bignum_digits(result);
  C_uhword carry, yj;
  /* Lengths in halfwords */
  int i, j, length_x = C_bignum_size(x) * 2, length_y = C_bignum_size(y) * 2;

  /* From Hacker's Delight, Figure 8-1 (top part) */
  for (j = 0; j < length_y; ++j) {
    yj = C_uhword_ref(yd, j);
    if (yj == 0) continue;
    carry = 0;
    for (i = 0; i < length_x; ++i) {
      product = (C_uword)C_uhword_ref(xd, i) * yj +
                (C_uword)C_uhword_ref(rd, i + j) + carry;
      C_uhword_set(rd, i + j, product);
      carry = C_BIGNUM_DIGIT_HI_HALF(product);
    }
    C_uhword_set(rd, j + length_x, carry);
  }
}

static void CONT_PROC(bignum_times_bignum_unsigned_2, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
	 x = C_block_item(self, 2),
	 y = C_block_item(self, 3);

  bignum_digits_multiply(x, y, result);
  C_kontinue(k, C_bignum_simplify(result));
}

void C_ccall
CPS_PROC5(C_digits_to_integer, c, self, k, str, start, end, radix, negp)
{
  CPS_BODY5(c, self, k, str, start, end, radix, negp);
  assert((C_unfix(radix) > 1) && C_fitsinbignumhalfdigitp(C_unfix(radix)));
  
  if (start == end) {
    C_kontinue(k, C_SCHEME_FALSE);
  } else {
    C_word kab[C_SIZEOF_CLOSURE(6)], *ka = kab, k2, size;
    size_t nbits;
    k2 = C_closure(&ka, 6, (C_word)digits_to_integer_2, k, str, start, end, radix);

    nbits = (C_unfix(end) - C_unfix(start)) * C_ilen(C_unfix(radix)-1);
    size = C_fix(C_BIGNUM_BITS_TO_DIGITS(nbits));
    C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
  }
}

C_inline int hex_char_to_digit(int ch)
{
  if (ch == (int)'#') return 0; /* Hash characters in numbers are mapped to 0 */
  else if (ch >= (int)'a') return ch - (int)'a' + 10; /* lower hex */
  else if (ch >= (int)'A') return ch - (int)'A' + 10; /* upper hex */
  else return ch - (int)'0'; /* decimal (OR INVALID; handled elsewhere) */
}

static void CONT_PROC(digits_to_integer_2, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
         str = C_block_item(self, 2),
         start = C_unfix(C_block_item(self, 3)),
         end = C_unfix(C_block_item(self, 4)),
         radix = C_unfix(C_block_item(self, 5));
  char *s = C_c_string(str);

  C_kontinue(k, str_to_bignum(result, s + start, s + end, radix));
}

/* Write from digit character stream to bignum.  Bignum does not need
 * to be initialised.  Returns the bignum, or a fixnum.  Assumes the
 * string contains only digits that fit within radix (checked by
 * string->number).
 */
static C_regparm C_word
str_to_bignum(C_word bignum, char *str, char *str_end, int radix)
{
  int radix_shift, str_digit;
  C_uword *digits = C_bignum_digits(bignum),
          *end_digits = digits + C_bignum_size(bignum), big_digit = 0;

  /* Below, we try to save up as much as possible in big_digit, and
   * only when it exceeds what we would be able to multiply easily, we
   * scale up the bignum and add what we saved up.
   */
  radix_shift = C_ilen(radix) - 1;
  if (((C_uword)1 << radix_shift) == radix) { /* Power of two? */
    int n = 0; /* Number of bits read so far into current big digit */

    /* Read from least to most significant digit to avoid shifting or scaling */
    while (str_end > str) {
      str_digit = hex_char_to_digit((int)*--str_end);

      big_digit |= (C_uword)str_digit << n;
      n += radix_shift;

      if (n >= C_BIGNUM_DIGIT_LENGTH) {
	n -= C_BIGNUM_DIGIT_LENGTH;
	*digits++ = big_digit;
	big_digit = str_digit >> (radix_shift - n);
      }
    }
    assert(n < C_BIGNUM_DIGIT_LENGTH);
    /* If radix isn't an exact divisor of digit length, write final digit */
    if (n > 0) *digits++ = big_digit;
    assert(digits == end_digits);
  } else {			  /* Not a power of two */
    C_uword *last_digit = digits, factor;  /* bignum starts as zero */

    do {
      factor = radix;
      while (str < str_end && C_fitsinbignumhalfdigitp(factor)) {
        str_digit = hex_char_to_digit((int)*str++);
	factor *= radix;
	big_digit = radix * big_digit + str_digit;
      }

      big_digit = bignum_digits_destructive_scale_up_with_carry(
                   digits, last_digit, factor / radix, big_digit);

      if (big_digit) {
	(*last_digit++) = big_digit; /* Move end */
        big_digit = 0;
      }
    } while (str < str_end);

    /* Set remaining digits to zero so bignum_simplify can do its work */
    assert(last_digit <= end_digits);
    while (last_digit < end_digits) *last_digit++ = 0;
  }

  return C_bignum_simplify(bignum);
}

/* TODO: Copied from runtime.c */
# define STRING_BUFFER_SIZE   4096

static C_TLS C_char buffer[ STRING_BUFFER_SIZE ];
static char *to_n_nary(C_uword num, C_uword base, int negp, int as_flonum)
{
  static char *digits = "0123456789abcdef";
  char *p;
  C_uword shift = C_ilen(base) - 1;
  int mask = (1 << shift) - 1;
  if (as_flonum) {
    buffer[68] = '\0';
    buffer[67] = '0';
    buffer[66] = '.';
  } else {
    buffer[66] = '\0';
  }
  p = buffer + 66;
  if (mask == base - 1) {
    do {
      *(--p) = digits [ num & mask ];
      num >>= shift;
    } while (num);
  } else {
    do {
      *(--p) = digits [ num % base ];
      num /= base;
    } while (num);
  }
  if (negp) *(--p) = '-';
  return p;
}

void C_ccall CPS_PROCNPLUS1(C_basic_number_to_string, c, closure, k, num)
{
  CPS_BODYNPLUS1(c, closure, k, num);
  C_word radix;

  if(c == 3) {
    radix = C_fix(10);
  } else if(c == 4) {
#ifdef ARGVECTOR_CHICKEN
    radix = __av[3];
#else
    va_list v;

    va_start(v, num);
    radix = va_arg(v, C_word);
    va_end(v);
#endif
    
    if(!(radix & C_FIXNUM_BIT))
      barf(C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR, "number->string", radix);
  } else {
    C_bad_argc(c, 3);
  }

  if(num & C_FIXNUM_BIT) {
    CPS_CALL(C_u_fixnum_to_string, 4, (C_word)NULL, k, num, radix);
  } else if (C_immediatep(num)) {
    barf(C_BAD_ARGUMENT_TYPE_ERROR, "number->string", num);
  } else if(C_block_header(num) == C_FLONUM_TAG) {
    CPS_CALL(C_u_flonum_to_string, 4, (C_word)NULL, k, num, radix);
  } else if (C_IS_BIGNUM_TYPE(num)) {
    CPS_CALL(C_u_integer_to_string, 4, (C_word)NULL, k, num, radix);
  } else {
    try_extended_number("numbers#@extended-number->string", 3, k, num, radix);
  }
}

void C_ccall CPS_PROC2(C_u_fixnum_to_string, c, self, k, num, radix)
{
  CPS_BODY2(c, self, k, num, radix);
  C_char *p;
  C_word *a, neg = num & C_INT_SIGN_BIT ? 1 : 0;

  radix = C_unfix(radix);
  if (radix < 2 || radix > 16) {
    barf(C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR, "number->string", radix);
  }

  num = neg ? -C_unfix(num) : C_unfix(num);
  p = to_n_nary(num, radix, neg, 0);

  num = C_strlen(p);
  a = C_alloc((C_bytestowords(num) + 1));
  C_kontinue(k, C_string(&a, num, p));
}

void C_ccall CPS_PROC2(C_u_flonum_to_string, c, self, k, num, radix)
{
  CPS_BODY2(c, self, k, num, radix);
  C_word *a;
  C_char *p;
  double f, fa, m;

  radix = C_unfix(radix);
  f = C_flonum_magnitude(num);
  fa = fabs(f);

  /* XXX TODO: Should inexacts be printable in other bases than 10?
   * Perhaps output a string starting with #i?
   * Right now something like (number->string 1e40 16) results in
   * a string that can't be read back using string->number.
   */
  if((radix < 2) || (radix > 16)){
    barf(C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR, "number->string", C_fix(radix));
  }

  if(f == 0.0 || (C_modf(f, &m) == 0.0 && log2(fa) < C_WORD_SIZE)) { /* Use fast int code */
    if(f < 0) {
      p = to_n_nary((C_uword)-f, radix, 1, 1);
    } else {
      p = to_n_nary((C_uword)f, radix, 0, 1);
    }
  } else if(C_isnan(f)) {
    p = "+nan.0";
  } else if(C_isinf(f)) {
    p = f > 0 ? "+inf.0" : "-inf.0";
  } else { /* Doesn't fit an unsigned int and not "special"; use system libc */
    C_snprintf(buffer, STRING_BUFFER_SIZE, C_text("%.*g"),
               /* XXX: flonum_print_precision */
               (int)C_unfix(C_get_print_precision()), f);
    buffer[STRING_BUFFER_SIZE-1] = '\0';

    if((p = C_strpbrk(buffer, C_text(".eE"))) == NULL) {
      /* Already checked for these, so shouldn't happen */
      assert(*buffer != 'i'); /* "inf" */
      assert(*buffer != 'n'); /* "nan" */
      /* Ensure integral flonums w/o expt are always terminated by .0 */
#if defined(HAVE_STRLCAT) || !defined(C_strcat)
      C_strlcat(buffer, C_text(".0"), sizeof(buffer));
#else
      C_strcat(buffer, C_text(".0"));
#endif
    }
    p = buffer;
  }

  radix = C_strlen(p);
  a = C_alloc((C_bytestowords(radix) + 1));
  radix = C_string(&a, radix, p);
  C_kontinue(k, radix);
}

/* Naming is a little inconsistent, but looks saner.  We're not R-O-B-O-T-S! */
void C_ccall CPS_PROC2(C_u_integer_to_string, c, self, k, num, radix)
{
  CPS_BODY2(c, self, k, num, radix);
  if (num & C_FIXNUM_BIT) {
    CPS_CALL(C_u_fixnum_to_string, 4, (C_word)NULL, k, num, radix);
  } else {
    int len, radix_shift;
    size_t nbits;

    if ((C_unfix(radix) < 2) || (C_unfix(radix) > 16)) {
      barf(C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR, "number->string", radix);
    }

    /* Approximation of the number of radix digits we'll need.  We try
     * to be as precise as possible to avoid memmove overhead at the end
     * of the non-powers of two part of the conversion procedure, which
     * we may need to do because we write strings back-to-front, and
     * pointers must be aligned (even for byte blocks).
     */
    len = C_bignum_size(num)-1;

    nbits  = (size_t)len * C_BIGNUM_DIGIT_LENGTH;
    nbits += C_ilen(C_bignum_digits(num)[len]);

    len = C_ilen(C_unfix(radix))-1;
    len = (nbits + len - 1) / len;
    len += C_bignum_negativep(num) ? 1 : 0; /* Add space for negative sign */
    
    radix_shift = C_ilen(C_unfix(radix)) - 1;
    if (len > C_RECURSIVE_TO_STRING_THRESHOLD &&
        /* The power of two fast path is much faster than recursion */
        ((C_uword)1 << radix_shift) != C_unfix(radix)) {
      try_extended_number("numbers#@integer->string/recursive",
                          4, k, num, radix, C_fix(len));
    } else {
#ifdef ARGVECTOR_CHICKEN
      C_word kab[C_SIZEOF_CLOSURE(4)], *ka = kab, av[6];

      av[ 0 ] = (C_word)NULL;   /* No "self" closure */
      av[ 1 ] = C_closure(&ka, 4, (C_word)bignum_to_str_2, k, num, radix);
      av[ 2 ] = C_fix(len);
      av[ 3 ] = C_SCHEME_TRUE; /* Byte vector */
      av[ 4 ] = C_SCHEME_FALSE; /* No initialization */
      av[ 5 ] = C_SCHEME_FALSE; /* Don't align at 8 bytes */
      C_allocate_vector(6, av);
#else
      C_word k2, *ka;
      ka = C_alloc(C_SIZEOF_CLOSURE(4));
      k2 = C_closure(&ka, 4, (C_word)bignum_to_str_2, k, num, radix);
      C_allocate_vector(6, (C_word)NULL, k2, C_fix(len),
                        /* Byte vec, no initialization, no align at 8 bytes */
                        C_SCHEME_TRUE, C_SCHEME_FALSE, C_SCHEME_FALSE);
#endif
    }
  }
}

static void CONT_PROC(bignum_to_str_2, c, self, string)
{
  static char *characters = "0123456789abcdef";
  CONT_BODY(self, string);
  C_word k = C_block_item(self, 1),
         bignum = C_block_item(self, 2),
         radix = C_unfix(C_block_item(self, 3));
  char *buf = C_c_string(string), *index = buf + C_header_size(string) - 1;
  int radix_shift, negp = (C_bignum_negativep(bignum) ? 1 : 0);

  radix_shift = C_ilen(radix) - 1;
  if (((C_uword)1 << radix_shift) == radix) { /* Power of two? */
    int radix_mask = radix - 1, big_digit_len = 0, radix_digit;
    C_uword *scan, *end, big_digit = 0;

    scan = C_bignum_digits(bignum);
    end = scan + C_bignum_size(bignum);

    while (scan < end) {
      /* If radix isn't an exact divisor of digit length, handle overlap */
      if (big_digit_len == 0) {
        big_digit = *scan++;
        big_digit_len = C_BIGNUM_DIGIT_LENGTH;
      } else {
        assert(index >= buf);
	radix_digit = big_digit;
        big_digit = *scan++;
	radix_digit |= (big_digit << big_digit_len) & radix_mask;
        *index-- = characters[radix_digit];
	big_digit >>= (radix_shift - big_digit_len);
        big_digit_len = C_BIGNUM_DIGIT_LENGTH - (radix_shift - big_digit_len);
      }

      while(big_digit_len >= radix_shift && index >= buf) {
	radix_digit = big_digit & radix_mask;
        *index-- = characters[radix_digit];
	big_digit >>= radix_shift;
	big_digit_len -= radix_shift;
      }
    }

    assert(big_digit < radix);

    /* Final digit (like overlap at start of while loop) */
    if (big_digit) *index-- = characters[big_digit];

    if (negp) {
      /* Loop above might've overwritten sign position with a zero */
      if (*(index+1) == '0') *(index+1) = '-';
      else *index-- = '-';
    }

    /* Length calculation is always precise for radix powers of two. */
    assert(index == buf-1);
  } else {
    C_uword base, *start, *scan, big_digit;
    C_word working_copy;
    int steps, i;

    working_copy = allocate_tmp_bignum(C_fix(C_bignum_size(bignum)),
                                       C_mk_bool(negp), C_SCHEME_FALSE);
    bignum_digits_destructive_copy(working_copy, bignum);

    start = C_bignum_digits(working_copy);

    scan = start + C_bignum_size(bignum);
    /* Calculate the largest power of radix that fits a halfdigit:
     * steps = log10(2^halfdigit_bits), base = 10^steps
     */
    for(steps = 0, base = radix; C_fitsinbignumhalfdigitp(base); base *= radix)
      steps++;

    base /= radix; /* Back down: we overshot in the loop */

    while (scan > start) {
      big_digit = bignum_digits_destructive_scale_down(start, scan, base);

      if (*(scan-1) == 0) scan--; /* Adjust if we exhausted the highest digit */

      for(i = 0; i < steps && index >= buf; ++i) {
	C_word tmp = big_digit / radix;
        *index-- = characters[big_digit - (tmp*radix)]; /* big_digit % radix */
        big_digit = tmp;
      }
    }
    assert(index >= buf-1);
    free_tmp_bignum(working_copy);

    /* Move index onto first nonzero digit.  We're writing a bignum
       here: it can't consist of only zeroes. */
    while(*++index == '0');
  
    if (negp) *--index = '-';
  
    /* Shorten with distance between start and index. */
    if (buf != index) {
      i = C_header_size(string) - (index - buf);
      C_memmove(buf, index, i); /* Move start of number to beginning. */
      C_block_header(string) = C_STRING_TYPE | i; /* Mutate strlength. */
    }
  }

  C_kontinue(k, string);
}

C_regparm double C_bignum_to_double(C_word bignum)
{
  double accumulator = 0;
  C_uword *start = C_bignum_digits(bignum),
          *scan = start + C_bignum_size(bignum);
  while (start < scan) {
    accumulator *= (C_word)1 << C_BIGNUM_HALF_DIGIT_LENGTH;
    accumulator *= (C_word)1 << C_BIGNUM_HALF_DIGIT_LENGTH;
    accumulator += (*--scan);
  }
  return(C_bignum_negativep(bignum) ? -accumulator : accumulator);
}

static void
fabs_frexp_to_digits(C_uword exp, double sign, C_uword *start, C_uword *scan)
{
  C_uword digit, odd_bits = exp % C_BIGNUM_DIGIT_LENGTH;

  assert(C_isfinite(sign));
  assert(0.5 <= sign && sign < 1); /* Guaranteed by frexp() and fabs() */
  assert((scan - start) == C_BIGNUM_BITS_TO_DIGITS(exp));
  
  if (odd_bits > 0) { /* Handle most significant digit first */
    sign *= (C_uword)1 << odd_bits;
    digit = (C_uword)sign;
    (*--scan) = digit;
    sign -= (double)digit;
  }

  while (start < scan && sign > 0) {
    sign *= pow(2.0, C_BIGNUM_DIGIT_LENGTH);
    digit = (C_uword)sign;
    (*--scan) = digit;
    sign -= (double)digit;
  }

  /* Finish up by clearing any remaining, lower, digits */
  while (start < scan)
    (*--scan) = 0;
}

static C_word
flo_to_tmp_bignum(C_word x)
{
  /* TODO: allocating and initialising the bignum is pointless if we
   * already know the number of limbs in the comparand.  In fact,
   * bignum_cmp will first check the number of limbs and *then*
   * compare.  Instead, we can check beforehand and check the limbs
   * directly against the generated limbs, without allocating at all!
   */
  C_word tmp_big, negp = C_mk_bool(C_flonum_magnitude(x) < 0.0);
  int exponent;
  double significand = frexp(C_flonum_magnitude(x), &exponent);

  assert(C_u_i_fpintegerp_fixed(x));

  if (exponent <= 0) {
    tmp_big = allocate_tmp_bignum(C_fix(0), C_SCHEME_FALSE, C_SCHEME_FALSE);
  } else if (exponent == 1) { /* TODO: check significand * 2^exp fits fixnum? */
    /* Don't use fix_to_big to simplify caller code: it can just free this */
    tmp_big = allocate_tmp_bignum(C_fix(1), negp, C_SCHEME_FALSE);
    C_bignum_digits(tmp_big)[0] = 1;
  } else {
    C_uword size, *start, *end;

    size = C_fix(C_BIGNUM_BITS_TO_DIGITS(exponent));

    tmp_big = allocate_tmp_bignum(size, negp, C_SCHEME_FALSE);
    start = C_bignum_digits(tmp_big);
    end = start + C_bignum_size(tmp_big);

    fabs_frexp_to_digits(exponent, fabs(significand), start, end);
  }
  return tmp_big;
}

void C_ccall CPS_PROC1(C_u_flo_to_int, c, self, k, x)
{
  CPS_BODY1(c, self, k, x);
  int exponent;
  double significand = frexp(C_flonum_magnitude(x), &exponent);

  assert(C_truep(C_u_i_fpintegerp_fixed(x)));

  if (exponent <= 0) {
    C_kontinue(k, C_fix(0));
  } else if (exponent == 1) { /* TODO: check significand * 2^exp fits fixnum? */
    C_kontinue(k, significand < 0.0 ? C_fix(-1) : C_fix(1));
  } else {
    C_word kab[C_SIZEOF_CLOSURE(4) + C_SIZEOF_FLONUM], *ka = kab, k2, size,
           negp = C_mk_bool(C_flonum_magnitude(x) < 0.0),
           sign = C_flonum(&ka, fabs(significand));

    k2 = C_closure(&ka, 4, (C_word)flo_to_int_2, k, C_fix(exponent), sign);

    size = C_fix(C_BIGNUM_BITS_TO_DIGITS(exponent));
    C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
  }
}

static void CONT_PROC(flo_to_int_2, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1);
  C_uword exponent = C_unfix(C_block_item(self, 2)),
          *start = C_bignum_digits(result),
          *scan = start + C_bignum_size(result);
  double significand = C_flonum_magnitude(C_block_item(self, 3));

  fabs_frexp_to_digits(exponent, significand, start, scan);
  C_kontinue(k, C_bignum_simplify(result));
}

C_word C_ccall
C_u_i_integer_length(C_word x)
{
  if (x & C_FIXNUM_BIT) {
    return C_u_i_fixnum_length(x);
  } else {
    C_uword result = (C_bignum_size(x) - 1) * C_BIGNUM_DIGIT_LENGTH,
            *last_digit = C_bignum_digits(x) + C_bignum_size(x) - 1,
            last_digit_length = C_ilen(*last_digit);

    /* If *only* the highest bit is set, negating will give one less bit */
    if (C_bignum_negativep(x) &&
        *last_digit == ((C_uword)1 << (last_digit_length-1))) {
      C_uword *startx = C_bignum_digits(x);
      while (startx < last_digit && *startx == 0) ++startx;
      if (startx == last_digit) result--;
    }
    return C_fix(result + last_digit_length);
  }
}

/* x is any exact integer but y is _always_ a fixnum */
void C_ccall CPS_PROC2(C_u_integer_shift, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab;

  y = C_unfix(y);
  if (y == 0 || x == C_fix(0)) { /* Done (no shift) */
    C_kontinue(k, x);
  } else if (x & C_FIXNUM_BIT) {
    if (y < 0) {
      /* Don't shift more than a word's length (that's undefined in C!) */
      if (-y < C_WORD_SIZE) {
        C_kontinue(k, C_fix(C_unfix(x) >> -y));
      } else {
        C_kontinue(k, (x < 0) ? C_fix(-1) : C_fix(0));
      }
    } else if (y > 0 && y < C_WORD_SIZE-2 &&
               /* After shifting, the length still fits a fixnum */
               (C_ilen(C_unfix(x)) + y) < C_WORD_SIZE-2) {
      C_kontinue(k, C_fix(C_unfix(x) << y));
    } else {
      x = C_a_u_i_fix_to_big(&a, x);
    }
  }

  {
    C_word ab[C_SIZEOF_CLOSURE(6)], *a = ab,
           k2, size, negp, digit_offset, bit_offset;

    negp = C_mk_bool(C_bignum_negativep(x));
  
    if (y > 0) { /* y is guaranteed not to be 0 here */
      digit_offset = y / C_BIGNUM_DIGIT_LENGTH;
      bit_offset =   y % C_BIGNUM_DIGIT_LENGTH;

      k2 = C_closure(&a, 6, (C_word)bignum_actual_shift, k,
                     x, C_SCHEME_TRUE, C_fix(digit_offset), C_fix(bit_offset));
      size = C_fix(C_bignum_size(x) + digit_offset + 1);
      C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
    } else if (-y >= C_bignum_size(x) * (C_word)C_BIGNUM_DIGIT_LENGTH) {
      /* All bits are shifted out, just return 0 or -1 */
      C_kontinue(k, C_truep(negp) ? C_fix(-1) : C_fix(0));
    } else {
      digit_offset = -y / C_BIGNUM_DIGIT_LENGTH;
      bit_offset =   -y % C_BIGNUM_DIGIT_LENGTH;
    
      k2 = C_closure(&a, 6, (C_word)bignum_actual_shift, k,
                     x, C_SCHEME_FALSE, C_fix(digit_offset), C_fix(bit_offset));

      size = C_fix(C_bignum_size(x) - digit_offset);
      C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
    }
  }
}

C_inline C_word maybe_negate_bignum_for_bitwise_op(C_word x, C_word size)
{
  C_word nx = C_SCHEME_FALSE, xsize;
  if (C_bignum_negativep(x)) {
    nx = allocate_tmp_bignum(C_fix(size), C_SCHEME_FALSE, C_SCHEME_FALSE);
    xsize = C_bignum_size(x);
    /* Copy up until requested size, and init any remaining upper digits */
    C_memcpy(C_bignum_digits(nx), C_bignum_digits(x),
             C_wordstobytes(nmin(size, xsize)));
    if (size > xsize)
      C_memset(C_bignum_digits(nx)+xsize, 0, C_wordstobytes(size-xsize));
    bignum_digits_destructive_negate(nx);
  }
  return nx;
}

static void CONT_PROC(bignum_actual_shift, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
         x = C_block_item(self, 2),
         shift_left = C_truep(C_block_item(self, 3)),
         digit_offset = C_unfix(C_block_item(self, 4)),
         bit_offset = C_unfix(C_block_item(self, 5));
  C_uword *startr = C_bignum_digits(result),
          *startx = C_bignum_digits(x),
          *endx = startx + C_bignum_size(x),
          *endr = startr + C_bignum_size(result);

  if (shift_left) {
    /* Initialize only the lower digits we're skipping and the MSD */
    C_memset(startr, 0, C_wordstobytes(digit_offset));
    *(endr-1) = 0;
    startr += digit_offset;
    /* Can't use bignum_digits_destructive_copy because it assumes
     * we want to copy from the start.
     */
    C_memcpy(startr, startx, C_wordstobytes(endx-startx));
    if(bit_offset > 0)
      bignum_digits_destructive_shift_left(startr, endr, bit_offset);
  } else {
    C_word nx, size = C_bignum_size(x) + 1;
    if (C_truep(nx = maybe_negate_bignum_for_bitwise_op(x, size))) {
      startx = C_bignum_digits(nx); /* update startx; x and endx are unused */
    }

    startx += digit_offset;
    /* Can't use bignum_digits_destructive_copy because that assumes
     * target is at least as big as source.
     */
    C_memcpy(startr, startx, C_wordstobytes(endr-startr));
    if(bit_offset > 0)
      bignum_digits_destructive_shift_right(startr,endr,bit_offset,C_truep(nx));

    if (C_truep(nx)) {
      free_tmp_bignum(nx);
      bignum_digits_destructive_negate(result);
    }
  }
  C_kontinue(k, C_bignum_simplify(result));
}

/* This is currently only used by Karatsuba multiplication and
 * Burnikel-Ziegler division.  It is not intended as a public API!
 */
void C_ccall
CPS_PROC3(C_u_bignum_extract_digits, c, self, k, x, start, end)
{
  CPS_BODY3(c, self, k, x, start, end);
  if (x & C_FIXNUM_BIT) { /* Needed? */
    if (C_unfix(start) == 0 && (end == C_SCHEME_FALSE || C_unfix(end) > 0)) {
      C_kontinue(k, x);
    } else {
      C_kontinue(k, C_fix(0));
    }
  } else {
    C_word negp, size;

    negp = C_mk_bool(C_bignum_negativep(x)); /* Always false */

    start = C_unfix(start);
    /* We might get passed larger values than actually fits; pad w/ zeroes */
    if (end == C_SCHEME_FALSE) end = C_bignum_size(x);
    else end = nmin(C_unfix(end), C_bignum_size(x));
    assert(start >= 0);

    size = end - start;

    if (size == 0 || start >= C_bignum_size(x)) {
      C_kontinue(k, C_fix(0));
    } else {
      C_word k2, kab[C_SIZEOF_CLOSURE(5)], *ka = kab;
      k2 = C_closure(&ka, 5, (C_word)bignum_actual_extraction,
                     k, x, C_fix(start), C_fix(end));
      C_allocate_bignum(5, (C_word)NULL, k2, C_fix(size), negp, C_SCHEME_FALSE);
    }
  }
}

static void CONT_PROC(bignum_actual_extraction, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
         x = C_block_item(self, 2),
         start = C_unfix(C_block_item(self, 3)),
         end = C_unfix(C_block_item(self, 4));
  C_uword *result_digits = C_bignum_digits(result),
          *x_digits = C_bignum_digits(x);

  /* Can't use bignum_digits_destructive_copy because that assumes
   * target is at least as big as source.
   */
  C_memcpy(result_digits, x_digits + start, C_wordstobytes(end-start));
  C_kontinue(k, C_bignum_simplify(result));
}

C_regparm C_word C_ccall C_u_i_integer_randomize(C_word seed)
{
  /* TODO: Rename C_randomize to C_u_i_fixnum_randomize */
  if (seed & C_FIXNUM_BIT) {
    return C_randomize(seed);
  } else {
    /*
     * This random number generator is very simple. Probably too simple...
     */
    C_uword *scan = C_bignum_digits(seed),
            *end = scan + C_bignum_size(seed), iseed = 0;

    /* What a cheap way to initialize the random generator. I feel dirty! */
    while (scan < end)
      iseed ^= *scan++;

    srand(iseed);
    return C_SCHEME_UNDEFINED;
  }
}

void C_ccall CPS_PROC1(C_u_integer_random, c, self, k, max)
{
  CPS_BODY1(c, self, k, max);
  /* TODO: for consistency C_random_fixnum should be called C_u_i_fixnum_random */
  if (max & C_FIXNUM_BIT) {
    C_kontinue(k, C_random_fixnum(max));
  } else {
    C_word k2, kab[C_SIZEOF_CLOSURE(4)], *ka = kab, size,
           max_len, max_bits, max_top_digit, d, negp;

    max_len = C_bignum_size(max);
    max_top_digit = d = C_bignum_digits(max)[max_len - 1];
  
    max_bits = (max_len - 1) * C_BIGNUM_DIGIT_LENGTH;
    while(d) {
      max_bits++;
      d >>= 1;
    }
    /* Subtract/add one because we don't want zero to be over-represented */
    size = ((double)rand())/(RAND_MAX + 1.0) * (double)(max_bits - 1);
    size = C_fix(C_BIGNUM_BITS_TO_DIGITS(size + 1));

    negp = C_mk_bool(C_bignum_negativep(max));
    k2 = C_closure(&ka, 4, (C_word)bignum_random_2, k, C_fix(max_top_digit), C_fix(max_len));
    C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
  }
}

static void CONT_PROC(bignum_random_2, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
         max_top_digit = C_unfix(C_block_item(self, 2)),
         max_len = C_unfix(C_block_item(self, 3));
  C_uword *scan = C_bignum_digits(result),
          *end = scan + C_bignum_size(result); /* Go to just before the end. */

  while(scan < end)
    *scan++ = ((double)rand())/(RAND_MAX + 1.0) * pow(2.0, C_BIGNUM_DIGIT_LENGTH);
  /*
   * Last word is special when length is max_len: It must be less than
   * max's most significant digit, instead of 2^{digitlen}.
   */
  if (max_len == C_bignum_size(result))
    *scan = ((double)rand())/(RAND_MAX + 1.0) * (double)max_top_digit;
  else
    *scan = ((double)rand())/(RAND_MAX + 1.0) * pow(2.0, C_BIGNUM_DIGIT_LENGTH);

  C_kontinue(k, C_bignum_simplify(result));
}

C_word C_ccall
C_u_i_integer_bit_setp(C_word n, C_word i)
{
  if (!(i & C_FIXNUM_BIT)) { /* A bit silly, but might be useful */
    return C_u_i_integer_negativep(n);
  } else if (i & C_INT_SIGN_BIT) {
    barf(C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR, "bit-set?", n, i);
  } else {
    i = C_unfix(i);
    if (n & C_FIXNUM_BIT) {
      if (i >= C_WORD_SIZE) return C_mk_bool(n & C_INT_SIGN_BIT);
      else return C_mk_bool((C_unfix(n) & ((C_word)1 << i)) != 0);
    } else {
      C_word nn, d;
      d = i / C_BIGNUM_DIGIT_LENGTH;
      if (d >= C_bignum_size(n)) return C_mk_bool(C_bignum_negativep(n));

      if (C_truep(nn = maybe_negate_bignum_for_bitwise_op(n, d))) n = nn;

      i %= C_BIGNUM_DIGIT_LENGTH;
      d = C_mk_bool((C_bignum_digits(n)[d] & (C_uword)1 << i) != 0);
      if (C_truep(nn)) free_tmp_bignum(nn);
      return d;
    }
  }
}

void C_ccall CPS_PROC2(C_u_2_integer_bitwise_and, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if ((x & y) & C_FIXNUM_BIT) {
    C_kontinue(k, C_u_fixnum_and(x, y));
  } else {
    C_word kab[C_SIZEOF_FIX_BIGNUM*2], *ka = kab, negp, size, k2;
    if (x & C_FIXNUM_BIT) x = C_a_u_i_fix_to_big(&ka, x);
    if (y & C_FIXNUM_BIT) y = C_a_u_i_fix_to_big(&ka, y);

    negp = C_mk_bool(C_bignum_negativep(x) && C_bignum_negativep(y));
    /* Allow negative 1-bits to propagate */
    if (C_bignum_negativep(x) || C_bignum_negativep(y))
      size = nmax(C_bignum_size(x), C_bignum_size(y)) + 1;
    else
      size = nmin(C_bignum_size(x), C_bignum_size(y));

    ka = C_alloc(C_SIZEOF_CLOSURE(4)); /* Why faster than static alloc? */
    k2 = C_closure(&ka, 4, (C_word)bignum_bitwise_and_2, k, x, y);
    C_allocate_bignum(5, (C_word)NULL, k2, C_fix(size), negp, C_SCHEME_FALSE);
  }
}

static void CONT_PROC(bignum_bitwise_and_2, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
	 x = C_block_item(self, 2),
	 y = C_block_item(self, 3),
         size = C_bignum_size(result), nx, ny;
  C_uword *scanr = C_bignum_digits(result),
          *endr = scanr + C_bignum_size(result),
          *scans1, *ends1, *scans2;

  if (C_truep(nx = maybe_negate_bignum_for_bitwise_op(x, size))) x = nx;
  if (C_truep(ny = maybe_negate_bignum_for_bitwise_op(y, size))) y = ny;

  if (C_bignum_size(x) < C_bignum_size(y)) {
    scans1 = C_bignum_digits(x); ends1 = scans1 + C_bignum_size(x);
    scans2 = C_bignum_digits(y);
  } else {
    scans1 = C_bignum_digits(y); ends1 = scans1 + C_bignum_size(y);
    scans2 = C_bignum_digits(x);
  }

  while (scans1 < ends1) *scanr++ = *scans1++ & *scans2++;
  C_memset(scanr, 0, C_wordstobytes(endr - scanr));

  if (C_truep(nx)) free_tmp_bignum(nx);
  if (C_truep(ny)) free_tmp_bignum(ny);
  if (C_bignum_negativep(result)) bignum_digits_destructive_negate(result);

  C_kontinue(k, C_bignum_simplify(result));
}

void C_ccall CPS_PROC2(C_u_2_integer_bitwise_ior, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if ((x & y) & C_FIXNUM_BIT) {
    C_kontinue(k, C_u_fixnum_or(x, y));
  } else {
    C_word kab[C_SIZEOF_FIX_BIGNUM*2], *ka = kab, negp, size, k2;
    if (x & C_FIXNUM_BIT) x = C_a_u_i_fix_to_big(&ka, x);
    if (y & C_FIXNUM_BIT) y = C_a_u_i_fix_to_big(&ka, y);

    ka = C_alloc(C_SIZEOF_CLOSURE(4)); /* Why faster than static alloc? */
    k2 = C_closure(&ka, 4, (C_word)bignum_bitwise_ior_2, k, x, y);
    size = C_fix(nmax(C_bignum_size(x), C_bignum_size(y)) + 1);
    negp = C_mk_bool(C_bignum_negativep(x) || C_bignum_negativep(y));
    C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
  }
}

static void CONT_PROC(bignum_bitwise_ior_2, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
	 x = C_block_item(self, 2),
	 y = C_block_item(self, 3),
         size = C_bignum_size(result), nx, ny;
  C_uword *scanr = C_bignum_digits(result),
          *endr = scanr + C_bignum_size(result),
          *scans1, *ends1, *scans2, *ends2;

  if (C_truep(nx = maybe_negate_bignum_for_bitwise_op(x, size))) x = nx;
  if (C_truep(ny = maybe_negate_bignum_for_bitwise_op(y, size))) y = ny;

  if (C_bignum_size(x) < C_bignum_size(y)) {
    scans1 = C_bignum_digits(x); ends1 = scans1 + C_bignum_size(x);
    scans2 = C_bignum_digits(y); ends2 = scans2 + C_bignum_size(y);
  } else {
    scans1 = C_bignum_digits(y); ends1 = scans1 + C_bignum_size(y);
    scans2 = C_bignum_digits(x); ends2 = scans2 + C_bignum_size(x);
  }

  while (scans1 < ends1) *scanr++ = *scans1++ | *scans2++;
  while (scans2 < ends2) *scanr++ = *scans2++;
  if (scanr < endr) *scanr++ = 0; /* Only done when result is positive */
  assert(scanr == endr);

  if (C_truep(nx)) free_tmp_bignum(nx);
  if (C_truep(ny)) free_tmp_bignum(ny);
  if (C_bignum_negativep(result)) bignum_digits_destructive_negate(result);

  C_kontinue(k, C_bignum_simplify(result));
}

void C_ccall CPS_PROC2(C_u_2_integer_bitwise_xor, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if ((x & y) & C_FIXNUM_BIT) {
    C_kontinue(k, C_fixnum_xor(x, y));
  } else {
    C_word kab[C_SIZEOF_FIX_BIGNUM*2], *ka = kab, size, k2, negp;
    if (x & C_FIXNUM_BIT) x = C_a_u_i_fix_to_big(&ka, x);
    if (y & C_FIXNUM_BIT) y = C_a_u_i_fix_to_big(&ka, y);

    ka = C_alloc(C_SIZEOF_CLOSURE(4)); /* Why faster than static alloc? */
    k2 = C_closure(&ka, 4, (C_word)bignum_bitwise_xor_2, k, x, y);
    size = C_fix(nmax(C_bignum_size(x), C_bignum_size(y)) + 1);
    negp = C_mk_bool(C_bignum_negativep(x) != C_bignum_negativep(y));
    C_allocate_bignum(5, (C_word)NULL, k2, size, negp, C_SCHEME_FALSE);
  }
}

static void CONT_PROC(bignum_bitwise_xor_2, c, self, result)
{
  CONT_BODY(self, result);
  C_word k = C_block_item(self, 1),
	 x = C_block_item(self, 2),
	 y = C_block_item(self, 3),
         size = C_bignum_size(result), nx, ny;
  C_uword *scanr = C_bignum_digits(result),
          *endr = scanr + C_bignum_size(result),
          *scans1, *ends1, *scans2, *ends2;

  if (C_truep(nx = maybe_negate_bignum_for_bitwise_op(x, size))) x = nx;
  if (C_truep(ny = maybe_negate_bignum_for_bitwise_op(y, size))) y = ny;

  if (C_bignum_size(x) < C_bignum_size(y)) {
    scans1 = C_bignum_digits(x); ends1 = scans1 + C_bignum_size(x);
    scans2 = C_bignum_digits(y); ends2 = scans2 + C_bignum_size(y);
  } else {
    scans1 = C_bignum_digits(y); ends1 = scans1 + C_bignum_size(y);
    scans2 = C_bignum_digits(x); ends2 = scans2 + C_bignum_size(x);
  }

  while (scans1 < ends1) *scanr++ = *scans1++ ^ *scans2++;
  while (scans2 < ends2) *scanr++ = *scans2++;
  if (scanr < endr) *scanr++ = 0; /* Only done when result is positive */
  assert(scanr == endr);

  if (C_truep(nx)) free_tmp_bignum(nx);
  if (C_truep(ny)) free_tmp_bignum(ny);
  if (C_bignum_negativep(result)) bignum_digits_destructive_negate(result);

  C_kontinue(k, C_bignum_simplify(result));
}

static void bignum_digits_destructive_negate(C_word result)
{
  C_uword *scan, *end, digit, sum;

  scan = C_bignum_digits(result);
  end = scan + C_bignum_size(result);

  do {
    digit = ~*scan;
    sum = digit + 1;
    *scan++ = sum;
  } while (sum == 0 && scan < end);

  for (; scan < end; scan++) {
    *scan = ~*scan;
  }
}

/* This is ugly but really cleans up the code below */
#define RETURN_Q_AND_OR_R(calc_q, calc_r)                 \
  if (C_truep(C_and(return_q, return_r))) {               \
    C_kontinue2(k, calc_q, calc_r);                       \
  } else if (C_truep(return_r)) {                         \
    C_kontinue(k, calc_r);                                \
  } else {                                                \
    C_kontinue(k, calc_q);                                \
  }

/* Lossy; we could be in "quotient&remainder" or "modulo" */
#define DIVREM_LOC ((C_truep(C_and(return_q, return_r))) ? "/" :	\
                    (C_truep(return_q) ? "quotient" : "remainder"))

static C_regparm void
basic_divrem(C_word k, C_word x, C_word y, C_word return_q, C_word return_r)
{
  if (x & C_FIXNUM_BIT) {
    if (y & C_FIXNUM_BIT) {
      C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab;
      if (y == C_fix(0)) numbers_div_by_zero_error(DIVREM_LOC);

      RETURN_Q_AND_OR_R(C_a_u_i_fixnum_quotient_checked(&a, 2, x, y),
                        C_u_i_fixnum_remainder_checked(x, y));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, DIVREM_LOC, y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_word ab[C_SIZEOF_FLONUM*3], *a = ab;
      if (C_flonum_magnitude(y) == 0.0) numbers_div_by_zero_error(DIVREM_LOC);

      x = C_a_i_fix_to_flo(&a, 1, x);
      RETURN_Q_AND_OR_R(C_a_i_flonum_actual_quotient_checked(&a, 2, x, y),
                        C_a_i_flonum_remainder_checked(&a, 2, x, y));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      integer_divrem(k, x, y, return_q, return_r);
    } else {
      barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, DIVREM_LOC, y);
    }
  } else if (C_immediatep(x)) {
    barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, DIVREM_LOC, x);
  } else if (C_block_header(x) == C_FLONUM_TAG) {
    if (!C_truep(C_u_i_fpintegerp_fixed(x))) {
      barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, DIVREM_LOC, x);
    } else if (y & C_FIXNUM_BIT) {
      C_word ab[C_SIZEOF_FLONUM*3], *a = ab;
      if (y == C_fix(0)) numbers_div_by_zero_error(DIVREM_LOC);

      y = C_a_i_fix_to_flo(&a, 1, y);
      RETURN_Q_AND_OR_R(C_a_i_flonum_actual_quotient_checked(&a, 2, x, y),
                        C_a_i_flonum_remainder_checked(&a, 2, x, y));
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, DIVREM_LOC, y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      C_word ab[C_SIZEOF_FLONUM*2], *a = ab;
      if (C_flonum_magnitude(y) == 0.0) numbers_div_by_zero_error(DIVREM_LOC);

      RETURN_Q_AND_OR_R(C_a_i_flonum_actual_quotient_checked(&a, 2, x, y),
                        C_a_i_flonum_remainder_checked(&a, 2, x, y));
    } else if (C_IS_BIGNUM_TYPE(y)) {
      C_word k2, ab[C_SIZEOF_CLOSURE(3)], *a = ab;
      x = flo_to_tmp_bignum(x);
      k2 = C_closure(&a, 3, (C_word)divrem_intflo_2, k, x);
      integer_divrem(k2, x, y, return_q, return_r);
    } else {
      barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, DIVREM_LOC, y);
    }
  } else if (C_IS_BIGNUM_TYPE(x)) {
    if (y & C_FIXNUM_BIT) {
      integer_divrem(k, x, y, return_q, return_r);
    } else if (C_immediatep(y)) {
      barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, DIVREM_LOC, y);
    } else if (C_block_header(y) == C_FLONUM_TAG) {
      if (!C_truep(C_u_i_fpintegerp_fixed(y))) {
        barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, DIVREM_LOC, y);
      } else if (C_flonum_magnitude(y) == 0.0) {
        numbers_div_by_zero_error(DIVREM_LOC);
      } else {
        C_word k2, ab[C_SIZEOF_CLOSURE(3)], *a = ab;
        y = flo_to_tmp_bignum(y);
        k2 = C_closure(&a, 3, (C_word)divrem_intflo_2, k, y);
        integer_divrem(k2, x, y, return_q, return_r);
      }
    } else if (C_IS_BIGNUM_TYPE(y)) {
      bignum_divrem(k, x, y, return_q, return_r);
    } else {
      barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, DIVREM_LOC, y);
    }
  } else {
    barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, DIVREM_LOC, x);
  }
}

static void CONT_PROCN(divrem_intflo_2, c, self)
{
  CONT_BODYN(c, self);
  C_word k = C_block_item(self, 1), x, y;
#ifndef ARGVECTOR_CHICKEN
  va_list v;
#endif

  free_tmp_bignum(C_block_item(self, 2));
  
#ifndef ARGVECTOR_CHICKEN
  va_start(v, self);
#endif
  if (c == 2) {
    C_word ab[C_SIZEOF_FLONUM], *a = ab;
#ifdef ARGVECTOR_CHICKEN
    x = __av[1];
#else
    x = va_arg(v, C_word);
    va_end(v);
#endif
    if (x & C_FIXNUM_BIT) x = C_a_i_fix_to_flo(&a, 1, x);
    else x = C_a_u_i_big_to_flo(&a, 1, x);
    C_kontinue(k, x);
  } else { /* c == 3 */
    C_word ab[C_SIZEOF_FLONUM*2], *a = ab;
#ifdef ARGVECTOR_CHICKEN
    x = __av[1];
    y = __av[2];
#else
    x = va_arg(v, C_word);
    y = va_arg(v, C_word);
    va_end(v);
#endif
    
    if (x & C_FIXNUM_BIT) x = C_a_i_fix_to_flo(&a, 1, x);
    else x = C_a_u_i_big_to_flo(&a, 1, x);
    if (y & C_FIXNUM_BIT) y = C_a_i_fix_to_flo(&a, 1, y);
    else y = C_a_u_i_big_to_flo(&a, 1, y);
    C_kontinue2(k, x, y);
  }
}

static void CONT_PROC(bignum_divrem_fixnum_2, c, self, negated_big)
{
   CONT_BODY(self, negated_big);
   C_word k = C_block_item(self, 1),
          return_q = C_block_item(self, 2),
          return_r = C_block_item(self, 3);
   RETURN_Q_AND_OR_R(negated_big, C_fix(0));
}

static C_regparm void
integer_divrem(C_word k, C_word x, C_word y, C_word return_q, C_word return_r)
{
  if (!(y & C_FIXNUM_BIT)) { /* y is bignum. */
    if (x & C_FIXNUM_BIT) {
      /* abs(x) < abs(y), so it will always be [0, x] except for this case: */
      if (x == C_fix(C_MOST_NEGATIVE_FIXNUM) &&
          C_bignum_negated_fitsinfixnump(y)) {
	RETURN_Q_AND_OR_R(C_fix(-1), C_fix(0));
      } else {
	RETURN_Q_AND_OR_R(C_fix(0), x);
      }
    } else {
      bignum_divrem(k, x, y, return_q, return_r);
    }
  } else if (x & C_FIXNUM_BIT) { /* both x and y are fixnum. */
    C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab;
    if (y == C_fix(0)) numbers_div_by_zero_error(DIVREM_LOC);

    RETURN_Q_AND_OR_R(C_a_u_i_fixnum_quotient_checked(&a, 2, x, y),
                      C_u_i_fixnum_remainder_checked(x, y));
  } else { /* x is bignum, y is fixnum. */
    C_word absy = (y & C_INT_SIGN_BIT) ? -C_unfix(y) : C_unfix(y);

    if (y == C_fix(1)) {
      RETURN_Q_AND_OR_R(x, C_fix(0));
    } else if (y == C_fix(0)) {
      numbers_div_by_zero_error(DIVREM_LOC);
    } else if (y == C_fix(-1)) {
      C_word *ka, k2;
      ka = C_alloc(C_SIZEOF_CLOSURE(4));
      k2 = C_closure(&ka, 4, (C_word)bignum_divrem_fixnum_2,
                     k, return_q, return_r);
      CPS_CALL(C_u_integer_negate, 3, (C_word)NULL, k2, x);
    } else if (C_fitsinbignumhalfdigitp(absy) ||
               ((((C_uword)1 << (C_ilen(absy)-1)) == absy) &&
                C_fitsinfixnump(absy))) {
      if (C_truep(return_q)) {
        C_word q_negp = C_mk_bool((y & C_INT_SIGN_BIT) ?
                                  !(C_bignum_negativep(x)) :
                                  C_bignum_negativep(x)),
                r_negp = C_mk_bool(C_bignum_negativep(x)),
                *ka, k2, size;
	ka = C_alloc(C_SIZEOF_CLOSURE(7));
        size = C_fix(C_bignum_size(x));
        k2 = C_closure(&ka, 7,
                       (C_word)bignum_destructive_divide_unsigned_small,
                       k, x, C_fix(absy),
                       return_q, return_r, r_negp);
        C_allocate_bignum(5, (C_word)NULL, k2, size, q_negp, C_SCHEME_FALSE);
      } else {
        C_word rem;
	C_uword next_power = (C_uword)1 << (C_ilen(absy)-1);

	if (next_power == absy) { /* Is absy a power of two? */
          rem = *(C_bignum_digits(x)) & (next_power - 1);
        } else { /* Too bad, we have to do some real work */
          rem = bignum_remainder_unsigned_halfdigit(x, absy);
	}
        C_kontinue(k, C_bignum_negativep(x) ? C_fix(-rem) : C_fix(rem));
      }
    } else {			/* Just divide it as two bignums */
      C_word ab[C_SIZEOF_FIX_BIGNUM], *a = ab;
      bignum_divrem(k, x, C_a_u_i_fix_to_big(&a, y), return_q, return_r);
    }
  }
}

static C_regparm void
bignum_divrem(C_word k, C_word x, C_word y, C_word return_q, C_word return_r)
{
  C_word q_negp = C_mk_bool(C_bignum_negativep(y) ?
                            !C_bignum_negativep(x) :
                            C_bignum_negativep(x)),
         r_negp = C_mk_bool(C_bignum_negativep(x)), size;

  switch(bignum_cmp_unsigned(x, y)) {
  case 0:
    RETURN_Q_AND_OR_R(C_truep(q_negp) ? C_fix(-1) : C_fix(1), C_fix(0));
  case -1:
    RETURN_Q_AND_OR_R(C_fix(0), x);
  case 1:
  default:
    size = C_bignum_size(x) - C_bignum_size(y);
    if (C_bignum_size(y) > C_BURNIKEL_ZIEGLER_THRESHOLD &&
	size > C_BURNIKEL_ZIEGLER_THRESHOLD) {
      try_extended_number("numbers#@bignum-2-divrem-burnikel-ziegler", 5,
			  k, x, y, return_q, return_r);
    } else if (C_truep(return_q)) {
      C_word kab[C_SIZEOF_CLOSURE(6)], *ka = kab, k2;
      k2 = C_closure(&ka, 6, (C_word)bignum_divide_2_unsigned, k,
		     x, y, return_r, r_negp);
      size = C_fix(C_bignum_size(x) + 1 - C_bignum_size(y));
      C_allocate_bignum(5, (C_word)NULL, k2, size, q_negp, C_SCHEME_FALSE);
    } else { /* We can skip bignum_divide_2_unsigned if we need no quotient */
      C_word kab[C_SIZEOF_CLOSURE(7)], *ka = kab, k2;
      k2 = C_closure(&ka, 7, (C_word)bignum_divide_2_unsigned_2, k,
		     x, y, return_q, return_r, C_SCHEME_UNDEFINED);
      size = C_fix(C_bignum_size(x) + 1); /* May need to be normalized */
      C_allocate_bignum(5, (C_word)NULL, k2, size, r_negp, C_SCHEME_FALSE);
    }
  }
}

static C_word
bignum_remainder_unsigned_halfdigit(C_word num, C_word den)
{
  C_uword *start = C_bignum_digits(num),
          *scan = start + C_bignum_size(num),
          rem = 0, two_digits;

  assert((den > 1) && (C_fitsinbignumhalfdigitp(den)));
  while (start < scan) {
    two_digits = (*--scan);
    rem = C_BIGNUM_DIGIT_COMBINE(rem, C_BIGNUM_DIGIT_HI_HALF(two_digits)) % den;
    rem = C_BIGNUM_DIGIT_COMBINE(rem, C_BIGNUM_DIGIT_LO_HALF(two_digits)) % den;
  }
  return rem;
}

/* External interface for the above internal divrem functions */
void C_ccall CPS_PROC2(C_basic_divrem, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if (c != 4) C_bad_argc_2(c, 4, self);
  basic_divrem(k, x, y, C_SCHEME_TRUE, C_SCHEME_TRUE);
}

void C_ccall CPS_PROC2(C_u_integer_divrem, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  integer_divrem(k, x, y, C_SCHEME_TRUE, C_SCHEME_TRUE);
}

void C_ccall CPS_PROC2(C_basic_remainder, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if (c != 4) C_bad_argc_2(c, 4, self);
  basic_divrem(k, x, y, C_SCHEME_FALSE, C_SCHEME_TRUE);
}

void C_ccall CPS_PROC2(C_u_integer_remainder, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  integer_divrem(k, x, y, C_SCHEME_FALSE, C_SCHEME_TRUE);
}

void C_ccall CPS_PROC2(C_basic_quotient, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  if (c != 4) C_bad_argc_2(c, 4, self);
  basic_divrem(k, x, y, C_SCHEME_TRUE, C_SCHEME_FALSE);
}

void C_ccall CPS_PROC2(C_u_integer_quotient, c, self, k, x, y)
{
  CPS_BODY2(c, self, k, x, y);
  integer_divrem(k, x, y, C_SCHEME_TRUE, C_SCHEME_FALSE);
}

/* "small" is either a number that fits a halfdigit, or a power of two */
static void CONT_PROC(bignum_destructive_divide_unsigned_small,
		      c, self, quotient)
{
  CONT_BODY(self, quotient);
  C_word k = C_block_item(self, 1),
         numerator = C_block_item(self, 2),
         denominator = C_unfix(C_block_item(self, 3)),
         /* return_quotient = C_block_item(self, 4), */
         return_remainder = C_block_item(self, 5),
         remainder_negp = C_block_item(self, 6);
  C_uword *start = C_bignum_digits(quotient),
          *end = start + C_bignum_size(quotient),
          remainder;
  int shift_amount;

  bignum_digits_destructive_copy(quotient, numerator);

  shift_amount = C_ilen(denominator)-1;
  if (((C_uword)1 << shift_amount) == denominator) { /* Power of two?  Shift! */
    remainder = bignum_digits_destructive_shift_right(start,end,shift_amount,0);
    assert(C_ufitsinfixnump(remainder));
  } else {
    remainder = bignum_digits_destructive_scale_down(start, end, denominator);
    assert(C_fitsinbignumhalfdigitp(remainder));
  }

  quotient = C_bignum_simplify(quotient);

  if (C_truep(return_remainder)) {
    remainder = C_truep(remainder_negp) ? -remainder : remainder;
    C_kontinue2(k, quotient, C_fix(remainder));
  } else {
    C_kontinue(k, quotient);
  }
}


/* Full bignum division */

static void CONT_PROC(bignum_divide_2_unsigned, c, self, quotient)
{
  CONT_BODY(self, quotient);
  C_word k = C_block_item(self, 1),
         x = C_block_item(self, 2),
         y = C_block_item(self, 3),
	 size = C_fix(C_bignum_size(x) + 1),
         return_r = C_block_item(self, 4),
         r_negp = C_block_item(self, 5),
         kab[C_SIZEOF_CLOSURE(7)], *ka = kab, k2;

  k2 = C_closure(&ka, 7, (C_word)bignum_divide_2_unsigned_2, k,
		 x, y, C_SCHEME_TRUE, return_r, quotient);
  C_allocate_bignum(5, (C_word)NULL, k2, size, r_negp, C_SCHEME_FALSE);
}

/* For help understanding this algorithm, see:
   Knuth, Donald E., "The Art of Computer Programming",
   volume 2, "Seminumerical Algorithms"
   section 4.3.1, "Multiple-Precision Arithmetic".

   [Yeah, that's a nice book but that particular section is not
   helpful at all, which is also pointed out by P. Brinch Hansen's
   "Multiple-Length Division Revisited: A Tour Of The Minefield".
   That's a more down-to-earth step-by-step explanation of the
   algorithm.  Add to this the C implementation in Hacker's Delight
   (section 9-2, p141--142) and you may be able to grok this...
   ...barely, if you're as math-challenged as I am -- sjamaan]
*/

static void CONT_PROC(bignum_divide_2_unsigned_2, c, self, remainder)
{
  CONT_BODY(self, remainder);
  C_word k = C_block_item(self, 1),
         numerator = C_block_item(self, 2),
         denominator = C_block_item(self, 3),
         return_quotient = C_block_item(self, 4),
         return_remainder = C_block_item(self, 5),
         quotient = C_block_item(self, 6),
	 length = C_bignum_size(denominator);
  C_uword d1 = *(C_bignum_digits(denominator) + length - 1),
          *startr = C_bignum_digits(remainder),
          *endr = startr + C_bignum_size(remainder);
  int shift;

  shift = C_BIGNUM_DIGIT_LENGTH - C_ilen(d1); /* nlz */

  /* We have to work on halfdigits, so we shift out only the necessary
   * amount in order fill out that halfdigit (base is halved).
   * This trick is shamelessly stolen from Gauche :)
   * See below for part 2 of the trick.
   */
  if (shift >= C_BIGNUM_HALF_DIGIT_LENGTH)
    shift -= C_BIGNUM_HALF_DIGIT_LENGTH;

  /* Code below won't always set high halfdigit of quotient, so do it here. */
  if (quotient != C_SCHEME_UNDEFINED)
    C_bignum_digits(quotient)[C_bignum_size(quotient)-1] = 0;

  bignum_digits_destructive_copy(remainder, numerator);
  *(endr-1) = 0;    /* Ensure most significant digit is initialised */
  if (shift == 0) { /* Already normalized */
    bignum_destructive_divide_normalized(remainder, denominator, quotient);
  } else { /* Requires normalisation; allocate scratch denominator for this */
    C_uword *startnd;
    C_word ndenom;

    bignum_digits_destructive_shift_left(startr, endr, shift);

    ndenom = allocate_tmp_bignum(C_fix(length), C_SCHEME_FALSE, C_SCHEME_FALSE);
    startnd = C_bignum_digits(ndenom);
    bignum_digits_destructive_copy(ndenom, denominator);
    bignum_digits_destructive_shift_left(startnd, startnd+length, shift);

    bignum_destructive_divide_normalized(remainder, ndenom, quotient);
    if (C_truep(return_remainder)) /* Otherwise, don't bother shifting back */
      bignum_digits_destructive_shift_right(startr, endr, shift, 0);

    free_tmp_bignum(ndenom);
  }

  if (C_truep(return_remainder)) {
    if (C_truep(return_quotient)) {
      C_kontinue2(k, C_bignum_simplify(quotient),
		  C_bignum_simplify(remainder));
    } else {
      C_kontinue(k, C_bignum_simplify(remainder));
    }
  } else {
    assert(C_truep(return_quotient));
    C_kontinue(k, C_bignum_simplify(quotient));
  }
}

static void
bignum_destructive_divide_normalized(C_word big_u, C_word big_v, C_word big_q)
{
  C_uword *v = C_bignum_digits(big_v),
          *u = C_bignum_digits(big_u),
          *q = big_q == C_SCHEME_UNDEFINED ? NULL : C_bignum_digits(big_q),
           p,               /* product of estimated quotient & "denominator" */
           hat, qhat, rhat, /* estimated quotient and remainder digit */
           vn_1, vn_2;      /* "cached" values v[n-1], v[n-2] */
  C_word t, k;              /* Two helpers: temp/final remainder and "borrow" */
  /* We use plain ints here, which theoretically may not be enough on
   * 64-bit for an insanely huge number, but it is a _lot_ faster.
   */
  int n = C_bignum_size(big_v) * 2,       /* in halfwords */
      m = (C_bignum_size(big_u) * 2) - 2; /* Correct for extra digit */
  int i, j;		   /* loop  vars */

  /* Part 2 of Gauche's aforementioned trick: */
  if (C_uhword_ref(v, n-1) == 0) n--;

  /* These won't change during the loop, but are used in every step. */
  vn_1 = C_uhword_ref(v, n-1);
  vn_2 = C_uhword_ref(v, n-2);

  /* See also Hacker's Delight, Figure 9-1.  This is almost exactly that. */
  for (j = m - n; j >= 0; j--) {
    hat = C_BIGNUM_DIGIT_COMBINE(C_uhword_ref(u, j+n), C_uhword_ref(u, j+n-1));
    if (hat == 0) {
      if (q != NULL) C_uhword_set(q, j, 0);
      continue;
    }
    qhat = hat / vn_1;
    rhat = hat % vn_1;

    /* Two whiles is faster than one big check with an OR.  Thanks, Gauche! */
    while(qhat >= (1L << C_BIGNUM_HALF_DIGIT_LENGTH)) { qhat--; rhat += vn_1; }
    while(qhat * vn_2 > C_BIGNUM_DIGIT_COMBINE(rhat, C_uhword_ref(u, j+n-2))
	  && rhat < (1L << C_BIGNUM_HALF_DIGIT_LENGTH)) {
      qhat--;
      rhat += vn_1;
    }

    /* Multiply and subtract */
    k = 0;
    for (i = 0; i < n; i++) {
      p = qhat * C_uhword_ref(v, i);
      t = C_uhword_ref(u, i+j) - k - C_BIGNUM_DIGIT_LO_HALF(p);
      C_uhword_set(u, i+j, t);
      k = C_BIGNUM_DIGIT_HI_HALF(p) - (t >> C_BIGNUM_HALF_DIGIT_LENGTH);
    }
    t = C_uhword_ref(u,j+n) - k;
    C_uhword_set(u, j+n, t);

    if (t < 0) {		/* Subtracted too much? */
      qhat--;
      k = 0;
      for (i = 0; i < n; i++) {
        t = (C_uword)C_uhword_ref(u, i+j) + C_uhword_ref(v, i) + k;
        C_uhword_set(u, i+j, t);
	k = t >> C_BIGNUM_HALF_DIGIT_LENGTH;
      }
      C_uhword_set(u, j+n, (C_uhword_ref(u, j+n) + k));
    }
    if (q != NULL) C_uhword_set(q, j, qhat);
  } /* end j */
}

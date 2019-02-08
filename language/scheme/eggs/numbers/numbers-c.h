/* numbers-c.h */

/* C_cpsproc is only defined for argvector chickens */
#ifdef C_cpsproc
# define ARGVECTOR_CHICKEN
#endif

/* Compat helpers for extracting procedure args in a common way */
#ifdef ARGVECTOR_CHICKEN
# define C_kontinue2(k, r1, r2)						\
  do {									\
    C_word avk[ 4 ];							\
    avk[ 0 ] = C_SCHEME_UNDEFINED;					\
    avk[ 1 ] = (k);							\
    avk[ 2 ] = (r1);							\
    avk[ 3 ] = (r2);							\
    C_values(4, avk);							\
  } while(0)
/* "Allocation continuation" closures/functions; these don't receive a
 * continuation, but they get called through an allocating function.
 * The function that calls the allocation function needs to save the
 * continuation in the closure, the "self" argument.
 */
# define CONT_BODY(s, a1) C_word s = __av[0]; C_word a1 = __av[1];
# define CONT_PROC(name, c, s, a1)   name(C_word c, C_word *__av)
# define CONT_BODYN(c, s) C_word s = __av[0];
# define CONT_PROCN(name, c, s)   name(C_word c, C_word *__av)
/* cpsproc() can't easily be used in prototype and definition */
# define CPS_PROC1(name, c, s, k, a1) name(C_word c, C_word *__av)
# define CPS_PROC2(name, c, s, k, a1, a2) name(C_word c, C_word *__av)
# define CPS_PROC3(name, c, s, k, a1, a2, a3) name(C_word c, C_word *__av)
# define CPS_PROC4(name, c, s, k, a1, a2, a3, a4) name(C_word c, C_word *__av)
# define CPS_PROC5(name, c, s, k, a1, a2, a3, a4, a5) name(C_word c, C_word *__av)
# define CPS_PROCN(name, c, s, k) name(C_word c, C_word *__av)
# define CPS_PROCNPLUS1(name, c, s, k, a1) name(C_word c, C_word *__av)
/* Excuse the mess */
# define CPS_BODY1(c, s, k, a1) C_word s = __av[0]; C_word k = __av[1]; C_word a1 = c >= 1 ? __av[2] : 0;
# define CPS_BODY2(c, s, k, a1, a2) C_word s = __av[0]; C_word k = __av[1]; C_word a1 = c >= 1 ? __av[2] : 0; C_word a2 = c >= 2 ? __av[3] : 0;
# define CPS_BODY3(c, s, k, a1, a2, a3) C_word s = __av[0]; C_word k = __av[1]; C_word a1 = c >= 1 ? __av[2] : 0; C_word a2 = c >= 2 ? __av[3] : 0; C_word a3 = c >= 3 ? __av[4] : 0;
# define CPS_BODY4(c, s, k, a1, a2, a3, a4) C_word s = __av[0]; C_word k = __av[1]; C_word a1 = c >= 1 ? __av[2] : 0; C_word a2 = c >= 2 ? __av[3] : 0; C_word a3 = c >= 3 ? __av[4] : 0; C_word a4 = c >= 4 ? __av[5] : 0;
# define CPS_BODY5(c, s, k, a1, a2, a3, a4, a5) C_word s = __av[0]; C_word k = __av[1]; C_word a1 = c >= 1 ? __av[2] : 0; C_word a2 = c >= 2 ? __av[3] : 0; C_word a3 = c >= 3 ? __av[4] : 0; C_word a4 = c >= 4 ? __av[5] : 0; C_word a5 = c >= 5 ? __av[6] : 0;
# define CPS_BODYNPLUS1(c, s, k, a1) C_word s = __av[0]; C_word k = __av[1]; C_word a1 = c >= 1 ? __av[2] : 0;
# define CPS_BODYN(c, s, k) C_word s = __av[0]; C_word k = __av[1];
# define CPS_CALL(fn, c, s, k, ...) do { C_word avk[] = {s,k,__VA_ARGS__}; fn(c, avk); } while(0)

#else

# define C_kontinue2(k, r1, r2) C_values(4,C_SCHEME_UNDEFINED,k,r1,r2)
# define CONT_BODY(s, a1) /* Nothing */
# define CONT_PROC(name, c, s, a1)   name(C_word c, C_word s, C_word a1)
# define CONT_BODYN(c, s) /* Nothing */
# define CONT_PROCN(name, c, s)   name(C_word c, C_word s, ...)
# define CPS_PROC1(name, c, s, k, a1) name(C_word c, C_word s, C_word k, C_word a1)
# define CPS_PROC2(name, c, s, k, a1, a2) name(C_word c, C_word s, C_word k, C_word a1, C_word a2)
# define CPS_PROC3(name, c, s, k, a1, a2, a3) name(C_word c, C_word s, C_word k, C_word a1, C_word a2, C_word a3)
# define CPS_PROC4(name, c, s, k, a1, a2, a3, a4) name(C_word c, C_word s, C_word k, C_word a1, C_word a2, C_word a3, C_word a4, C_word a5)
# define CPS_PROC5(name, c, s, k, a1, a2, a3, a4, a5) name(C_word c, C_word s, C_word k, C_word a1, C_word a2, C_word a3, C_word a4, C_word a5)
# define CPS_PROCN(name, c, s, k) name(C_word c, C_word s, C_word k, ...)
# define CPS_PROCNPLUS1(name, c, s, k, a1) name(C_word c, C_word s, C_word k, C_word a1, ...)
# define CPS_BODY1(c, s, k, a1) /* Nothing */
# define CPS_BODY2(c, s, k, a1, a2) /* Nothing */
# define CPS_BODY3(c, s, k, a1, a2, a3) /* Nothing */
# define CPS_BODY4(c, s, k, a1, a2, a3, a4) /* Nothing */
# define CPS_BODY5(c, s, k, a1, a2, a3, a4, a5) /* Nothing */
# define CPS_BODYN(c, s, k) /* Nothing */
# define CPS_BODYNPLUS1(c, s, k, a1) /* Nothing */
# define CPS_CALL(fn, c, s, k, ...)  fn(c, s, k, __VA_ARGS__);
#endif

#define BIG_TAG       0
#define RAT_TAG       1
#define COMP_TAG      2

#ifdef C_SIXTY_FOUR
# define C_HALF_WORD_SIZE           32
# define C_hword                    int
#else
# define C_HALF_WORD_SIZE           16
# define C_hword                    short
#endif
#define C_uhword                    unsigned C_hword

#define C_SIZEOF_STRUCTURE(n)           ((n)+1) /* missing from chicken.h */
#define C_SIZEOF_CLOSURE(n)             ((n)+1) /* missing from chicken.h */
/* The "internal"/"external" bignum distinction should die */
#define C_SIZEOF_INTERNAL_BIGNUM(n)	(C_SIZEOF_VECTOR((n)+1))
#define C_internal_bignum(b)            (C_block_item(b,1))

#define C_SIZEOF_BIGNUM(n)		(C_SIZEOF_INTERNAL_BIGNUM(n)+C_SIZEOF_STRUCTURE(2))
/* This is for convenience and allows flexibility in representation */
#define C_SIZEOF_FIX_BIGNUM             C_SIZEOF_BIGNUM(1)
#define C_BIGNUM_DIGIT_LENGTH           C_WORD_SIZE
#define C_BIGNUM_HALF_DIGIT_LENGTH      C_HALF_WORD_SIZE

/* This defines when we'll switch from schoolbook to Karatsuba
 * multiplication.  The smallest of the two numbers determines the
 * switch.  It is pretty high right now because it generates a bit
 * more garbage and GC overhead dominates the algorithmic performance
 * gains.  If the GC is improved, this can be readjusted.
 */
#define C_KARATSUBA_THRESHOLD        70
/* This defines when to switch from schoolbook to Burnikel-Ziegler
 * division.  It creates even more garbage than Karatsuba :(
 */
#define C_BURNIKEL_ZIEGLER_THRESHOLD 300
/* This threshold is in terms of the expected string length.  It
 * depends on division speed: if you change the above, change this too.
 */
#define C_RECURSIVE_TO_STRING_THRESHOLD 750

#define C_BIGNUM_BITS_TO_DIGITS(n) \
        (((n) + (C_BIGNUM_DIGIT_LENGTH - 1)) / C_BIGNUM_DIGIT_LENGTH)

#define C_BIGNUM_DIGIT_LO_HALF(d)       (C_uhword)(d)
#define C_BIGNUM_DIGIT_HI_HALF(d)       (C_uhword)((d) >> C_BIGNUM_HALF_DIGIT_LENGTH)
#define C_BIGNUM_DIGIT_COMBINE(h,l)     ((C_uword)(h) << C_BIGNUM_HALF_DIGIT_LENGTH|(C_uhword)(l))

/* Compatibility for CHICKEN < 4.9.0 */
#ifndef C_block_header_init
#define C_block_header_init(b, v)	C_block_header(b) = (v)
#endif

/* This should be replaced by C_header_bits(x) == C_BIGNUM_TYPE in core */
#define C_IS_BIGNUM_TYPE(x) (C_header_bits(x) == C_STRUCTURE_TYPE && C_block_item(CHICKEN_gc_root_ref(tags), BIG_TAG) == C_block_item(x, 0))

#define C_i_bignump(x)                  C_mk_bool(!C_immediatep(x) && C_IS_BIGNUM_TYPE(x))
#define C_fitsinbignumhalfdigitp(n)     (C_BIGNUM_DIGIT_HI_HALF(n) == 0)
#define C_bignum_negated_fitsinfixnump(b) (C_bignum_size(b) == 1 && (C_bignum_negativep(b) ? C_ufitsinfixnump(*C_bignum_digits(b)) : !(*C_bignum_digits(b) & C_INT_SIGN_BIT) && C_fitsinfixnump(-(C_word)*C_bignum_digits(b))))
#define C_bignum_header(b)              (*(C_word *)C_data_pointer(C_internal_bignum(b)))
#define C_bignum_digits(b)              (((C_uword *)C_data_pointer(C_internal_bignum(b)))+1)
#define C_bignum_negativep(b)           (C_bignum_header(b) != 0)
#define C_a_u_i_fixnum_abs(ptr, n, x)   (((x) & C_INT_SIGN_BIT) ? C_a_u_i_fixnum_negate((ptr), (n), (x)) : (x))
#define C_u_i_fixnum_signum(x)          ((x) == C_fix(0) ? x : (((x) & C_INT_SIGN_BIT) ? C_fix(-1) : C_fix(1)))
#define C_u_i_fixnum_negativep(x)       C_mk_bool((x) & C_INT_SIGN_BIT)
#define C_u_i_fixnum_positivep(x)       C_mk_bool(!((x) & C_INT_SIGN_BIT) && (x) != C_fix(0))
#define C_a_u_i_flonum_signum(ptr, n, x) (C_flonum_magnitude(x) == 0.0 ? x : ((C_flonum_magnitude(x) < 0.0) ? C_flonum(ptr, -1.0) : C_flonum(ptr, 1.0)))
#define C_a_u_i_big_to_flo(p, n, b)     C_flonum(p, C_bignum_to_double(b))
#define C_u_i_fixnum_length(x)          C_fix(C_ilen(((x) & C_INT_SIGN_BIT) ? ~C_unfix(x) : C_unfix(x)))
#define C_u_i_flonum_nanp(x)            C_mk_bool(C_isnan(C_flonum_magnitude(x)))
#define C_u_i_flonum_infinitep(x)       C_mk_bool(C_isinf(C_flonum_magnitude(x)))

#define C_isfinite                      isfinite
#define C_u_i_flonum_finitep(x)         C_mk_bool(C_isfinite(C_flonum_magnitude(x)))

/* The bytes->words conversion should be killed, but that can only be
 * done when the representation is made part of core (otherwise the GC
 * will trip on the vector's contents not being proper Scheme objects:
 * it skips objects marked with C_BYTEBLOCK_BIT).  We could set
 * SPECIALBLOCK_BIT, but that would disable the number-syntax hack.
 * So, for now we'll live with back and forth byte<->word conversion.
 */
#define C_bignum_size(b)                (C_bytestowords(C_header_size(C_internal_bignum(b)))-1)
#define C_bignum_mutate_size(b, s)      (C_block_header(C_internal_bignum(b)) = (C_STRING_TYPE | C_wordstobytes((s)+1)))
#define C_u_i_bignum_size(b)            C_fix(C_bignum_size(b))

void C_not_an_integer_error(char *loc, C_word x) C_noret;
void numbers_div_by_zero_error(char *loc) C_noret;

/* XXX: When moving to core, these all need "fctexport" */
void C_ccall C_allocate_bignum(C_word c, C_word self, C_word k, C_word size, C_word negp, C_word initp) C_noret;
void C_ccall C_bignum_destructive_trim(C_word big);
C_word C_ccall C_bignum_simplify(C_word big);
void C_ccall CPS_PROC3(C_u_bignum_extract_digits, c, self, k, x, start, end) C_noret;

C_regparm double C_bignum_to_double(C_word bignum);
C_regparm C_word C_fcall C_i_numbers_numberp(C_word x);
C_regparm C_word C_fcall C_i_numbers_integerp(C_word x);
C_regparm C_word C_fcall C_i_numbers_eqvp(C_word x, C_word y);
C_regparm C_word C_fcall C_i_nanp(C_word x);
C_regparm C_word C_fcall C_i_numbers_finitep(C_word x);
C_regparm C_word C_fcall C_i_numbers_infinitep(C_word x);
C_regparm C_word C_ccall C_i_numbers_zerop(C_word x);

C_word C_ccall C_u_i_2_fixnum_gcd(C_word x, C_word y);
C_word C_ccall C_a_u_i_2_flonum_gcd(C_word **p, C_word n, C_word x, C_word y);

void C_ccall CPS_PROC1(C_basic_abs, c, self, k, x) C_noret;
void C_ccall CPS_PROC1(C_u_integer_abs, c, self, k, x) C_noret;

void C_ccall CPS_PROC1(C_basic_signum, c, self, k, x) C_noret;
C_regparm C_word C_fcall C_u_i_integer_signum(C_word x);

void C_ccall CPS_PROC1(C_basic_negate, c, self, k, x) C_noret;
void C_ccall CPS_PROC1(C_u_integer_negate, c, self, k, x) C_noret;
C_regparm C_word C_fcall C_a_u_i_fixnum_negate(C_word **ptr, C_word n, C_word x);

void C_ccall CPS_PROC2(C_2_basic_plus, c, self, k, x, y) C_noret;
C_regparm C_word C_fcall C_a_u_i_2_fixnum_plus(C_word **ptr, C_word n, C_word x, C_word y);
void C_ccall CPS_PROC2(C_u_2_integer_plus, c, self, k, x, y) C_noret;

void C_ccall CPS_PROC2(C_2_basic_minus, c, self, k, x, y) C_noret;
C_regparm C_word C_fcall C_a_u_i_2_fixnum_minus(C_word **ptr, C_word n, C_word x, C_word y);
void C_ccall CPS_PROC2(C_u_2_integer_minus, c, self, k, x, y) C_noret;

void C_ccall CPS_PROC2(C_2_basic_times, c, self, k, x, y) C_noret;
C_regparm C_word C_fcall C_a_u_i_2_fixnum_times(C_word **ptr, C_word n, C_word x, C_word y);
void C_ccall CPS_PROC2(C_u_2_integer_times, c, self, k, x, y) C_noret;

void C_ccall CPS_PROC2(C_basic_quotient, c, self, k, x, y) C_noret;
void C_ccall CPS_PROC2(C_u_integer_quotient, c, self, k, x, y) C_noret;

void C_ccall CPS_PROC2(C_basic_remainder, c, self, k, x, y) C_noret;
void C_ccall CPS_PROC2(C_u_integer_remainder, c, self, k, x, y) C_noret;

void C_ccall CPS_PROC2(C_basic_divrem, c, self, k, x, y) C_noret;
void C_ccall CPS_PROC2(C_u_integer_divrem, c, self, k, x, y) C_noret;

void C_ccall CPS_PROCN(C_numbers_nequalp, c, self, k) C_noret;
C_regparm C_word C_fcall C_i_2_basic_equalp(C_word x, C_word y);
C_word C_ccall C_u_i_2_integer_equalp(C_word x, C_word y);
void C_ccall CPS_PROCN(C_numbers_lessp, c, self, k) C_noret;
C_regparm C_word C_fcall C_i_2_basic_lessp(C_word x, C_word y);
C_word C_ccall C_u_i_2_integer_lessp(C_word x, C_word y);
void C_ccall CPS_PROCN(C_numbers_less_or_equalp, c, self, k) C_noret;
C_regparm C_word C_fcall C_i_2_basic_less_or_equalp(C_word x, C_word y);
C_word C_ccall C_u_i_2_integer_or_equal_p(C_word x, C_word y);
void C_ccall CPS_PROCN(C_numbers_greaterp, c, self, k) C_noret;
C_regparm C_word C_fcall C_i_2_basic_greaterp(C_word x, C_word y);
C_word C_ccall C_u_i_2_integer_greaterp(C_word x, C_word y);
void C_ccall CPS_PROCN(C_numbers_greater_or_equal_p, c, self, k) C_noret;
C_regparm C_word C_fcall C_i_2_basic_greater_or_equalp(C_word x, C_word y);
C_word C_ccall C_u_i_2_integer_or_equalp(C_word x, C_word y);

C_word C_u_i_bignum_cmp(C_word x, C_word y);

/** TODO: rename to C_i_evenp/C_i_oddp, or is this fine? */
C_regparm C_word C_fcall C_i_basic_evenp(C_word x);
C_regparm C_word C_fcall C_u_i_integer_evenp(C_word x);
C_regparm C_word C_fcall C_i_basic_oddp(C_word x);
C_regparm C_word C_fcall C_u_i_integer_oddp(C_word x);
C_regparm C_word C_fcall C_i_basic_positivep(C_word x);
C_regparm C_word C_fcall C_u_i_integer_positivep(C_word x);
C_regparm C_word C_fcall C_i_basic_negativep(C_word x);
C_regparm C_word C_fcall C_u_i_integer_negativep(C_word x);

C_regparm C_word C_ccall C_u_i_integer_randomize(C_word seed);
void C_ccall CPS_PROC1(C_u_integer_random, c, self, k, max) C_noret;

void C_ccall CPS_PROC5(C_digits_to_integer, c, self, k, n, start, end, radix, negp) C_noret;
void C_ccall CPS_PROCNPLUS1(C_basic_number_to_string, c, closure, k, num) C_noret;
void C_ccall CPS_PROC2(C_u_fixnum_to_string, c, self, k, num, radix) C_noret;
void C_ccall CPS_PROC2(C_u_flonum_to_string, c, self, k, num, radix) C_noret;
void C_ccall CPS_PROC2(C_u_integer_to_string, c, self, k, num, radix) C_noret;
void C_ccall CPS_PROC1(C_u_flo_to_int, c, self, k, x) C_noret;
C_word C_ccall C_u_i_integer_bit_setp(C_word n, C_word i);
C_word C_ccall C_u_i_integer_length(C_word x);

void C_ccall CPS_PROC2(C_u_integer_shift, c, self, k, x, y) C_noret;
void C_ccall CPS_PROC2(C_u_2_integer_bitwise_and, c, self, k, x, y) C_noret;
void C_ccall CPS_PROC2(C_u_2_integer_bitwise_ior, c, self, k, x, y) C_noret;
void C_ccall CPS_PROC2(C_u_2_integer_bitwise_xor, c, self, k, x, y) C_noret;

/* Silly but in some cases needed */
C_inline C_word C_bignum0(C_word **ptr)
{
  C_word *p = *ptr, p0 = (C_word)p;

  C_word tagvec = CHICKEN_gc_root_ref(tags);

  /* Not using C_a_i_vector4, to make it easier to rewrite later */
  *(p++) = C_STRING_TYPE | C_wordstobytes(1);
  *(p++) = 0; /* zero is always positive */
  *ptr = p;

  return C_structure(ptr, 2, C_block_item(tagvec, BIG_TAG), p0);
}

C_inline C_word C_bignum1(C_word **ptr, int negp, C_uword d1)
{
  C_word *p = *ptr, p0 = (C_word)p;

  /* TODO: Get rid of structure wrapper and tag vector. */
  C_word tagvec = CHICKEN_gc_root_ref(tags);

  /* Not using C_a_i_vector2, to make it easier to rewrite later */
  *(p++) = C_STRING_TYPE | C_wordstobytes(2);
  *(p++) = negp;
  *(p++) = d1;
  *ptr = p;

  return C_a_i_record2(ptr, 2, C_block_item(tagvec, BIG_TAG), p0);
}

/* Here d1, d2, ... are low to high (ie, little endian)! */
C_inline C_word C_bignum2(C_word **ptr, int negp, C_uword d1, C_uword d2)
{
  C_word *p = *ptr, p0 = (C_word)p;

  C_word tagvec = CHICKEN_gc_root_ref(tags);

  /* Not using C_a_i_vector3, to make it easier to rewrite later */
  *(p++) = C_STRING_TYPE | C_wordstobytes(3);
  *(p++) = negp;
  *(p++) = d1;
  *(p++) = d2;
  *ptr = p;

  return C_a_i_record2(ptr, 2, C_block_item(tagvec, BIG_TAG), p0);
}

/* TODO: Is this correctly named?  Shouldn't it accept an argcount? */
C_inline C_word C_a_u_i_fix_to_big(C_word **ptr, C_word x)
{
  x = C_unfix(x);
  if (x < 0)
    return C_bignum1(ptr, 1, -x);
  else if (x == 0)
    return C_bignum0(ptr);
  else
    return C_bignum1(ptr, 0, x);
}

/* XXX: Naming convention is inconsistent!  Core has C_fixnum_divide()
 * but also C_a_i_flonum_quotient_checked()
 */
C_inline C_word C_a_u_i_fixnum_quotient_checked(C_word **ptr, int c, C_word x, C_word y)
{
  if (y == C_fix(0)) {
    numbers_div_by_zero_error("fx/");
  } else if (x == C_fix(C_MOST_NEGATIVE_FIXNUM) && y == C_fix(-1)) {
    return C_bignum1(ptr, 0, -C_MOST_NEGATIVE_FIXNUM); /* Special case */
  } else {
    return C_u_fixnum_divide(x, y); /* Inconsistent, too: missing _i_ */
  }
}

C_inline C_word C_u_i_fixnum_remainder_checked(C_word x, C_word y)
{
  if (y == C_fix(0)) {
    numbers_div_by_zero_error("remainder");
  } else {
    x = C_unfix(x);
    y = C_unfix(y);
    return C_fix(x - ((x / y) * y));
  }
}

/* Workaround for CHICKENs < 4.9.0, which contain broken fpintegerp */
C_inline C_word C_u_i_fpintegerp_fixed(C_word x)
{
  double dummy, val;

  val = C_flonum_magnitude(x);

  if(C_isnan(val) || C_isinf(val)) return C_SCHEME_FALSE;

  return C_mk_bool(C_modf(val, &dummy) == 0.0);
}


/* More weirdness: the other flonum_quotient macros and inline functions
 * do not compute the quotient but the "plain" division!
 */
C_inline C_word
C_a_i_flonum_actual_quotient_checked(C_word **ptr, int c, C_word x, C_word y)
{
  double dy = C_flonum_magnitude(y), r;

  if(dy == 0.0) {
    numbers_div_by_zero_error("quotient");
  } else if (!C_truep(C_u_i_fpintegerp_fixed(x))) {
    C_not_an_integer_error("quotient", x);
  } else if (!C_truep(C_u_i_fpintegerp_fixed(y))) {
    C_not_an_integer_error("quotient", y);
  } else {
    modf(C_flonum_magnitude(x) / dy, &r);
    return C_flonum(ptr, r);
  }
}

C_inline C_word
C_a_i_flonum_remainder_checked(C_word **ptr, int c, C_word x, C_word y)
{
  double dx = C_flonum_magnitude(x),
         dy = C_flonum_magnitude(y), r;

  if(dy == 0.0) {
    numbers_div_by_zero_error("remainder");
  } else if (!C_truep(C_u_i_fpintegerp_fixed(x))) {
    C_not_an_integer_error("remainder", x);
  } else if (!C_truep(C_u_i_fpintegerp_fixed(y))) {
    C_not_an_integer_error("remainder", y);
  } else {
    modf(dx / dy, &r);
    return C_flonum(ptr, dx - r * dy);
  }
}

/*
 * From Hacker's Delight by Henry S. Warren
 * based on a modified nlz() from section 5-3 (fig. 5-7)
 */
C_inline int C_ilen(C_uword x)
{
  C_uword y;
  C_word n = 0;

#ifdef C_SIXTY_FOUR
  y = x >> 32; if (y != 0) { n += 32; x = y; }
#endif
  y = x >> 16; if (y != 0) { n += 16; x = y; }
  y = x >>  8; if (y != 0) { n +=  8; x = y; }
  y = x >>  4; if (y != 0) { n +=  4; x = y; }
  y = x >>  2; if (y != 0) { n +=  2; x = y; }
  y = x >>  1; if (y != 0) return n + 2;
  return n + x;
}

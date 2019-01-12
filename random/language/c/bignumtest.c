#include <stdio.h>
#include <gmp.h> // big number library
#include "mainlib.h"

/*
    input name and the number as a string
  
    reserve space for name
    set name to a number (0)
    set name to numstr number in base 10
*/
#define bigint(name, numstr) \
    mpz_t name; \
    mpz_init (name); \
    mpz_set_str(name, #numstr, 10);

int main ()
{

    bigint(a, 10000000000000000000000000000000); 
    bigint(b, 5);

    bigint(c, 0);
    bigint(base, 5);
    bigint(exponent, 5);
    bigint(mod, 7);

    char string[30];
    mpz_get_str(string, 10, a); // export to a string
    printf("%s\n", string);

    //assembly style  [store here] [op1] [op2] ...
    mpz_add(c, a, b); // add

    mpz_sub(c, a, b); // subtract

    mpz_mul(c, a, b); // multiply

    mpz_cdiv_q(c, a, b); // divide for quotient
    mpz_cdiv_r(c, a, b); // mod

    //mpz_pow(c, a, b); // exponent exp is unsigned , does not exist

    mpz_powm(c, base, exponent, mod); // exponent mod

    mpz_powm_sec(c, base, exponent, mod); // exponent mod for RSA
    //  no even number mod, exponent is positive

    mpz_out_str(NULL,10,c); // print to standard output in base 10
    printf("\n");

    mpz_inp_str(c, NULL, 10); // input from standard input

    mpz_out_str(NULL,10,c);
    printf("\n");

    mpz_sgn(c); // gives back sign of number 1 = +, 0 = 0, -1 = -
                // useful in getting order relations

    mpz_clear(c); // to free memory
    return 0;
}

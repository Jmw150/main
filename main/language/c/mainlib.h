// C library
// Made by: Jordan Winkler

#ifndef mainlibc
#define mainlibc

#define mainlibVersion "Fri Feb 22 17:45:48 EST 2019"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


//#define bignums
#ifdef bignums
#include <gmp.h> // check if on system or bin library was used

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

// forward declarations
void factorial (mpz_t ret, mpz_t x); 
void choose (mpz_t ret, mpz_t n, mpz_t k);

void factorial (mpz_t ret, mpz_t x)
{
    bigint(one, 1);
    bigint(zero, 0);

    // keep x safe
    bigint(temp, 1);
    mpz_sub(temp, x, zero);

    mpz_set_str(ret, "1", 10);
    
    while (mpz_sgn(temp) != 0)
    {
        mpz_mul(ret, ret, temp);
        mpz_sub(temp,temp,one);
    }
    
    mpz_clear(one);
    mpz_clear(zero);
    mpz_clear(temp);
}

// writting in this style is very time consuming,
// but it is super powerful
// choose(n,k) = n!/(k!*(n-k)!)
void choose (mpz_t ret, mpz_t n, mpz_t k)
{
    /* capture */
    bigint(nf,1);
    bigint(kf,1);
    bigint(nMk,1);
    bigint(nMkf,1);
    bigint(base,1);


    mpz_sub(nMk, n, k);

    factorial(nf, n);
    factorial(kf, k);
    factorial(nMkf, nMk);

    mpz_mul(base, kf, nMkf);

    mpz_cdiv_q(ret, nf, base);


    /* release */
    mpz_clear(nf);
    mpz_clear(kf);
    mpz_clear(nMk);
    mpz_clear(nMkf);
    mpz_clear(base);
    
}
#endif /* bignums */

double stringToFloat(char* input);
/***************************************************************
| Name: stringToFloat
|    
| Precodition: <stdio.h>, <stdlib>, <math.h> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  char* 
|   Out: none
|   
| Returns: a float 
\**************************************************************/
/* need to error proof */
double stringToFloat(char* input) 
//char* assumed to come from main argv which has a lot of space on it
{
    /* for flag if number is too big for current architexture */
    const int arrayMax = 50; //floats have 16 digits of precision

    double Rows = 0;

    /* get size of input array, minus null terminator */
    int arraySize = 0;
    while (input[arraySize++] != '\0'); 
    arraySize--;
    
    if (arraySize > arrayMax)
    {
        printf("%s", "\nSmaller number please\n");
        exit(1);
    }

    /* transfer to int thing */
    /* if negative */
    if (input[0] == '-')
    {
        for (int i = 1 ; input[i] != '\0' ; i++)
        {
            if (input[i] <= '9' && input[i] >= '0')
            {
                Rows += (input[i] - '0');
                Rows *= 10; 
            } /* ignores non digits */
        }
        Rows /= 10;
        Rows *= -1;

        /* find dot */
        int dot = 0; //may not have dot
        for (int i = 0 ; input[i] != '\0' ; i++)
        {
            if (input[i] == '.')
            {
                  /* starting at 0 throws off by 1 */
                dot = arraySize - i - 1; 
                break;
            }
        }
        Rows = Rows/pow(10,dot);
    } 
    else 
    {
        /* if positive */
        for (int i = 0 ; input[i] != '\0' ; i++)
        {
            if (input[i] <= '9' && input[i] >= '0')
            {
                Rows += (input[i] - '0');
                Rows *= 10; 
            } /* ignores non digits */
        }
        Rows /= 10;

        /* find dot */
        int dot = 0; //may not have dot
        for (int i = 0 ; input[i] != '\0' ; i++)
        {
            if (input[i] == '.')
            {
                  /*starting at 0 throws off by 1 */
                dot = arraySize - i - 1; 
                break;
            }
        }
        Rows = Rows/pow(10,dot);
    }

    /* find dot, non negative */

    return Rows;
}


int gcd(int u, int v) {return (v != 0)?gcd(v, u%v):u;}

    
#endif /* mainlibc */

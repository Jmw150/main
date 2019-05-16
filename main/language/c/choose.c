// wrapper for choose function

#include <stdio.h>
#include "mainlib.h"

int main (int argc, char** argv)
{
    if (argc != 3)
    {
        printf("choose [n] [k]\n");
        return 1;
    }

    mpz_t n;
    mpz_init (n); 
    mpz_set_str(n, argv[1], 10);

    mpz_t k;
    mpz_init (k); 
    mpz_set_str(k, argv[2], 10);

    mpz_t ret;
    mpz_init (ret); 

    choose(ret, n, k);

    mpz_out_str(NULL,10,ret);
    printf("\n");

    return 0;
}

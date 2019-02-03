#include <stdio.h>

int main ()
{

    #define size 50
    #define type int

    typedef struct arr
    {
        int csize;
        type char[size];
    } arrchar;

    arrchar cat;

    cat.size = 50;


    return 0;

}

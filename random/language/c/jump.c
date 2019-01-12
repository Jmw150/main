#include <stdio.h>


int main ()
{
    int i = 05;

    top:
    if (i)
    {
        printf("%d\n", i);
        i--;
        goto top;
    }

    return 0;
}

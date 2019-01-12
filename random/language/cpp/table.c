#include <stdio.h>
#include "mainlib.cpp"

int main ()
{
    
    
    for (int i = 0 ; i < 64 ; i++)
        printf("%d\n",i);

    for (int i = 0 ; i < 64 ; i++)
        printf("%d\n",~i);

    for (int i = 0 ; i < 64 ; i++)
        printf("%d\n",((~i)+1));

    return 0;
}

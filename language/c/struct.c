#include <stdio.h>

int main ()
{
    struct cat
    {
        int lol;
        void (*hello)(int);
    };

    struct cat hi; // need to do type def unlike c++
    hi.lol = 5;

    printf("%d\n",hi.lol);

    { // scope
        void hellos(int thing)
        {
            printf("hello! %d \n", thing);
        };

        hi.hello = hellos;
    }

    hi.hello(2); // retains location of function

    //hellos(4);

    return 0;
}

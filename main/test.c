#!/usr/bin/tcc -run
#include <stdio.h>




//#include <complex.h>

// cooment?

//int hash (char *) __attribute__ ((pure));
/* pure only gcc
Calls to functions that have no observable effects on the state of the program other than to return a value may lend themselves to optimizations such as common subexpression elimination. Declaring such functions with the pure attribute allows GCC to avoid emitting some calls in repeated invocations of the function with the same argument values.

The pure attribute prohibits a function from modifying the state of the program that is observable by means other than inspecting the function’s return value. However, functions declared with the pure attribute can safely read any non-volatile objects, and modify the value of objects in a way that does not affect their return value or the observable state of the program.

For example,

int hash (char *) __attribute__ ((pure));
tells GCC that subsequent calls to the function hash with the same string can be replaced by the result of the first call provided the state of the program observable by hash, including the contents of the array itself, does not change in between. Even though hash takes a non-const pointer argument it must not modify the array it points to, or any other object whose value the rest of the program may depend on. However, the caller may safely change the contents of the array between successive calls to the function (doing so disables the optimization). The restriction also applies to member objects referenced by the this pointer in C++ non-static member functions.

Some common examples of pure functions are strlen or memcmp. Interesting non-pure functions are functions with infinite loops or those depending on volatile memory or other system resource, that may change between consecutive calls (such as the standard C feof function in a multithreading environment).

The pure attribute imposes similar but looser restrictions on a function’s definition than the const attribute: pure allows the function to read any non-volatile memory, even if it changes in between successive invocations of the function. Declaring the same function with both the pure and the const attribute is diagnosed. Because a pure function cannot have any observable side effects it does not make sense for such a function to return void. Declaring such a function is diagnosed. */

int main ()
{
    typedef struct{int i; int r;} com;

    com a;
    a.i = 1;
    a.r = 2;

    printf("a: %i \n", a.r);

    int b[5] = {0};


    //float complex c;

#define for 1
int f;
#include "test2.c"

f = 2;
    printf("lol: %i\n", for);
    // c99 complex numbers
    

#include "test2.c"

    printf("f : %i\n", f);

    return 0;
}

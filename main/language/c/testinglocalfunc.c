#include <stdio.h>

int main ()
{ 
    // in C you can declare structs in other functions
    struct car
    {
        int wheeln;
    };

    // in C you can declare functions in other functions
    // you can't do this in C++
    // so C functions can be local. C++ functions can't
    // without objects
    int lol () { return 9; };

    // c++ can use lambda expressions though, but can't do 
    // s-expressions. So in turn, this just means an uglier
    // local function
//    auto lol = [](int x) { return x*42; };

    printf("%d\n", lol());

    return 0;
}

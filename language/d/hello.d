
//#include <stdio.h>

import std.stdio: writefln; // very python like

int main()
{

    int function(int) g;
    //g = (x) { return x * x; }; // longhand
    g = (x)=>x*x;          // shorthand

    //auto function(string) f;
    //f = (x)=>writefln(x);
    //f("lol");

    (writefln("hello world!"));

    writefln("compute: %d", g(5));


    return 0;
}

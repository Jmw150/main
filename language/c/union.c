#!/usr/bin/tcc -run

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// The "lets be vague" data type
typedef union 
{
    int i;
    long int li;
    float f;
    double d;
    char str[100]; // include some space
} dat;

// functions are data, but functions are global type
typedef union 
{
    dat data;
    dat (*fun)(dat);
} var;

// stuff like this can be used on literals to abstract away types
dat cast(char* i)
{
    dat j;
    strcpy(j.str, i);
    return j;
}
#define init(str, ...) cast(#str ##__VA_ARGS__)
//#define cast(string) #string
    
dat print (dat i)
{
    if (i.str[0] == '1') // detect 
        printf("0\n");
    printf("%s\n", i.str); // print representation
    i.i = 'l'; // clobber
    return i;
}
#define def(a, b) dat a = init(b);
    

int main ()
{

    def(a, 1); // alter state
    print(a);

    a = init(22); // pretend to not
    print(a);
/*
    dat data;        
    var scm;
    scm.fun = print;
    data = init(hello world. This will compile); // how to design literals in c
    data = scm.fun(data); //lols
    printf("Memory size occupied by data : %ld\n", sizeof(data));
    printf("Memory size occupied by data : %ld\n", sizeof(scm));
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C Programming");

    data = scm.fun(data); //lols

    //printf("data.i : %d\n", data.i);
    //printf("data.f : %f\n", data.f);
    printf("data.str : %s\n", data.str);   

*/   
    return 0;
}

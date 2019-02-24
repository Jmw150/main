#include <stdio.h> 
/*
    C philosophy
    
    functions != data
    
    only main is called

*/

// pure data, intitialization is not even allowed
typedef struct {
    void (*f)(int);
    int a[5];
} funob;


funob newfun() {
    funob temp;
    temp.f = fun;
    return temp;
}


static int a = 1; // this is not static?
  

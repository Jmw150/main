//#!/usr/bin/tcc -run
#include "main.h"


int main() 
{ 

    funob lol = newfun();
    
    // fun_ptr is a pointer to function fun()  
    //void (*fun_ptr)(int) = &fun; 
  
    /* The above line is equivalent of following two 
       void (*fun_ptr)(int); 
       fun_ptr = &fun;  
    */
  
    // Invoking fun() using fun_ptr 
    //(*fun_ptr)(10); 
    lol.f(10);

    //fun(2020);
    //printf("%d\n",a); // this should not be allowed
    
    return 0; 
} 

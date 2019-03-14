#!/usr/bin/tcc -run
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define max 100

/*
(let (Str "Here am I"  Len (format (opt)))  # Get length from command line
   (unless (>= (size Str) Len)              # Check buffer size
      (prinl Str) ) )                       # Return string if OK
*/

int pico() 
{
   FILE* fp;
   char buf[max];
 
   sprintf(buf, "/usr/bin/picolisp query.l %ld -bye", *Length);
    /*
   if (!(fp = popen(buf, "r")))
      return 0;
   fgets(Data, *Length, fp); // get data from file
   *Length = strlen(Data);
   return pclose(fp) >= 0 && *Length != 0;
    */
}

int main ()
{

    char word[] = "ok then\n";
    size_t ok[max] = {1,2,3,3,4,0};

    Query(word, ok); // no idea what this does

    return 0;

}


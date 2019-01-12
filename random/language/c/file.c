// designed to change file names of ' ' to '-'

// well this is poorly documented.. Who wrote this?
#include <stdio.h>
#include <stdlib.h>


// Gets the length of a null terminated string
int strLen(char* input)
{
    int i = 0;
    while (input[i++] != '\0');

    return i;
}

int main (int argc, char** argv)
{
    // wierdly gcc does not figure out the value
    #define max 128
    char test_size[max] = {0}; 
    #undef max

    int max = 128;
    char kjkjkj[max];
    kjkjkj[0] = 'a';
    puts(kjkjkj);
    return 0;
    
    char* buffer_old;
    char* buffer_new;

    char lol[] = "lol";
    printf("lol1 %d, lol2 %d\n", strLen(lol), strLen("lol"));

    int err = 0;

    int size = 0;

    while (fgets(test_size,max,stdin) != NULL) 
    {
        size = strLen(test_size); //?

        printf("%d\n", size);

        buffer_old = (char*) malloc(sizeof(char)*size);
        buffer_new = (char*) malloc(sizeof(char)*size);
        for (int i = 0 ; test_size[i] != 0 && i < size ; i++)
        {
            buffer_old[i] = test_size[i];
            buffer_new[i] = buffer_old[i];
            if (buffer_old[i] == ' ')
                buffer_new[i] = '-';
        }
        err = rename(buffer_old,buffer_new); //has to be the same size..
//        printf("%s", buffer_old);
//        printf("%s", buffer_new);
//        printf("%d\n", err);

        free(buffer_old);
        free(buffer_new);

    }



/*
    if(rename(buffer_old, buffer_new) == 0)
    {
        printf("%s has been rename %s.\n", buffer_old, buffer_new);
    }
    else
    {
        fprintf(stderr, "Error renaming %s.\n", buffer_old);
    }
*/

    return 0;
}

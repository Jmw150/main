// counts words in a text file

#include <stdio.h>

int countwords(char* string, int size);

int main (int argc, char** argv)
{
    #define MAX 5000
    char a[MAX] = {0};

    for (int i = 0 ; i < MAX && a[i] != '\n' ; i++)
        a[i] = getchar(); //cin.get();

    int n = countwords(a,MAX);

    printf("%d\n",n);

    #undef MAX
    return 0;
}


// function style word counter
int countwords(char* string, int size)
{
    #define isLetter ( \
    (string[iter] <= 'z' && string[iter] >= 'a') || \
    (string[iter] <= 'Z' && string[iter] >= 'A'))

    int iter = 0;
    bool inWord = 0;
    int wordCount = 0;

    while (iter < size)
    {
        if (isLetter)
            inWord = 1;
        else if (inWord == 1 && !(isLetter))
        {
            inWord = 0;
            wordCount++;
        }
        iter++;
    }

    #undef isLetter

    return wordCount;
}
        

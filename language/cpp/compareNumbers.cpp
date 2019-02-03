#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
using namespace std;

int getIntData(string FileName, int a[], int size);

int compareArrays(int a[], int b[], int size);

int main ()
{
    const int MAX_SIZE = 10000;
    int List1[MAX_SIZE] = {0};
    int List2[MAX_SIZE] = {0};

    fstream InData;
    InData.open("primeList");

    int FileSize1 = 0;
    while (InData >> List1[FileSize1++]);
    
    InData.close();

    InData.open("primeList2");

    int FileSize2 = 0;
    while (InData >> List2[FileSize2++]);
    
    InData.close();


    cout << "Size of list 1: " << FileSize1 << endl
         << "Size of list 2: " << FileSize2 << endl;

    cout << "not equal at: "
         << compareArrays(List1, List2, 
            (FileSize1>FileSize2)?FileSize1:FileSize2);
    
    return 0;
}
/*
int getIntData(string FileName, int a[], int size)
{
    fstream InData;
    InData.open(FileName);

    int FileSize = 0;
    while (InData >> a[FileSize]);
    
    InData.close();

    return FileSize;
}
*/
int compareArrays(int a[], int b[], int size)
{
    for (int i = 0 ; i < size ; i++)
        if (a[i] != b[i])
            return i;
    
    return -1;
}

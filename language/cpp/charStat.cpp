//a program to count the number of each character type in a file
// input is file name 
#include <iostream>
#include <fstream>
using namespace std;

#include "mainlib.cpp"

int main (int argc, char** argv)
{

    // if incorrect input, display error message
    if (argc != 2)
    {
        cout << "charStat [filename]\n";
        return 1;
    }
        
    // get size of file, manually
    fstream data;
    data.open(argv[1]);
    int i = 0;
    char Bucket; // something to stick data in
    while (data >> Bucket) i++;
    data.close();

    // read in data
    data.open(argv[1]);
    char* A = new char[i+2];
    while (data >> A[i++]);
   
    // sort data
    quickSort(A, 0, i);

    // count the amount of characters of each type
    const int CharLength = 255;
    int Char[CharLength+1]; 
    for (int k = 0 ; k < CharLength ; k++)
        Char[k] = 0;
    for (int j = 0; j < i ; j++)
        for (int k = 0; k <= CharLength ; k++)
            if (A[j] == k)
                Char[k]++;

    // only display alphabet as default
    for (int j = 'a'; j <= 'z' ; j++)
        cout << char(j) << ": " 
             << Char[j]+Char[(j-'a')+'A'] 
             << endl; 

    return 0;
}

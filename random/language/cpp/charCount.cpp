//a program to count the number of each character type in a file
//created by: Jordan Winkler
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    const int ARRAY_SIZE = 10000;
    char A[ARRAY_SIZE+1] = {0};
    char Bucket;
    fstream data;
    cout << "Enter the name of the file you wish to scan "; //designate file path using string
    string UserInput;
    getline(cin, UserInput);
    data.open(UserInput.c_str());
    int i = 0;
    while (data >> Bucket)
    {
	A[i++] = Bucket;	
    }
	/*
    for (int j = 0 ; j < i; j++) // printing out read data
    cout << A[j] << ' ';
    cout << endl;
	*/
    int Max = i; char Temp; //bubble sort algorithm
    for (int k = 0 ; k < i; k++)
    {
        for (int h = 0 ; h < Max ; h++)
        {
	    if (A[h] > A[h+1])
	    {
		Temp = A[h];
		A[h] = A[h+1];
		A[h+1] = Temp;
	    }
	}
	Max--;
    }
	/*
    for (int j = 0 ; j < i; j++) // printing out read data
        cout << A[j] << ' ';
    cout << endl;
	*/

    const int CharLength = 255;
    int Char[CharLength+1] = {0};
    for (int j = 0; j < i ; j++)
        for (int k = 0; k <= CharLength ; k++)
	    if (A[j] == k)
		Char[k]++;
    for (int j = 'a'; j <= 'z' ; j++)
	cout << (char) j << "; " << Char[j]+Char[(j-'a')+'A'] << endl;
    return 0;
}

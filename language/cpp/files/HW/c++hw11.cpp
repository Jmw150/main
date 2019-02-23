//Name: Jordan Winkler
//Date: 11/25/2016
//Homework: c++ hw 11
//Action: adds two large numbers together


#include <iostream>
using namespace std;

void EnterNumber(int A[]);
void AddArray(int A[], int B[], int C[]);
void DisplayData(int A[], int B[], int C[]);

const int ArraySize = 20;

int main ()
{
    char ChooseEnding = 'Y';
    cout << "Program will add two large numbers\n\n";
    while (ChooseEnding == 'Y' || ChooseEnding == 'y')
    {
        int A1[ArraySize] = {0}, A2[ArraySize] = {0}, B[ArraySize] = {0};
        cout << "Please enter first number  --> ";
        EnterNumber(A1);
        cout << "Please enter second number --> ";
        EnterNumber(A2);
        AddArray(A1 ,A2 ,B);
        DisplayData(A1, A2, B);
        cout << "Continue 'Y' or 'N' --> ";
        cin >> ChooseEnding;
        cin.ignore(100,'\n');
    }
    return 0;
}

/********************** EnterNumber **********************************
Action: Extracts and tests input from the keyboard. Adds input to
        integer array.

Parameters: 

    IN: Nothing
    OUT: A generic array

Returns: Nothing
Precondition: Array Size is globally declared
-------------------------------------------------------------------*/
void EnterNumber(int A[])
{
    //static int Buffer = 0;    //The following code deals with iostream's
    //static int Alternate = 0; //finickiness with my GNU Linux system
    //if (Alternate % 2 == 0) cin.ignore(Buffer,'\n');
    
    int N[ArraySize] = {0};
    char Ch;
    int j = 0;
    do
    {
        cin.get(Ch);
        //if (Alternate % 2 == 0) Buffer++;
        if (Ch >= '0' && Ch <= '9')
            N[j++] = (int) (Ch - '0');
    } while (Ch != '\n');
    for (int k = 0 ; k <= j ; k++)
    {
        A[ArraySize - k] = N[j - k];
    }
    //Alternate++;
}

/********************** AddArray **********************************
Action: Adds two arrays and outputs a third array

Parameters: 

    IN: Array A and B
    OUT: Array C

Returns: Nothing
Precondition: Array Size must be globally declared
-------------------------------------------------------------------*/
void AddArray(int A[], int B[], int C[])
{
    int Carry = 0;
    for (int i = 1 ; i <= ArraySize ; i++)
    {
        C[ArraySize - i] = A[ArraySize - i] + B[ArraySize - i] + Carry;
        if (C[ArraySize - i] > 9)
        {
            C[ArraySize - i] %= 10;
            Carry = 1;
        } else Carry = 0;
    }
}

/********************** DisplayData **********************************
Action: Displays three large numbers on the terminal screen

Parameters: 

    IN: Two integer arrays and one integer array that is their sum
    OUT: Nothing

Returns: Nothing
Precondition: Array size is a global variable
-------------------------------------------------------------------*/
void DisplayData(int A[], int B[], int C[])
{
    for (int i = 0 ; i < ArraySize ; i++)
    {
        cout << A[i];
    } cout << endl;
    for (int i = 0 ; i < ArraySize ; i++)
    {
        cout << B[i];
    } cout << endl;
    cout << "--------------------\n";
    for (int i = 0 ; i < ArraySize ; i++)
    {
        cout << C[i];
    } cout << "\n\n";
}

/*
Program will add two large numbers

Please enter first number  --> 1234
Please enter second number --> 4321
00000000000000001234
00000000000000004321
--------------------
00000000000000005555

Continue 'Y' or 'N' --> y
Please enter first number  --> 6789
Please enter second number --> 9876
00000000000000006789
00000000000000009876
--------------------
00000000000000016665

Continue 'Y' or 'N' --> y
Please enter first number  --> 12345678987654321
Please enter second number --> 12345678987654321
00012345678987654321
00012345678987654321
--------------------
00024691357975308642

Continue 'Y' or 'N' --> n
*/
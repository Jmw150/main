//Name: Jordan Winkler
//Date: 10/16/2016
//Homework: c++ hw 7 part 2
//Action: takes a number N between 1 and 100, checks if even, then
//sums preceding numbers less than N but more than 0


#include <iostream>
using namespace std;

int IsItEven(int);

int SumInput(int);

int main ()
{
    int N;
    do
    {
        cout << "Enter a number between 1 and 100 --> ";
        cin >> N;
        if (N <= 100 && N >= 1)
        {
            if (IsItEven(N) == 1)
                 cout << "This number is even.\n";
            else cout << "This number is odd.\n";
            cout << SumInput(N) << endl;
        }
    } while (N <= 100 && N >= 1);
}

/*************** IsItEven *******************************
Action: checks if number is odd or even
Parameters: 
IN: integer X to test
OUT: 1 if X is even, 0 if X is odd
Returns: true or false
Precondition: Input needs to be non-negative.
-------------------------------------------------------------------*/
int IsItEven(int X)
{
    if (X % 2 == 0) return 1;
    else return 0;
}

/*************** SumInput *******************************
Action: Sums up all numbers less than input but greater than 0
Parameters: 
IN: integer Y
OUT: Sum of all numbers less than Y but greater than 0
Returns: integer
Precondition: Input needs to be non-negative.
-------------------------------------------------------------------*/
int SumInput(int Y)
{
    return ((Y+1)*Y)/2; //This formula takes fewer computations if Y > 3
}

/*
Enter a number between 1 and 100 --> 4
This number is even.
10
Enter a number between 1 and 100 --> 100
This number is even.
5050
Enter a number between 1 and 100 --> 0
*/
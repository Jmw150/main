//Name: Jordan Winkler
//Date: 10/1/2016
//Homework: c++ hw 5 part 3
//Action: Counts even numbers

#include <iostream>
using namespace std;

int main ()
{
    unsigned int X, NumberOfEvens = 0;
    cout << "Type a list of positive numbers. End with a 0.\n";
    do
    {
        cin >> X;
        if (X % 2 == 0) NumberOfEvens++;
    } while (X);
    cout << "Number of Evens: " << --NumberOfEvens;
    return 0;
}

/*
Type a list of positive numbers. End with a 0.
1 0
Number of Evens: 0

Type a list of positive numbers. End with a 0.
8 0
Number of Evens: 1

Type a list of positive numbers. End with a 0.
1 2 3 4 5 6 7 8 9 0
Number of Evens: 4
*/
//Name: Jordan Winkler
//Date: 10/1/2016
//Homework: c++ hw 5 part 4
//Action: sees if a number is odd and divisible by 3.
//If so it displays the number and the rightmost digit.

#include <iostream>
using namespace std;

int main ()
{
    unsigned int X;
    do
    {
        cout << "Enter a positive integer --> ";
        cin >> X;
        if (X == 0) return 0;
        if ((X % 2 != 0) && (X % 3 == 0))
        {
            cout << "Number is odd and mod 3\n"
                 << "Right most digit: " 
                 << X % 10 << "\n\n";
        } else cout << "Number does not work\n";
    } while (X);
    
    return 0;
}

/*
Enter a positive integer --> 2
Number does not work
Enter a positive integer --> 3
Number is odd and mod 3
Right most digit: 3

Enter a positive integer --> 0   


Enter a positive integer --> 12321
Number is odd and mod 3
Right most digit: 1

Enter a positive integer --> 212121
Number is odd and mod 3
Right most digit: 1

Enter a positive integer --> 21021
Number is odd and mod 3
Right most digit: 1

Enter a positive integer --> 0
*/
//Name: Jordan Winkler
//Date: 10/1/2016
//Homework: c++ hw 5 part 1
//Action: does an operation on two integers

#include <iostream>
using namespace std;

int main ()
{
    char TestForN;
    int X, Y;
    char Operator;
    
    do 
    {
        cout << "Do you want to continue? (Y/N)\n";
        cin >> TestForN;
        if (TestForN == 'N') return 0;
        cout << "Enter two integers --> ";
        cin >> X >> Y;
        cout << "Enter an operator from { + - * / % } --> ";
        cin >> Operator;
        cout << "Output: ";
        switch (Operator) 
        {   //Cases are ACSII for operator symbols
            case 43: cout << X + Y << "\n\n"; break;
            case 45: cout << X - Y << "\n\n"; break;
            case 42: cout << X * Y << "\n\n"; break;
            case 47: cout << X / Y << "\n\n"; break;
            case 37: cout << X % Y << "\n\n"; break;
            default: cout << "Invalid Operator\n\n";
        }
    } while (TestForN != 'N');             
    return 0;
}

/*
Do you want to continue? (Y/N)
Y
Enter two integers --> 1 2 
Enter an operator from { + - * / % } --> +
Output: 3

Do you want to continue? (Y/N)
Y
Enter two integers --> 3 4
Enter an operator from { + - * / % } --> -
Output: -1

Do you want to continue? (Y/N)
Y
Enter two integers --> 5 6
Enter an operator from { + - * / % } --> *
Output: 30

Do you want to continue? (Y/N)
Y
Enter two integers --> 7 8 
Enter an operator from { + - * / % } --> /
Output: 0

Do you want to continue? (Y/N)
Y
Enter two integers --> 9 3 
Enter an operator from { + - * / % } --> %
Output: 0

Do you want to continue? (Y/N)
N

Do you want to continue? (Y/N)
Y
Enter two integers --> 1 23
Enter an operator from { + - * / % } --> ^
Output: Invalid Operator

Do you want to continue? (Y/N)
N
*/
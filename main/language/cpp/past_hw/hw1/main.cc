/********************************************************************
  Authors:       Dana Vrajitoru, and Jordan Winkler
  Class:         C243, Fall 2017
  File name:     main.cc
  Last updated:  August 25, 2017.
  Description:   Testing the class MyArray.
*********************************************************************/

#include "MyArray.h"
#include <iostream>
using namespace std;

// main function
int main()
{

    // declare two array objects
    MyArray a;
    MyArray b;

    // ask user for size
    int size;
    cout << "Size of array: ";
    cin >> size;
    if (cin.fail() || size < 0)
    {
        cout << "bad size argument\n";
        return 1;
    }
    
    // randomize and output
    a.randomize(size,10);
    cout << "\na[]\n"
         << "------------------------------------------\n";
    a.output();
    cout << endl;

    b.input();
    cout << "\nb[]\n" 
         << "------------------------------------------\n"
         << b << endl;

    cout << "(a == b) => " << (a == b) << endl;

    cout << "(a dot b) => " << a.scalarProduct(b) << endl;

    return 0;
} // main()

/*************** Example of the execution ***************************
Size of array: 4

a[]
------------------------------------------
The array of size 4 contains the elements:
6 7 5 7 

Size of array: 3
Input 3 elements: 1 1 0

b[]
------------------------------------------
The array of size 3 contains the elements:
1 1 0 

(a == b) => 0
(a dot b) => 13
*********************************************************************/

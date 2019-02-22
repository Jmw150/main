//code is notes not a program

#include <iostream>
using namespace std;

int main () 
{
   
    cout.setf(ios::fixed);      // This is a super useful block of code
    cout.setf(ios::showpoint);  // It will be covered more in chapter 12
    cout.precision(2);          //
    
	double c;
    c = 1/3.0;
    cout << c;
    return 0;
}

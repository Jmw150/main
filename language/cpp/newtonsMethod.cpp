//Finds where a function is 0
//created by: Jordan Winkler
//This is the equation for Newton's Method
//x_(n+1)=x_n-(f(x_n))/(f'(x_n))

#include <iostream>
using namespace std;

int main ()
{
	cout << "Root of x^3-125 is\n";
    double X = -1;					//Starting point of search

    for (int i = 0 ; i < 15 ; i++)
    {
        X-= ((X*X*X)-125 )/(3*X*X); 
    }
    cout << X << endl;
    return 0;
}

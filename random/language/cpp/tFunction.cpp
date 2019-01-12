//t function demonstration, seems useless

#include <iostream>
using namespace std;

int tFunction (int A);

int main ()
{
	int X = 0;
	cout << "pick an integer greater than 1 --> ";
	cin >> X;

	while (X != 1 )
	{
		X = tFunction(X);
		cout << X << ' ';
	}

	cout << endl;	
  	return 0;
}

int tFunction (int A)
{
	if ((A % 2) == 0)
	{
		return A/2;
	}
	else
		return ((3*A)+1)/2;
}


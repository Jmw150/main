// looks cool, computes pascals rule

#include <iostream>
#include "mylib.cpp"
using namespace std;

int PascalsRule(int &N, int &K, int From, int To);

int main ()
{
	int n, k;
	cout << "choose an N and K --> ";
	cin >> n >> k;
	cout << Choose(n, k) << endl;
	bool Success = PascalsRule(n, k, 1, 3);
	if (Success)
		cout << Choose(n, k) << endl;
	else cout << "out of bounds\n";
	return 0;
}

	
int PascalsRule(int &N, int &K, int From, int To)
{
	if (1 <= K && K <= N)
	{
		if (From == 1 && To == 2)
			K--; 
		else if (From == 1 && To == 3)
			N++;
		else if (From == 2 && To == 1)
			K++;
		else if (From == 2 && To == 3)
		{
			N++; K++;
		}
		else if (From == 3 && To == 1)
			N--;
		else if (From == 3 && To == 2)
		{
			N--; K--;
		}
	}
	else return 0;
	return 1;
}

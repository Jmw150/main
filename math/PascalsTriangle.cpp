//prints out pascal's triangle to up to 20 rows

#include "mylib.hpp"

int main ()
{
	cout << "How many rows of pascal's triangle do you want? -> ";
	int Rows;
    cin >> Rows;
    if (cin.fail() || Rows <= 0 || Rows > 20)
    {
        cout << "\nerror: bad num\n";
        return 0;
    }

    const int MAX = 21; //long int currently max 20
    int a[MAX][MAX] = {0};
    
    for (int i = 0 ; i < Rows ; i++)
	    for (int j = 0 ; j < Rows ; j++)
	        a[i][j] = choose(i,j);

    for (int i = 0 ; i < Rows ; i++)
    {
        for (int j = 0 ; a[i][j] ; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    
	return 0;
}


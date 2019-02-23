#include "mylib.hpp"

int main ()
{
    cout << "row -> ";
    int row;
    cin >> row;
    if (cin.fail())
    {
        cout << "\nerror: bad input\n";
        return 1;
    }
    
    for (int i = 0 ; i <= row ; i++)
        cout << choose(row, i) << ' ';

    cout << endl;

    return 0;
}

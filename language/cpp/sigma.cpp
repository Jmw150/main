#include "mylib.hpp"

int main ()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "\nerror: bad num\n";
        return 1;
    }

    for (int i = a ; i <= b ; i++)
        cout << "sigma(" << i << ") = " << sigma(i) << endl;

    return 0;
}

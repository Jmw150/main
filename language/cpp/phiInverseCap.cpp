// not sure if this shell script worthy
// but it is a useful program for calculating max possible number of 
// phi^-1

#include "mainlib.cpp"

int main ()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "\nerror: bad num \n";
        return 1;
    }

    for (int i = a ; i <= b ; i++)
        cout << i << ' ' 
             << phiInverseCap(i) << endl;

    return 0;
}

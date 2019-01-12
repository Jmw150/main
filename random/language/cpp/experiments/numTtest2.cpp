// number test from number theory

#include "mylib.cpp"

int main ()
{
    cout << "[a,b] -> ";
    unsigned int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "\nerror: bad domain\n";
        return 1;
    }
    cout << "c^k <= b -> ";
    unsigned int c;
    cin >> c;
    if (cin.fail())
    {
        cout << "\nerror: bad domain\n";
        return 1;
    }

    /* check phi(n) <= primeStep(n) */
    int phin = 0;
    int primeStepn = 0;
    for (int i = a ; i <= b ; i *= c)
    {
        phin = phi(i);
        primeStepn = primeStep(i);
        cout << "n|phi|primeStep " 
             << i << ' '
             << phin << ' '
             << primeStepn << endl;
        if (phin > primeStepn)
        {
            cout << "found at " << i << endl;
            return 0;
        }
    }

    return 0;
}

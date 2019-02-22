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
    if (a % 2 == 0)
    {
        cout << "\npick an odd number\n";
        return 0;
    }

    /* check phi(n) <= primeStep(n) */
    int phin = 0;
    int primeStepn = 0;
    for (int i = a ; i <= b ; i+=2)
    {
        phin = phi(i);
        primeStepn = primeStep(i);
        cout << "phi|primeStep " 
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

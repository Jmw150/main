// tests for pseudoprimes, not sure if it works

#include "mylib.cpp"

int Carmichael(int n);

int main ()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b;
    if (cin.fail())
    {
        cout << "error\n";
        return 0;
    }

    for (int i = a ; i <= b ; i++)
        if (Carmichael(i))
            cout << "found at " << i << endl;

    cout << Carmichael(6601) << endl;

    return 0;
}
/*
int Carmichael(int n)
{
//n={n | composite ∧ ∀b b^(n-1)≡ 1(mod n) ∧ 1 < b < n ∧ gcd(b,n)=1 }

//0={n | prime V ∃b b^(n-1) !≡ 1(mod n) ∧ 1 < b < n ∧ gcd(b,n)=1 }

    if ((isPrime(n)))
        return 0;
    for (int b = 2 ; b < n ; b++)
        if (gcd(b,n) == 1)
            if (expAlg(b, n-1, n) != 1)
                return 0;
    
    return n;
}

*/

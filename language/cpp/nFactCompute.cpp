//de Polignax's formula is being used to find number of primes p in n!
#include "mylib.cpp"

int dePolignax(int n, int p);

int main ()
{
    cout << "[a,b] -> ";
    int a, b;
    cin >> a >> b; //later include cin for prime
    if (cin.fail())
    {
        cout << "\nerror: bad num\n";
        exit(1);
    }
    
    for (int i = a ; i <= b ; i++)
        cout << "S_p(" << i << ") = "
             << dePolignax(i,5) << endl;

    return 0;
}

int dePolignax(int n, int p)
{
    int Sum = 0;
    int term;
    int pToJ = p;
    do
    {   
        term = n/pToJ; //truncating is on purpose
        Sum += term;
        pToJ *= p;
    } while (term != 0);

    return Sum;
}

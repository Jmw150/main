//prints what are called euclidean numbers
//by: Jordan Winkler
#include "mylib.cpp"

int main ()
{
    cout << "nth Euclid number -> ";
    int UserInput;
    cin >> UserInput;

    long int Enum = 1;
    for (int i = 1, max = 2; i <= UserInput ; max++)
    {
        if(isPrime(max))
        {
            Enum *= max;
            i++;
        }
        if(max == 10000)
        {
            cout << "error: maxed\n";
            break;
        }
    }
    Enum++;
    
    cout << Enum << endl;

    return 0;
}

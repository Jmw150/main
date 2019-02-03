#include <iostream>
using namespace std;

void ScanNumber(int);

int main ()
{
    int N = 1;
    do
    {
        cout << "Enter a number --> ";
        cin >> N;
        ScanNumber(N);
        
    } while (N != 0);
    return 0;
}

void ScanNumber(int N)
{
    static int Odd;
    static int Even;
    static int Third;
    (N % 2 == 0) ? Even++ : Odd++;
    Third++;
    if (Third % 3 == 0)
    {
        cout << "Even: " << Even << endl;
        cout << "Odd: " << Odd << endl;
    }
}
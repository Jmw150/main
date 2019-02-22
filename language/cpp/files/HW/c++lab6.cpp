#include <iostream>
#include <iomanip>
using namespace std;

void Plus();
void Minus();

int main ()
{
    int X, Y;
    do
    {
        cout << "Please enter two integers, same to quit --> ";
        cin >> X >> Y;
        X -= Y;
        if (X < 0)
        {
            Minus();
        }
        else if (X > 0)
        {
            Plus();
        }
        else return 0;
    } while (X != 0);
    return 0;
}

void Plus()
{
    for (int i = 0 ; i < 2 ; i++)
        cout << setw(7) << setfill(' ') << "*\n";
    cout << setw(12) << setfill('*') << "*\n";
    for (int i = 0 ; i < 2 ; i++)
        cout << setw(7) << setfill(' ') << "*\n";
}

void Minus()
{
    cout << setw(12) << setfill('*') << "*\n";
}
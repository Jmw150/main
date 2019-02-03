#include <stdlib.h>
#include <iostream>
using namespace std;

char Match(int X, int ComputerX);

int main ()
{
    int N;
    srand((time(NULL)));
    char Ch;
    do
    {
        cout << "Pick a number between one and three --> ";
        cin >> N;
        int Random = 1 + rand() % 3;
        Ch = Match(N, Random);
        cin >> Ch;
    } while (Ch == 'Y');
    return 0;
}

char Match(int N, int Random)
{
    char Ch;
    if (N == Random)
    {
        cout << "\nLucky Guess!";
    } else
    cout << "\nWrong.";
    cout << "\n\nGuess again? (Y/N)\n";
    
    return Ch;
}
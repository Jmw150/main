#include <iostream>
using namespace std;
int main ()
{
    int bottlesOfBeer;
    cout << "How many bottles of beer do we have? ";
    cin >> bottlesOfBeer;
    for (int i = bottlesOfBeer ; i > 0 ; i--)
    {
        cout << i << " bottles of beer on the wall, "
             << i << " bottles of beer.. \n"
             << "Take one down, pass it around, "
             << i - 1 << " bottles of beer on the wall.\n\n";
    }
    cout << "No more bottles of beer on the wall, no more bottles of beer.\n"
            "Go to the store and buy some more, " << bottlesOfBeer 
         << " bottles of beer on the wall.\n";
    return 0; 
}

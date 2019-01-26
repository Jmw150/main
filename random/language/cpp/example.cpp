// C++ style feedback loop

#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string thing;
    cout << "type something: ";
    cin >> thing;

    
    if (not cin.good())
    {
        cout << "You had one job!\n";
        return false;
    }
    
    cout << thing << " your face.\n";

    return true;
}

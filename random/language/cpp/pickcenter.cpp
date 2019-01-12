//mod tricks
// no idea what this does

#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    unsigned int x1 ;
    int y ;
    cout << "number " ;
    cin >> x1 ;
    cout << "order " ;
    cin >> y ;
    if (cin.fail())
    {
        cout << "invalid input\n";
        return 1;
    }
    
    x1 = x1 % (int) (pow (10, y));
    x1 = x1 * (pow (10, (-1*(y-1))));
    cout << x1 ; 
            
    return 0;
}

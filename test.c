#include <iostream>
using namespace std;

int   lolcat (int) { return 1; }
float lolcat (float) { return 1.5; }

int main ()
{

    int a = 1;
    float b = 1.4;
    cout << lolcat(a) << endl;
    cout << lolcat(b) << endl;

    return 0;
}

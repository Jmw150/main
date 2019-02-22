#include <iostream>
using namespace std;

int main ()
{
    char* string = new char[25];
    cout << "type something with m in it\n";
    cin >> string;

    cout << string << '\n';

    // find the 'm'
    char m = '5';

    ios_base::sync_with_stdio(false);

    cout << cin.gcount() << endl;
    cin.unget();
    cin.unget(); //if called twice it simply closes buffer
    cin >> m; //this never reads

    cout << m;
    cout << endl;

    return 0;

}

    

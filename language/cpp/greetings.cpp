// gives random greetings

#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
    int greetings;
    cout << "How many greetings do you want? ";
    cin >> greetings;
    
    for (int i = 0; i < greetings; i++) 
    {
        string h;
        switch (rand() % 6 + 1) 
        {
            case 1: h = "hello, "; break;
            case 2: h = "good day, "; break;
            case 3: h = "guten tag, "; break;
            case 4: h = "greetings, "; break;
            case 5: h = "I come in peace, "; break;
            case 6: h = "Live long and prosper, "; break;
        }
        cout << h;
    };
    cout << "\nhave a good rest of your day :)\n";
    
    return 0;
}

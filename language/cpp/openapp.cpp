// already coded one of these in bash
// opens a file

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
using namespace std;

int main ()
{
    cout << "Scan or open? 1/0 ";
    bool UserChoose;
    cin >> UserChoose;
    if (cin.fail())
    {
        cout << "not 1 or 0\n";
        return 1;
    }

    if (UserChoose == 1)
    {     
	    cout << "Give file path -> ";
        string UserInput;
    	getline(cin, UserInput);
    	fstream InData;
    }
    else //no need to check for 0
    {
        cout << "Give program path -> ";
	    cout << "Here is your current directory.\n";
        system("dir");
        string UserInput = UserInput.c_str();
        string Add = "xdg-open " + UserInput;
	    system(Add);
	}
	return 0;
}

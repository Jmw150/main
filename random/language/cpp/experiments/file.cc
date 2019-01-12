#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main ()
{
    cout << "give a name of a file to write to\n";
    string input;
    cin >> input;

    cout << input << endl;

    ofstream fout(input);
    if (fout.good())
        cout << "printing\n";

    fout << "lolcat lolcat\n";

    fout.close();
//////////////////////////////////////////////////////////////////

    cout << "reading file\n";
    ifstream fin(input);
    if (fin.good())
        cout << "success!\n";

    cout << "file:\n";
    char buffer[20];
    while (!fin.eof() && fin.good()) //ignores whitespace, does not write in eof
    {
        fin >> buffer;
        cout << buffer;
    }
    
    return 0;
}

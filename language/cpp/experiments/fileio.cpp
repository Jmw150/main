#include <iostream>
#include <fstream>

using namespace std;

int main ()
{

// example writing to file
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

// example reading from file
    cout << "reading file\n";
    ifstream fin(input);
    if (fin.good())
        cout << "success!\n";

    cout << "file:\n";
    char buffer[20];

    int fileSize = 0;
    while (!fin.eof() && fin.good()) fileSize++;

    
    while (!fin.eof() && fin.good()) 
    {
        fin >> buffer;
        cout << buffer;
    }
    
    return 0;
}

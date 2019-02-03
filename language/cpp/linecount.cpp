// counts the lines in a file
// needs fixing

#include <iostream>
#include <fstream>
using namespace std;

int main (int argc, char** argv)
{
    if (argc < 2)
    {
        cout << "linecount [file 1] (file 2) ... (file n)\n";
        return 1;
    }

    long int sum = 0;
    char temp;
    fstream Data;
    for (int i = 1 ; i < argc ; i++)
    {
        Data.open(argv[i]); // check if actually exists?
        while(Data >> temp) // does not count whitespace
        {
            if (temp == ' ')
                sum++;
        }
        Data.close();
    }

    cout << sum << endl;
    
    return 0;
}


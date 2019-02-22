//made by: Jordan Winkler
//Enter sentence that you would like to encrypt into the 
//command line after the function call.

#include <iostream>
using namespace std;

char caesarCipher(char letter, int displacement);

int main(int argc, char* argv[])
{
    cout << "Starting phrase: ";
    for (int i = 1 ; i < argc ; i++)
        cout << argv[i] << ' ';
    cout << endl;

    cout << "Caesar cipher:   ";
    int j;
    for (int i = 1 ; i < argc ; i++)
    {
        j = 0;
        while (argv[i][j]) 
        { 
            cout << caesarCipher(argv[i][j], argc-1);
            j++;
        }
        cout << ' ' ;
    }
    cout << endl;

    return 0;

}

char caesarCipher(char letter, int displacement)
{
    if (letter >= 'a' && letter <= 'z')
        return (letter - 'a' + displacement) % 26 + 'a';
    if (letter >= 'A' && letter <= 'Z')
        return (letter - 'A' + displacement) % 26 + 'A';
    else return letter;
}


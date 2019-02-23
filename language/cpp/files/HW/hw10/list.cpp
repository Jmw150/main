#include <iostream>
#include <list>
#include <vector>
using namespace std;


typedef list<int> ListInt;
typedef ListInt::iterator ListIntIter;

typedef list<char> listchar;
typedef list<listchar> listlchar;

typedef listlchar::iterator::iterator LLCIter;


int main ()
{
    listlchar a; // list of list of char
    //char item = *next(begin(*next(begin(listlchar), 3)), 3);


    return 0;
}

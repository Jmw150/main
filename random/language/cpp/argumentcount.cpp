//program that returns the number of arguments that where used.

#include "mylib.cpp"
int hello(int a = 0, int b = 0, int c = 0, int d = 0);

int main ()
{
    cout << hello(1,1,1) << endl;

    return 0;

}

int hello(int a, int b, int c, int d)
{
    if (d) return 4;
    if (c) return 3;
    if (b) return 2;
    if (a) return 1;
}
    

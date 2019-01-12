#include "mainlib.cpp"

int main (int argc, char* argv[])
{
    double sum = 0;
    for (int i = 1 ; i < argc ; i++)
    {
//      cout << argv[i] << ' ';
        sum += stringToFloat(argv[i]);
    }
    cout << sum << endl;
    
/* 
    int size = 50;
    char** number = new char*[size];
    for (int i = 0 ; i < size ; i++)
    {
        number[i] = new char[10];
    }

    int i = 0;
    while (number[i] != 0)
    {
        cin >> number[i];
        i++;
    }
    for (int j = 0 ; j < i ; j++)
    {
        sum += stringToFloat(number[j]);
    }
    cout << sum << endl;

*/
    return 0;
}

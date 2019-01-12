// really pointless without mpc library

#include "mainlib.cpp"

int main(int argc, char* argv[])
{
    if (argc != 2)
	{
	  cout << "error: wrong number of arguments\n";
	  return 1;
	}
    int a = stringToInt(argv[1]);

    cout << factorial(a) << endl;

    return 0;
}

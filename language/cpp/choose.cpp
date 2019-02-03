#include "mainlib.cpp"

int main(int argc, char* argv[])
{
    if (argc != 3)
	{
	  cout << "error: wrong number of arguments\n";
	  return 1;
	}
    int a = stringToInt(argv[1]);
    int b = stringToInt(argv[2]);

    cout << choose(a, b) << endl;

    return 0;
}

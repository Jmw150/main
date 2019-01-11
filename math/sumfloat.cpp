#include "mylib.hpp"

int main (int argc, char* argv[])
{
    if (argc != 3)
	{
	  cout << "sum [a] [b]\n";
	  return 0;
	}

	cout << stringToFloat(argv[1]) + stringToFloat(argv[2]) << endl;
    return 0;
}

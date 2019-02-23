#include "mylib.hpp"

int main (int argc, char* argv[])
{
    if (argc != 3)
	{
	    cout << "sum [a] [b]\n";
		return 0;
	}
	cout << stringToInt(argv[1]) + stringToInt(argv[2]) << endl;

	return 0;
}

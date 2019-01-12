// demonstration of writing to a file

#include <fstream>
using namespace std;

int main ()
{
	ofstream Data;
	Data.open("lol.txt");

	Data << 'h';
	return 0;
}

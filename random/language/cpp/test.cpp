#include <fstream>
#include <iostream>
using namespace std;

int main ()
{
	char letter;

	// Read characters from a file using an input file stream
	ifstream reader("test.txt");

	if(!reader){

		cout << "Error opening file" << endl;
		return -1;

	} else {

		// Read each character from the stream until end of file
		for(int i = 0; !reader.eof(); i++){

			// Get the next letter and output it
			reader.get(letter);
			cout << letter;

		}

		cout << endl;
		reader.close();

	}

    return 0;
}

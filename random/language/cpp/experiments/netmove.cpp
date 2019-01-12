//project to move and rename files
#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
using namespace std;

int main ()
{
	//cout << "Name the directory to move -> ";
	//string UserInput;
	//getline(cin, UserInput);
	int result;
	char OldFileName[] = "cat";
	char NewFileName[] = "dog";
	result = rename(OldFileName, NewFileName);
	if (result) cout << "Error moving file";
	else cout << "File successfully named\n";
	return 0;
}

//program renames files demonstration

#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

int main ()
{
	int result;
	char OldFileName[] = "cat"; 
	char NewFileName[] = "dog";
	result = rename(OldFileName, NewFileName); //takes name of old file and renames it
	if (result) cout << "Error moving file";
	else cout << "File successfully named\n";
	return 0;
}

//Scans a document or several docuemnts for a string
//returns if it is found and what line it is on
// grep already does this, so this program is useless

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int CheckKey (char *KeyWord, int KeyWordSize, char *Char, int FileSize);

int main ()
{
	cout << "Which file do you want to search?\n";
	const int ARRAY_SIZE = 10000;
	char Char[ARRAY_SIZE];
	fstream InData;
	InData.open("data");
	string UserChooseFile;
	getline(cin, UserChooseFile);
	int FileSize = 0;
	while (InData >> Char[FileSize++]);
	cout << "Keyword --> ";
	
	char KeyWord[20];
	int KeyWordSize = 0;
	char Temp = cin.get();
	while (Temp != '\n')
	{
		KeyWord[KeyWordSize++] = Temp;
	}
	int Location = CheckKey(KeyWord, KeyWordSize, Char, FileSize);
	cout << "Location " << Location;
	return 0;
}

int CheckKey (char *KeyWord, int KeyWordSize, char *Char, int FileSize)
{
	static int i = 0, j = 0;
	while (i < FileSize) 
	{
		if (Char[i] == KeyWord[j]) 
		{
			i++; j++; CheckKey(KeyWord, KeyWordSize, Char, FileSize);
		}
		if (j >= KeyWordSize) return j;
	}
	return -1;
}

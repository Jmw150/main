// name:     Jordan Winkler
// date:     2/10/2017
// homework: 2
// process:  creates a structure that can hold an ID number and
//           a first and last name. Then generates unique IDs,
//           assigns names from a file, sorts ascending by IDs,
//           and allows binary searching for name by ID.
//           (optional) saves data to a file of choice

#include <iostream>
#include <stdlib.h> //for random functions, exit()
#include <fstream> //for reading names
#include <time.h> //for random seed
#include <string>
#include <math.h> //for getInt()
using namespace std;

struct id
{
    int IDnumber;
    char FirstName[20];
    char LastName[20];
};

int getNameNSize(string &File);

void GiveID(id names[], int Max);

int Unique(int num, id names[], int Max);

void AssignNames(id names[], int Max, string File);

void QuickSort(id names[], int left, int right);

int binarySearch(int target, id names[], int Size);

int getInt();

void PrintNames(id names[], int Max);

void SaveToFile(id names[], int Max);

int main ()
{
    string FileName;
    int MaxNum = getNameNSize(FileName);
    id *MyNames = new id[MaxNum]; 

    GiveID(MyNames, MaxNum);

    AssignNames(MyNames, MaxNum, FileName);
    
    cout << "pre-sort:\n";
    PrintNames(MyNames, MaxNum);

    QuickSort(MyNames, 0, MaxNum-1);
    
    cout << "\npost-sort:\n";
    PrintNames(MyNames, MaxNum);
    
    cout << "\nsample ID: " << MyNames[3].IDnumber << endl;

    cout << "\nEnter an ID number less than 10k. (0 to quit)\n";

    int UserInput = getInt(); /* my own function for easier 
                                    control of input */
    int PersonPlace;          /* Location of person in array */
    while (UserInput)
    {
        PersonPlace = 
            binarySearch(UserInput, MyNames, MaxNum);
        if (PersonPlace < MaxNum)
            cout << "\nID: " << MyNames[PersonPlace].IDnumber
                 << "\nFirst Name: " 
                 << MyNames[PersonPlace].FirstName
                 << "\nLast Name:  " 
                 << MyNames[PersonPlace].LastName
                 << "\nLocation:   " 
                 << PersonPlace << endl;
        else
            cout << "\nError: Not Found\n";
        
        cout << "\nEnter an ID number less than 10k. "
             << "(0 to quit)\n";

        UserInput = getInt(); 
    }
/*  
    cout << "Save? (1/0) "; //for quicker search in other programs
    cin.ignore(); //clean out \n
    char UserInput2 = cin.get();
    if (UserInput2 == '1') SaveToFile(MyNames, MaxNum);
*/
    delete [] MyNames;
    return 0;
}


/*****************************************************************
| Name: getNamesNSize
|    
| Precodition: a file to read 1k > names from, names separated by
|              a space
| Postcondition: The number of (first, last) names, name of file
|                for other programs
|
| Parameters:
|       
|   IN: String called File
|   Out: That same string
|   
| Returns: int size of ordered pairs (first, last)
\*****************************************************************/
int getNameNSize(string &File)
{
	fstream InData;
//  File = "FantasyNames"; //for debugging

    cout << "Enter the name of the file you wish to scan: "; 
    getline(cin, File);
    InData.open(File.c_str());

    int i = 0;
    char word[20];
    while (InData >> word)
    {
        i++;
        if (i > 2000)
        {
            cout << "\nError: file too large\n";
            exit(1);
        }
    }
    InData.close();

    if (i > 2)
        return (i)/2; 
    else 
    {
        cout << "\nError: file too small\n";
        exit(1);
    }
}           
    

/*****************************************************************
| Name: GiveID
|    
| Precodition: an array of type id and its size
| Postcondition: unique id numbers for each element
|
| Parameters:
|       
|   IN: location of array of type id and int size of id array
|   Out: nothing
|   
| Returns: nothing
\*****************************************************************/
void GiveID(id names[], int Max)
{
    srand (time(NULL));  /* time() is an easy way to create a 
                            random seed between program calls */
    int theID;
    for (int i = 0 ; i < Max ; i++)
    {
        do
        {   
            /* Unique() inf loops at < Max*Max */
            theID = int(rand() % (Max*Max)) + 1; 
        } while (!Unique(theID, names, i)); 
        names[i].IDnumber = theID;
    }
}

/*****************************************************************
| Name: Unique
|    
| Precodition: an array of type id and its size, an int to
|              test
| Postcondition: confirmation if the int is unique to the array
|
| Parameters:
|       
|   IN: location of an array of type id and its int size, 
|       and an interger to check
|   Out: Nothing
|   
| Returns: 1 or 0 if the number is unique
\*****************************************************************/
int Unique(int num, id names[], int numLocation)
{
    if (numLocation == 0) return 1;
    for (int i = 0 ; i < numLocation ; i++)
        if (num == names[i].IDnumber)
            return 0;
    return 1;
}

/*****************************************************************
| Name: AssignNames
|    
| Precodition: a file named "FantayNames" to read, an array of 
|              type id and its size
| Postcondition: The same array filled with first and last names
|
| Parameters:
|       
|   IN: the location of an array of id structures, and int size
|   Out: Nothing
|   
| Returns: Nothing
\*****************************************************************/
void AssignNames(id names[], int Max, string File)
{
    fstream InData;
    InData.open(File.c_str());
    for (int i = 0 ; i < Max ; i++)
    {
        InData >> names[i].FirstName;
        InData >> names[i].LastName;
    }
    InData.close();
}

/*****************************************************************
| Name: QuickSort
|    
| Precodition: an id array, and information on the begining and 
|              end of the array
| Postcondition: a sorted array
|
| Parameters:
|       
|   IN: location of id array, int for start and end
|   Out: nothing
|   
| Returns: nothing
\*****************************************************************/
void QuickSort(id names[], int left, int right) {
      int i = left, j = right;
      id tmp;
      int pivot = names[(left + right) / 2].IDnumber;
 
      /* partition */
      while (i <= j) {
            while (names[i].IDnumber < pivot)
                  i++;
            while (names[j].IDnumber > pivot)
                  j--;
            if (i <= j) {
                  tmp = names[i];
                  names[i] = names[j];
                  names[j] = tmp;
                  i++;
                  j--;
            }
      };
 
      /* recursion */
      if (left < j)
            QuickSort(names, left, j);
      if (i < right)
            QuickSort(names, i, right);
}

/*****************************************************************
| Name: binarySearch
|    
| Precodition: An id array that has been sorted and
|              something to look for
| Postcondition: The location of that thing in an array
|
| Parameters:
|       
|   IN: integers of the size and thing to find, id array
|   Out: the same array
|   
| Returns: int location of requested thing
\*****************************************************************/
int binarySearch(int target, id names[], int Size)
{
    int lo = 0, hi = Size, i;
    
    while (lo <= hi)
    {
        i = (lo + hi)/2;
        if (names[i].IDnumber == target) return i;
        if (names[i].IDnumber < target)
        /* change return if looking for multiple items */
            lo = i + 1;
        else
            hi = i - 1;
    }
    return Size;
}

/*****************************************************************
| Name: getInt
|    
| Precodition: <iostream>, <stdlib> used
| Postcondition: gives back a positive integer that the user typed
|
| Parameters:
|       
|   IN:  none
|   Out: none
|   
| Returns: an int from the user
\*****************************************************************/
int getInt()
{
                             /* adjusted to machine int */
	const int ARRAY_SIZE = int(log10(pow(2, sizeof(int)*8))+1);
	char UserInput[ARRAY_SIZE] = {0};
	int ArraySpot = 0;
	int Rows = 0;

	do 
	{   
		UserInput[ArraySpot] = cin.get(); 
		if (ArraySpot > ARRAY_SIZE)
		{
			cout << "Smaller number please";
			exit(1);
		}
	} while ( UserInput[ArraySpot++] != '\n');
	for (int i = 0 ; i < ArraySpot - 1 ; i++)
	{
		if (UserInput[i] <= '9' && UserInput[i] >= '0')
		{
			Rows += int(UserInput[i] - '0');
			Rows *= 10; 
		}
		else 
		{
			cout << "Error: non-number\n";
			exit(1);
		}
	}
	return Rows /= 10; 
}

/*****************************************************************
| Name: PrintNames
|    
| Precodition: an array of type id and its array size
| Postcondition: the contents of the id array are cout
|
| Parameters:
|       
|   IN: location of id array and its int size
|   Out: Nothing
|   
| Returns: Nothing
\*****************************************************************/
void PrintNames(id names[], int Max)
{
    for (int i = 0 ; i < Max ; i++)
    {
        cout << names[i].IDnumber << ' '
             << names[i].FirstName << ' '
             << names[i].LastName << '\n';
    }
}

/*****************************************************************
| Name: SaveToFile
|    
| Precodition: an array of id struct and a max size
| Postcondition: the array of id struct is saved to a file
|
| Parameters:
|       
|   IN: location of id struct, int size
|   Out: Nothing
|   
| Returns: Nothing
\*****************************************************************/
void SaveToFile(id names[], int Max)
{
    ofstream OutData;
    cout << "Enter name of save file: "; 
                                        
    string UserInput;
    getline(cin, UserInput);
    OutData.open(UserInput.c_str());

    for (int i = 0 ; i < Max ; i++)
    {
        OutData << names[i].IDnumber << ' '
                << names[i].FirstName << ' '
                << names[i].LastName << '\n';
    }

    OutData.close();
}

/*
Enter the name of the file you wish to scan: FantasyNames
pre-sort:
4813 Jordan Winkler
1600 Ayluin Bryrora
864 Darthoridan Bibanise
6964 Navarre Neridithas
7836 Narbeth Jonorin
10519 Khilseith Sarkrana
8100 Alre Trazorwyn
8470 Hagmer Phijeon
9574 Vulre Carphyra
693 Ilimitar Phicaryn
3768 Eshenesra Baldithas
1716 Lierin Eilsandoral
3075 Kaylessa Krismaris
2126 Blythswana Oriyarus
5294 Cyithrel Faren
4206 Melarue Pasandoral
50 Jhiilsraa Qinwraek
95 Lenna Beimyar
5121 Amedee Erfina
6304 Raerauntha Erpeiros
4375 Kevmorn Mistletoe
9761 Wilven Battlefate
8511 Xavven Strifelaugher
527 Davroar Tumblebelly
7000 Strongbad Trademark
5331 Grarry Soldshort
6947 Gruzmami Caveforged
10589 Harser Drakesword
3400 Khourreath Underbrow
2743 Bhatmael Strongjaw
7510 Arasgreath Flathand
8954 Gardeth Wraitharm
5083 Ralith Boneforged
8373 Noranurim Oakenbraid
6049 Gandras Mountainbuster
2309 Grummud Duskbelly
8283 Mo Meng
3539 Ma ZhenKang
169 Hou Jian
7988 Chen Zhihao
4232 Kong Yijun
3936 Qian Tao
9703 Qin Xieren
8047 He Xuefeng
6802 Ye Bao
4387 Kang Xiang
1643 Kane Iolana
7593 Nohea Kiele
5223 Ihe Kameo
7504 Kahoku Makelina
3287 Ewekapu Pilis
9597 Kane Aikau
7396 A'alona Ka'uhane
1930 Leolani Aulani
255 Hau'oli Kaila
3787 Kahiau Konala
7260 Noelani Mahina
7201 Ano Pukahi
3766 Lala Kaleo
791 Halemano Miliani
9943 Hanini Keliikoa
666 Lokemele Nawahine
9744 Lea Keiki
4416 Malana Laemoa
9039 Milana Ah-Puck
5183 Keke Leia
6724 Karl Lehner
7453 Marvin Ehmann
9463 Bernd Mannheimer
6892 Kim Fitkau
4831 Walther Theiner
3085 Wilhorn Gladdenstone
959 Alammu Andrano
3924 Llaala Sarayn
1263 Fadras Dralas
7761 Thadas Hler
9052 Madras Andules
2905 Elammu Uvenim
4744 Bradas Theray
4406 Hlarvyne Hainterari
540 Llaalam Othrenim
8771 Hlarvyne Andas
3393 Gadave Vendalas
8676 Relamus Therayn
91 Madras Arendus
3647 Gidave Berethi
1853 Medenb Omayn
8091 Bildam Hlervu
979 Tadave Seran
6359 Midave Hleray
8882 Gidave Marend
313 Midave Omalen
7025 adbaam Durug
8757 Umbraam Ushar
5469 Dreggs Atumph
6195 Bagamu Lurkul
4072 Bogamul Sharbag
1584 Mashag Bogadb
3779 Bugdulg Sharbag
2925 Bogamu Nat
9216 Shakh Ufthamph
8609 Umbraam Usharz
6750 Snagam Bularz

post-sort:
50 Jhiilsraa Qinwraek
91 Madras Arendus
95 Lenna Beimyar
169 Hou Jian
255 Hau'oli Kaila
313 Midave Omalen
527 Davroar Tumblebelly
540 Llaalam Othrenim
666 Lokemele Nawahine
693 Ilimitar Phicaryn
791 Halemano Miliani
864 Darthoridan Bibanise
959 Alammu Andrano
979 Tadave Seran
1263 Fadras Dralas
1584 Mashag Bogadb
1600 Ayluin Bryrora
1643 Kane Iolana
1716 Lierin Eilsandoral
1853 Medenb Omayn
1930 Leolani Aulani
2126 Blythswana Oriyarus
2309 Grummud Duskbelly
2743 Bhatmael Strongjaw
2905 Elammu Uvenim
2925 Bogamu Nat
3075 Kaylessa Krismaris
3085 Wilhorn Gladdenstone
3287 Ewekapu Pilis
3393 Gadave Vendalas
3400 Khourreath Underbrow
3539 Ma ZhenKang
3647 Gidave Berethi
3766 Lala Kaleo
3768 Eshenesra Baldithas
3779 Bugdulg Sharbag
3787 Kahiau Konala
3924 Llaala Sarayn
3936 Qian Tao
4072 Bogamul Sharbag
4206 Melarue Pasandoral
4232 Kong Yijun
4375 Kevmorn Mistletoe
4387 Kang Xiang
4406 Hlarvyne Hainterari
4416 Malana Laemoa
4744 Bradas Theray
4813 Jordan Winkler
4831 Walther Theiner
5083 Ralith Boneforged
5121 Amedee Erfina
5183 Keke Leia
5223 Ihe Kameo
5294 Cyithrel Faren
5331 Grarry Soldshort
5469 Dreggs Atumph
6049 Gandras Mountainbuster
6195 Bagamu Lurkul
6304 Raerauntha Erpeiros
6359 Midave Hleray
6724 Karl Lehner
6750 Snagam Bularz
6802 Ye Bao
6892 Kim Fitkau
6947 Gruzmami Caveforged
6964 Navarre Neridithas
7000 Strongbad Trademark
7025 adbaam Durug
7201 Ano Pukahi
7260 Noelani Mahina
7396 A'alona Ka'uhane
7453 Marvin Ehmann
7504 Kahoku Makelina
7510 Arasgreath Flathand
7593 Nohea Kiele
7761 Thadas Hler
7836 Narbeth Jonorin
7988 Chen Zhihao
8047 He Xuefeng
8091 Bildam Hlervu
8100 Alre Trazorwyn
8283 Mo Meng
8373 Noranurim Oakenbraid
8470 Hagmer Phijeon
8511 Xavven Strifelaugher
8609 Umbraam Usharz
8676 Relamus Therayn
8757 Umbraam Ushar
8771 Hlarvyne Andas
8882 Gidave Marend
8954 Gardeth Wraitharm
9039 Milana Ah-Puck
9052 Madras Andules
9216 Shakh Ufthamph
9463 Bernd Mannheimer
9574 Vulre Carphyra
9597 Kane Aikau
9703 Qin Xieren
9744 Lea Keiki
9761 Wilven Battlefate
9943 Hanini Keliikoa
10519 Khilseith Sarkrana
10589 Harser Drakesword

sample ID: 169

Enter an ID number less than 10k. (0 to quit)
169

ID: 169
First Name: Hou
Last Name:  Jian
Location:   3

Enter an ID number less than 10k. (0 to quit)
170

Error: Not Found

Enter an ID number less than 10k. (0 to quit)
0

*/

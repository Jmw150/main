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

    int UserInput = getInt(); //my own function for easier control
                              //of input
    int PersonPlace;          //Location of person in array
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
    srand (time(NULL));  //time() is an easy way to create a 
                         //random seed between program calls
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
	const int ARRAY_SIZE = 10; /* not adjusted to the machine */
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

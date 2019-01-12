/*
 * I need a way to query the whole prereq list, look up 
 * trees just give each class an id, 
 * logic gates can determine letter and subject type
 * math 1, cs 2
 * math: m1, a2, b3, c4, n5, k6, t7, w8, p9
 */
#include <iostream>
#include <fstream>
using namespace std;

void sort(double a[], int numberUsed);
//Precondition: numberUsed <= declared size of the array a.
//The array elements a[0] through a[numberUsed - 1] have values.
//Postcondition: The values of a[0] through a[numberUsed - 1] have
//been rearranged so that a[0] <= a[1] <= ... a[numberUsed - 1].
void swapValues(double& v1, double& v2);
//Interchanges the values of v1 and v2.
int indexOfSmallest(const double a[], int startIndex, int numberUsed);
//Precondition: 0 <= startIndex < numberUsed. Reference array elements
//have values. Returns the index i such that a[i] is the smallest of the
//values a[startIndex], a[startIndex + 1], ..., a[numberUsed - 1].

struct course //number of the course
{
    string name; //what the course is called
    int credits; //This is sometimes a range, so max is listed if class is not repeatable
    int prereq[6]; //  0 = empty
    //string prereqRelation; /*default && between prereqs, a sequence of || listed*/
    int coreq;
    int classTaken; //was bool
} m[30000]; // m[1] stands for unusual circumstance

class A
{
    
};

int main ()
{
    fstream data;
    data.open("data");
    int prereqStore[20];
    string nameStore[20];
    int index;
    for (int i = 0; i <= 110; i++) { 
        data >> index;
        data >> m[index].name;
        data >> m[index].credits;
        for (int j = 0 ; j < 6 ; j++) {
        data >> m[index].prereq[j];     }
        data >> m[index].coreq;
        data >> m[index].classTaken;
    }
    /*
    index = 29565;
    cout << index << " " 
    <<m[index].name << " "
    <<m[index].credits << " ";
    for (int j = 0 ; j < 6 ; j++) {
    cout<<m[index].prereq[j];     }
    cout<<m[index].coreq << " "
    <<m[index].classTaken;
     */
    
    m[1].name = "This has an unusual rule";
    
    
    string *strin;
    char *letter;
    int *number;
    cin >> strin >> letter >> number;
    if (strin == "math") int subject = 1; else int subject=0;//local
    if (strin == "csci") {int subject = 2;};
    if (letter == 'm') {int subject1 = 1;} else int subject1=0;
    if (letter == 'a') {int subject1 = 2;};
    if (letter == 'b') {int subject1 = 3;};
    if (letter == 'c') {int subject1 = 4;};
    if (letter == 'n') {int subject1 = 5;};
    if (letter == 'k') {int subject1 = 6;};
    if (letter == 't') {int subject1 = 7;};
    if (letter == 'w') {int subject1 = 8;};
    if (letter == 'p') {int subject1 = 9;};
    int identity = (subject*10000)+subject1*1000+number;
    cout << identity;
    
    
    /*
    cout << "Type in the class\n";
    cin >> index;
    cout << "For " << m[index].name 
         << " the following classes are prereqs:\n";
    int j = 0, k= 5;
    for (int l = 0; l < j+1; l++) //need variable instead of j+1
    {
        for (int i = 0; i < 6; i++) //404 causes segmentation fault
        {   //403 has a loop, how do I fix?
            if (m[index].prereq[i] != 0) 
            { 
                prereqStore[j] = m[index].prereq[i];
                j++; 
            }        
        }
        //cout << index << " ";
        index = prereqStore[l]; 
        cout << index << " ";
    } cout << endl; //sort than locally search for copies
    /*
    int redudant[10][10];
    for (int i = 0 ; i < j ; i++)
    {
        for (int c = (i+1) ; c < ((j+i) % (j+1)) ; c = (c + 1) % (j-1))
        {
            if (prereqStore[c] == prereqStore[i])
            { //need to redesign this to return only nonredundant elements
                //how to i remove flagged redundant elements after
            } // how do i sort this list, give each the name..
        } //have a flag for classes I have taken before
    } 
    for (int i = 0 ; i < j ; i++) 
    {
        cout << prereqStore[i] << ", ";
    }
    */
    data.close();
    return 0;
}

void sort (double a[], int numberUsed)
{
    int indexOfNextSmallest;
    for (int index = 0; index < numberUsed - 1; index++)
    {//Place the correct value in a[index]:
        indexOfNextSmallest = 
                indexOfSmallest(a, index, numberUsed);
        swapValues(a[index], a[indexOfNextSmallest]);
        //a[0] <= a[1] <= ... <= a[index] are the smallest of the
        //original array elements. The rest of the
        //elements are in the remaining positions.
    }
}
void swapValues(double& v1, double& v2)
{
    double temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}
int indexOfSmallest(const double a[], int startIndex, int numberUsed)
{
    int min = a[startIndex], 
            indexOfMin = startIndex;
    for (int index = startIndex + 1; index < numberUsed; index++)
        if (a[index] < min)
        {
            min = a[index];
            indexOfMin = index;
            //min is the smallest of a[startIndex] through a[index]
        }
    return indexOfMin;
}
//I need a way to query the whole prereq list, look up trees

#include <iostream>
#include <fstream>
using namespace std;

struct course //number of the course
{
    string name; //what the course is called
    int credits; //This is sometimes a range
    int prereq[6]; // I want a pointer of this class
    int coreq;
    bool classTaken;
} m[2000];

int main ()
{
    fstream data;
    data.open("data");
    int prereqStore[20];
    string nameStore[20];
    int index;
    for (int i = 0; i <= 61; i++) {
        data >> index;
        data >> m[index].name;
        data >> m[index].credits;
        for (int j = 0 ; j < 6 ; j++) {
        data >> m[index].prereq[j];     }
        data >> m[index].coreq;
        data >> m[index].classTaken;
    }
    /*
    index = 310;
    cout << index << " " 
    <<m[index].name << " "
    <<m[index].credits << " "
    <<m[index].prereq1 << " "
    <<m[index].prereq2 << " "
    <<m[index].prereq3 << " "
    <<m[index].prereq4 << " "
    <<m[index].prereq5 << " "
    <<m[index].prereq6 << " "
    <<m[index].coreq << " "
    <<m[index].classTaken;
    */
    /*for (int index = 311; index >= 216; index -= 95) {
        cout << index << " "
             << m[index].name << " "
             << m[index].credits << " "
             << m[index].prereq << " "
             << m[index].classTaken << endl; 
    }*/
    
    cout << "give me a class number\nm";
    cin >> index;
    cout << "For " << m[index].name 
         << " the following classes are prereqs:\n";
    int j = 0, k= 5;
    for (int l = 0; l < j+1; l++) //need variable instead of j+1
    {
        for (int i = 0; i < 6; i++) 
        {   
            if (m[index].prereq[i] != 0) 
            { 
                prereqStore[j] = m[index].prereq[i];
                j++; 
            }        
        }
        //cout << index << " ";
        index = prereqStore[l]; 
        cout << index << " ";
    } cout << endl;
    for (int i = 0 ; i < j ; i++) 
    {
        cout << prereqStore[i] << ", ";
    }
    /*
    cout << "The class numbers are: ";
    int indexName = index;
    while (index != 0) {
        cout << "m" << m[index].prereq[0] << ", "; //How do I get rid of 0?
        index = m[index].prereq[0];
    }
    cout << endl << "The names of these classes are:\n";
    while (indexName != 0) {
        cout << m[indexName].name << "\n"; //How do I get rid of 0?
        indexName = m[indexName].prereq[0];
    }
    cout << "\n 0 it the termination of the prereq string";
    */
    data.close();
    return 0;
}
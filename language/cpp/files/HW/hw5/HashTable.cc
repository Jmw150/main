/*********************************************************************
  Author:        Jordan Winkler, IUSB, CS
                 Dana Vrajitoru, IUSB, CS
  Class:         C243 Data Structures
  File name:     HashTable.cc
  Last updated:  October 3, 2017
  Description:   Implementation of a hash table.
*********************************************************************/
//for fun
#include <cctype>
#include <cmath>

#include <iostream>
#include <iomanip>
using namespace std;

#include "HashTable.h"

// Constructor with given initial capacity.
HashTable::HashTable(int size)
    : storage(size)
{
    capacity = size;
    numObjects = 0;
} // HashTable::HashTable()

// Destructor: call the function makeEmpty instead, then deallocate
// the memory inside the storage vector
HashTable::~HashTable()
{
    makeEmpty();
    storage.clear();
} // HashTable::~HashTable()

// Delete all the objects without deleting the storage.
void HashTable::makeEmpty()
{
    for(int i=0; i<capacity; i++)
        storage[i].clear(); // delete all the nodes in the list
    numObjects = 0;
} // HashTable::makeEmpty()

// Checks if the access to a given position is safe in the
// storage. This means if the position is smaller than the capacity
// and non negative.
bool HashTable::isValid(int position)
{
    return (position >= 0 && position < capacity);
}

// Prints all the objects in the table.
void HashTable::print()
{
    ListIter iter;
    int i;
    
    cout << "The table has " << numObjects << " objects." << endl;
    if (numObjects) 
    {
        cout << "Here are the objects:" << endl;
        for (i = 0; i < capacity; i++)
            if (storage[i].size()) 
                // traverse the list at index i
                for (iter=storage[i].begin(); iter!=storage[i].end(); ++iter)
                    cout << *iter << endl;
    }
} // HashTable::print()

// Resizes the table and rehashes it, moving each stored element to
// the new index corresponding to the resized hash function.
void HashTable::resize(int newSize)
{
    int i, newIndex;
    ListIter iter;
    ListWordC save;
    WordCounter wordc;

    if (capacity == newSize)
        return;

    // save the elements from the old storage to the save list
    for (i = 0; i < capacity; i++)
    {
        // splice concatenates storage[i] to save at the end
        // and deletes the content of storage[i]
        save.splice(save.end(), storage[i]);
    }

    // vector's resize does the job
    storage.resize(newSize);
    capacity = newSize;

    // now rehash everything
    for (iter=save.begin(); iter!=save.end(); ++iter)
    {
        wordc = *iter;                  // save it
        newIndex = hashing(key(wordc)); // based on new size
        storage[newIndex].push_back(wordc);
    }
    save.clear(); // delete the saved list
} // HashTable::resize(int newSize)

// This private function inserts an object in the table when we
// already know what position we want it to be inserted at. It is
// declared as private because the user should not be able to call
// it. It is designed to be called internally by the public insertion
// function after getting the position from the hashing table.
//
// If the key of wordc has been used in the table at this position,
// then the function returns false without modifying wordc. If not, it
// inserts wordc into the list at this position and returns true.
bool HashTable::insert(WordCounter &wordc, int position)
{
    
    if (!isValid(position)) // if not 0 <= position < capacity
    {
        cerr << "Invalid position in insert: " << position << endl;
        return false;
    }
    else 
    {
        WordCounter copyWord; // don't want to modify wordc itself
        // if an object is already there, return false
        if (access(copyWord, key(wordc), position)) 
        {
            return false;
        }
        else
        {
            storage[position].push_back(wordc);
            numObjects++;
            return true;
        }
    }
} // HashTable::insert()

// This private function removes the word counter object from the list
// at the given position. It is also intended to be called internally
// because public remove function should determine the position based
// on the hash function before it calls this one. They key is used to
// locate the object which is copied to the object wordc before it is
// erased.
bool HashTable::remove(WordCounter &wordc, string k, int position)
{
    if (!isValid(position))
        return false;
    else 
    {
        ListIter iter = storage[position].begin();
        while (iter != storage[position].end() && key(*iter) != k)
            ++iter;
        if (iter == storage[position].end()) // key not there
            return false;
        else  // we found it
        {
            wordc = *iter;
            storage[position].erase(iter);
            numObjects--;
            return true;
        }
    }
} // HashTable::remove()

// Private functions to be implemented by the student.

// This private function should find if any object stored in the 
// list, linked from the given position, contains the key k. If 
// yes, then it should copy that object into the object wordc and 
// return true. If not, it should return false.
//
// wordc is an output parameter: if the key can be found, the object
// containing it should be copied into wordc
bool HashTable::access(WordCounter &wordc, string k, int position)
{
    if (!isValid(position))
        return false;
    else 
    {
        ListIter iter = storage[position].begin();
        while (iter != storage[position].end() && key(*iter) != k)
            ++iter;
        if (iter == storage[position].end()) // key not there
            return false;
        else  // we found it
        {
            wordc = *iter;
            return true;
        }
    }
} // HashTable::access()


// The most important function of the class. This function takes a
// string (a key) and determines the index in the storage array where
// an object with that key should go.
//
// This should use the actual capacity of the storage array and not
// the default value for this capacity.
int HashTable::hashing(string k)
{
/*
    int hashVal = 0;
    for (int i = 0; i < k.length() ; ++i)
        hashVal += (int(k[i]) * int(pow(151, i))) % capacity;
    if (hashVal < 0)
        hashVal *= -1;
    return hashVal % capacity;
*/

/*
    int hashVal = 0;
    for (int i = 0; i < k.length() ; ++i)
        hashVal += (5 * i + 3) * int(k[i]);
    return hashVal % capacity;
*/
    int hashVal = 0;
    //k.length() is O(1) in language standard as of c++11
    for (int i = 0; i < k.length() ; ++i) 
    {
        int temp = (hashVal << 5) ^ int(k[i]);
        hashVal = temp ^ hashVal;
    }
    if (hashVal < 0) // c++ mod can be negative, but c++ index cannot
        hashVal *= -1;
    return hashVal % capacity;
} // HashTable::hashing()

// Public functions to be implemented by the student.

// This function should first get the hash index for the key of the
// object wordc, then call the private function insert with that
// index and the same object wordc.
//
// The function checks if an object with the key of wordc exists
// in the table already, and returns false if so without changing
// the table. 
// If the key has not been used in the table before, it inserts
// wordc in the table and returns true.
bool HashTable::insert(WordCounter &wordc)
{
    return insert(wordc, hashing(wordc.getWord())); 
} // HashTable::insert()

// This function should first get the hash index for the string,
// then call the private function access with this index. 
//
// If the an object containing the key k exists in the table, the
// function returns true and a copy of the object in the parameter
// wordc. If such an object does not exist, the function returns
// false and wordc is not changed.
//
// wordc is an output parameter: the object found containing k
// must be copied into it.
bool HashTable::access(WordCounter &wordc, string s)
{
    return access(wordc, s, hashing(s));
} // HashTable::access()

// This function should first get the hash index for the string k,
// then call the private remove function with this index. 
//
// The function returns true if an object containing the key k can
// be found in the table and is removed from it, and false if not.
//
// wordc is an output parameter: the removed object must be copied
// into it.
bool HashTable::remove(WordCounter &wordc, string s)
{
    return remove(wordc, s, hashing(s));
} // HashTable::remove()

// This function should print a statistic of usage of each index in
// the table (number of objects stored at each index). It should not
// output individual elements.  
// Note: you should only need one loop in this function, and no
// iterator. Use the method size() for each element of the vector to
// print the number of nodes in that list.
void HashTable::statistic()
{
    // kind of large and useless when simply printed
    // so why not s-expression?
    cout << "objects at each index\n";
    cout << "(list ";
    for (int i = 0 ; i < capacity ; i++)
        cout << storage[i].size() << ' ';
        cout << ")\n";
} // HashTable::statistic()

// checks if a word is in the HashTable, a full check since collisions
// often happen.
bool HashTable::inTable(string word)
{
    bool listed = 0;
    ListIter iter;
    int i;
    
    i = hashing(word);
    if (storage[i].size()) 
        for (iter=storage[i].begin(); iter!=storage[i].end(); ++iter)
            if ((*iter).getWord() == word) 
                listed = 1;
    return listed;
} // inTable(string word)

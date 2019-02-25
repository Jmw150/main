/*********************************************************************
  Author:        Dana Vrajitoru, IUSB, CS
                 Jordan Winkler, IUSB, CS
  Class:         C243 Data Structures
  File name:     WordCounter.h
  Last updated:  October 3, 2017

  Description:   Definition of the class WordCounter.
                 WordCounter is a container that holds a word,
                 and how often it is used.
**********************************************************************/

#ifndef  WORDCOUNTER_H
#define  WORDCOUNTER_H

#include <string> // contains a definition of a "string" data type 
                  // that's easier to use than standard C/C++ strings 
                  // It requires the namespace std.
#include <iostream>
using namespace std;

class WordCounter
{
private:
  
    string word;
    int  count;
    
public:
    // Constructor with default values for both parameters. By default
    // if we don't specify how many occurences of a word we have, we'll
    // assume that we have at least one, otherwise we wouldn't need to
    // store the word at all.
    WordCounter (string s = "", int n = 1); 
    
    // Constructor with the word specified as a regular array of
    // characters (c string).
    WordCounter (char *s, int n = 1); 
    
    // Verify if the word stored in this object is equal to that string
    bool contains(char *s);
    
    // Verify if the word stored in this object is equal to that string
    bool contains(string s);

    // If we need to get these values.
    string getWord();
    int getCount();
    
    // If we need to reset these values later.
    void setWord(string s);  
    void setWord(char *s);  
    void setCount(int n = 1);
    
    // Add 1 to the count.
    void increment();
    
    // If we want to compare two word counters. These will compare the
    // two strings (words) alphabetically. Will not compare how
    // often the word is used.
    int operator<  (const WordCounter &y);
    int operator<= (const WordCounter &y);
    int operator>  (const WordCounter &y);
    int operator>= (const WordCounter &y);
    
    // Comparison operators. Compares words and count of words.
    bool operator== (const WordCounter &y) const;
    bool operator!= (const WordCounter &y) const;
    
    // To be used in a hash table. Returns the word.
    friend string key (const WordCounter & x);
    
    // Easy output of the word counter. The parameter output can be 
    // cout.
    friend ostream & operator<< (ostream & output, 
                                 const WordCounter & x);
};


#endif

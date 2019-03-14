/********************************************************************
  Author:        Dana Vrajitoru, IUSB, CS
  Class:         C243 Data Structures
  File name:     main.cc
  Last updated:  November 15, 2017
  Description:   Testing the graph class.
*********************************************************************/

#include "graph.h"
#include <stdio.h>
#include <iostream>
using namespace std;

/********************************************************************
 Prototypes
*********************************************************************/

// Build the graph in the first example from class.
void makeGraph1(Graph &myGraph);

// The main loop of the program.
void mainLoop(Graph &myGraph);
// Prints the menu options.
void printMenu();
// Executes the menu options.
bool executeMenu(Graph &myGraph, char option);

/********************************************************************
 Functions
*********************************************************************/

int main()
{
    Graph aGraph;
    makeGraph1(aGraph);
    aGraph.print();
    aGraph.makeEmpty();
    aGraph.read("graph1.txt");
    aGraph.print();
    mainLoop(aGraph);
    return 0;
} // main()

// Build the graph in the first example from class.
void makeGraph1(Graph &myGraph)
{
    myGraph.init(5);
    myGraph.addEdge("A", "B");
    myGraph.addEdge("A", "D");
    myGraph.addEdge("A", "E");
    myGraph.addEdge("B", "C");
    myGraph.addEdge("B", "D");
    myGraph.addEdge("C", "D");
    myGraph.addEdge("C", "E");
} // makeGraph1()

// The main loop of the program.
void mainLoop(Graph &myGraph)
{
    bool quit=false;
    char answer;
    while (!quit) {
        printMenu();
        cin >> answer;
        cout << endl << endl;
        quit = executeMenu(myGraph, answer);
        cout << endl;
    }
} // mainLoop()

// Prints the menu options.
void printMenu()
{
    cout << "You can perform the following actions:" << endl
         << "R : read the graph from a file" << endl
         << "W : write graph to a file" << endl
         << "M : manually enter graph" << endl
         << "P : print the graph" << endl
         << "B : print the graph in breadth-first order" << endl
         << "D : print the graph in depth-first order" << endl
         << "E : empty the graph" << endl
         << "Q : quit" << endl
         << endl << "Enter your choice: ";
} // printMenu()

// Executes the menu options.
bool executeMenu(Graph &myGraph, char option)
{
    char buffer[80];
    int index;
    switch (option) {
    case 'r':
    case 'R':
        cout << "Enter the input file name" << endl;
        cin >> buffer;
        if (!myGraph.read(buffer))
            cout << "Could not read the graph from the file" << endl;
        break;
    case 'w':
    case 'W':
        cout << "Enter the output file name" << endl;
        cin >> buffer;
        myGraph.write(buffer); // maybe put in a check later
        break;
    case 'm':
    case 'M':
        myGraph.input();
        break;
    case 'p':
    case 'P':
        myGraph.print();
        break;
    case 'b':
    case 'B':
        cout << "Enter the index or the origin vertex" << endl;
        cin >> index;
        myGraph.printBf(index);
        break;
    case 'd':
    case 'D':
        cout << "Enter the index or the origin vertex" << endl;
        cin >> index;
        myGraph.printDf(index);
        break;
    case 'e':
    case 'E':
        myGraph.makeEmpty();
        break;
    case 'q':
    case 'Q':
        return true;
    default:
        cout << "Unknown option, try again" << endl;
    }
    return false;
} // executeMenu()

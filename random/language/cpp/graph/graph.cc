/********************************************************************
  Author:        Dana Vrajitoru, IUSB, CS
  Class:         C243 Data Structures
  File name:     graph.cc
  Last updated:  November 15, 2017
  Description:   Implementation of the graph class.
*********************************************************************/

#include "graph.h"
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstring>

// A sort of hash function for the names - works only if the names are
// in sequence, all of them starting with an uppercase, and none of
// them having the same starting letter. Like, 'A', 'B', 'C', etc.
int Graph::index(const string name)
{
    return int(name[0] - 'A');
} // Graph::index()

// Constructor with a given number of vertices. Creates an undirected
// graph with nv vertices and no edges.
Graph::Graph(int nv)
{
    numVertices = 0;
    numEdges = 0;
    directed = false;
    if (nv > 0)
        init(nv);
} // Graph::Graph()

// Destructor - empty the lists and the vector.
Graph::~Graph()
{
    makeEmpty();
} // Graph::~Graph()

// Starts the graph over, erases all the data in it.
void Graph::makeEmpty()
{
    directed = false;
    if (numVertices) 
    {
        for (int i=0; i < numVertices; i++) 
            vertices[i].edgeList.clear(); // delete all the edge lists

        // then delete the vector itself
        vertices.erase(vertices.begin(), vertices.end());
        numVertices = 0;
        numEdges = 0;
    }
} // Graph::makeEmpty()

// Tells us if the graph is directed.
bool Graph::isDirected()
{
    return directed;
} // Graph::isDirected()

// Set the direction flag to directed or undirected.
void Graph::setDirected()
{
    directed = true;
} // Graph::setDirected()

void Graph::setUndirected()
{
    directed = false;
} // Graph::setUndirected()

// Initialize the data structure for the specified number of vertices.
void Graph::init(int nv)
{
    if (numVertices > 0) // is there something in the graph?
        makeEmpty();     // the clear the data
    addVertex(nv-1);     // Last index we need
} // Graph::init()

// Adds a vertex with the specified ind_nex. It also adds all the
// intermediate vertices from the current position to the new one. It
// creates labels with uppercase letters in order.
void Graph::addVertex(int index)
{
    string s = "A";
    for(int i = numVertices; i <= index; i++) 
    {
        s[0] = char('A' + i);
        addVertex(s);
    }
} // Graph::addVertex()

// Adds a vertex with a given name.
void Graph::addVertex(const string theName)
{
    vertex newVertex;
    newVertex.name = theName;
    vertices.push_back(newVertex);
    numVertices++;
}

// Adds an edge based on vertex names. If the graph is undirected,
// it adds the edge in both directions.
void Graph::addEdge(const char *name1, const char *name2)
{
    // convert the strings to indexes
    int index1 = index(string(name1));
    int index2 = index(string(name2));

    // make sure the vertices are already there
    if (index1 > numVertices)
        addVertex(index1);
    if (index2 >= numVertices)
        addVertex(index2);

    // call the other function
    addEdge(index1, index2);
} // Graph::addEdge()

// Adds an edge based on vertex names. If the graph is undirected,
// it adds the edge in both directions.
void Graph::addEdge(const string name1, const string name2)
{
    // convert the strings to indexes
    int index1 = index(name1);
    int index2 = index(name2);

    // make sure the vertices are already there
    if (index1 >= numVertices)
        addVertex(name1);
    if (index2 >= numVertices)
        addVertex(name2);

    // call the other function
    addEdge(index1, index2);
} // Graph::addEdge()

// Adds an edge between vertices identified by their index
void Graph::addEdge(const int index1, const int index2)
{
    vertices[index1].edgeList.push_back(index2);
    if (!directed)
        vertices[index2].edgeList.push_back(index1);
    numEdges++;  
} // Graph::addEdge()

// Reads the graph from a file
// expected file format:
// undirected or directed, number of verticies, vertex names, edges
bool Graph::read(const char *filename)
{
    ifstream fin(filename);
    if (!fin.good())
        return false;
    if (numVertices > 0) // some data that was there before
        makeEmpty();

    char buffer[20], buffer1[20]; //two buffers for edges, more organized
    int nrv; // number of verticies

    fin >> buffer; // read the letter U or D
    if (buffer[0] == 'd' || buffer[0] == 'D')  
        directed = true;
    else
        directed = false;

    fin >> nrv; // read the number of vertices

    for (int i=0; i<nrv; i++) // read all the names of vertices
    {
        fin >> buffer; // read the vertex name
        addVertex(string(buffer)); // this will also update numVertices
    }

    // read all the edges until the end of the file 
    while (!fin.eof() && fin.good()) // we have not reached the end of the file
    {
        fin >> buffer;
        if (strlen(buffer) && fin.good()) // was the first name read correctly?
        {
            fin >> buffer1;
            if (strlen(buffer) && strlen(buffer1))  // how about the second?
            {
                // we know both names are valid here
                buffer[strlen(buffer)-1]='\0'; // Deleting the ','
                addEdge(string(buffer), string(buffer1));
            }
        }
    }
    fin.close();
    return true;
} // Graph::read()

// Simple print of the graph.
void Graph::print()
{
    int i;
    if (directed)
        cout << "The graph is directed" << endl;
    else
        cout << "The graph is undirected" << endl;
    cout << "The graph contains " << numVertices
         << " vertices and " << numEdges << " edges" << endl;

    if (numVertices) 
    {
        // print all the names
        cout << "The vertex names are: ";
        for (i=0; i<numVertices; i++)
            cout << vertices[i].name << ' ';

        // print all the adjacency lists
        cout << endl 
             << "The adjacency list for each vertex is:" << endl;
        for (i=0; i<numVertices; i++) 
        {
            cout << "vertex " << vertices[i].name << ": ";
            ListIntIter iter;
            iter = vertices[i].edgeList.begin();
            while (iter != vertices[i].edgeList.end()) 
            {
                // here we have an edge from i to *iter.

                // first output the content of the node
                cout << vertices[*iter].name << ' '; 
                iter++;       // then move to the next node
            }
            cout << endl;
        }
    }
} // Graph::print()

// Functions to be implemented by the students.

// Writes the graph to a file that is compatible with the function read.
void Graph::write(const char *filename)
{
    // create/write-over file
    ofstream fout(filename);
   
    // directed vs undirected header
    if (directed == true)
    {
        fout << 'D' << endl;
    }
    else
    {
        fout << 'U' << endl;
    }

    // write the number of verticies
    fout << numVertices << endl;

    // write out each vertex name
    for (int i = 0 ; i < numVertices ; i++)
    {
        fout << vertices[i].name << endl;
    }

    // make second graph type for easy printing of edges
    bool** graph = new bool*[numVertices];
    for (int i = 0 ; i < numVertices ; i++)
        graph[i] = new bool[numEdges];

    // clean graph
    for (int i = 0 ; i < numVertices ; i++)
        for (int j = 0 ; j < numEdges ; j++)
            graph[i][j] = 0; 

    // assign edges
    for (int i = 0 ; i < numVertices ; i++)
    {
        for (ListIntIter v = vertices[i].edgeList.begin() ;
             v != vertices[i].edgeList.end()              ;
             ++v )
        {
            graph[i][*v] = 1; 
        }
    }

    // if graph is undirected, do not read lower half
    if (directed == false)
        for (int i = 0 ; i < numVertices ; i++)
            for (int j = i ; j < numEdges ; j++)
                if (graph[i][j] == true)
                {
                    fout << vertices[i].name << ", ";
                    fout << vertices[j].name << endl; 
                }
    if (directed == true)
        for (int i = 0 ; i < numVertices ; i++)
            for (int j = 0 ; j < numEdges ; j++)
                if (graph[i][j] == true)
                {
                    fout << vertices[i].name << ", ";
                    fout << vertices[j].name << endl; 
                }

    // free used memory
    for (int i = 0 ; i < numVertices ; i++)
        delete [] graph[i];
    delete [] graph;
    ; // The student must supply the code.
}

// Inputs a graph from the user. First, it should ask if the graph is
// directed or not. Then, it should ask for the number of vertices,
// then call the function init with the number of vertices to
// automatically generate the labels as uppercase letters, and then
// ask the use to input the edges. The user will be expected to enter
// uppercase letters to identify the edges, and anything else should
// end the input process.
void Graph::input()
{
    makeEmpty();
    char buffer[20], buffer1[20]; //two buffers for edges, more organized
    int nrv; // number of verticies

    cout << "Will this be an undirected or directed graph (U/D)\n";
    cin >> buffer; // read the letter U or D
    if (buffer[0] == 'd' || buffer[0] == 'D')  
        directed = true;
    else if (buffer[0] == 'u' || buffer[0] == 'U')  
        directed = false;

    cout << "how many verticies should this graph have\n";

    cin >> nrv; // read the number of vertices

    init(nrv);

    cout << "add the edges as uppercase letters\n";
    
    while (true)
    {
        cin >> buffer;
        if (buffer[0] >= 'A' && buffer[0] <= 'Z') // was the first name read correctly?
        {
            cin >> buffer1;
            if (buffer1[0] >= 'A' && buffer1[0] <= 'Z')  // how about the second?
            {
                // we know both names are valid here
                addEdge(string(buffer), string(buffer1));
            } 
            else break;
        } 
        else break;
    }

    ; // The student must supply the code.
} // Graph::input()

// Print the graph in depth-first and breadth-first order. Implement
// one of these two functions.
void Graph::printDf(int origin)
{
    if (origin >= numVertices)
    {
        cout << "index out of range\n";
        return;
    }

    // keep 'visited' scoped to this function
    bool* visited = new bool[numVertices];
    for (int i = 0 ; i < numVertices ; i++)
        visited[i] = false;

    DfRecursion(origin, visited);
    ; // The student must supply the code.
} // Graph::printDf()

void Graph::printBf(int origin)
{
    if (origin >= numVertices)
    {
        cout << "index out of range\n";
        return;
    }

    bool* visited = new bool[numVertices];
    for (int i = 0 ; i < numVertices ; i++)
        visited[i] = false;

    // STL List comes with queue-ish functions
    ListInt queue;
 
    visited[origin] = true;
    queue.push_back(origin);
 
    int vertex;
    while(queue.empty() == false)
    {
        vertex = queue.front();
        queue.pop_front(); // stl pop does not return anything..
        cout << vertices[vertex].name << ' ';
 
        for (ListIntIter v = vertices[vertex].edgeList.begin() ;
             v != vertices[vertex].edgeList.end()              ;
             ++v )
        {
            if (visited[*v] == false)
            {
                visited[*v] = true;
                queue.push_back(*v);
            }
        }
    }

    ; // The student must supply the code.
} // Graph::printBf()


void Graph::DfRecursion(int origin, bool* &visited)
{
    visited[origin] = true;

    cout << vertices[origin].name << ' ';

    for (ListIntIter v = vertices[origin].edgeList.begin() ;
         v != vertices[origin].edgeList.end()              ;
         ++v )
    {
        if (visited[*v] == false)
            DfRecursion(*v, visited);
    }
} // Graph::DfRecursion

            

/* 
    // good for full print
    for (int i = 0 ; i < numVertices ; i++)
    {
        for (ListIntIter v = vertices[i].edgeList.begin() ;
             v != vertices[i].edgeList.end()              ;
             ++v )
        {
            fout << vertices[i].name << ", ";
            fout << vertices[*v].name << endl; 
        }
    }
*/

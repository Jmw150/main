/********************************************************************
  Authors:       Dana Vrajitoru, and Jordan Winkler
  Class:         C243, Fall 2017
  File name:     MyArray.cc
  Last updated:  August 25, 2017.
  Description:   Implementation of a class that implements a safe array.
*********************************************************************/

#include "MyArray.h"
#include <iostream>
using namespace std;
#include <cstdlib>
#include <time.h> //for randomize function
#include <limits> //for istream size

/******************************************************************
| Name: MyArray
|
| Description: 
|     Constructor with given size, can be used as default 
|     constructor.
|
| Parameters: desired size of the array
|
| Returns: nothing
\*****************************************************************/
MyArray::MyArray(int theSize)
{
    // initialize the object as empty
    array = NULL;
    size = 0;
    // then use the resize function to allocate the memory
    resize(theSize);
} // MyArray::MyArray()

/******************************************************************
| Name: ~MyArray
|
| Description: 
|     Destructor. If the array is not empty, it must be deallocated.
|
| Parameters: none
|
| Returns: nothing
\*****************************************************************/
MyArray::~MyArray()
{
    // call the function empty instead, so we only need to modify in 
    // one place if anything changes
    empty();
} // MyArray::~MyArray()

/******************************************************************
| Name: MyArray
|
| Description: 
|     Copy constructor: initializes the target object with the 
|     size of the object data and copies the content of the 
|     object data into the target object.
|
| Parameters: array and its size
|
| Returns: nothing
\*****************************************************************/
MyArray::MyArray(MyArray &data)
    : size(data.size) // initialize the size
{
    // allocate the array
    array = new int[size];

    // copy all the values from data
    for (int i=0; i<size; i++)
        array[i] = data.array[i];
} // MyArray::MyArray()

/******************************************************************
| Name: =
|
| Description: 
|    Assignment operator: if the object data is different from the
|    target object, initializes the target object with the size of 
|    the object data and copies the content of the object data.
|
| Parameters: a = b, where a and b are MyArray
|
| Returns: a MyArray
\*****************************************************************/
MyArray &MyArray::operator=(MyArray &data)
{
    // check that we're not trying to copy an object onto itself
    if (this != &data) // different address in the memory
    {
        resize(data.size);
        for (int i=0; i<size; i++)
            array[i] = data.array[i];
    }
    else 
        cout << "Attempt to copy an object on itself. " 
             << "Operation ignored." << endl;
    return *this;
} // MyArray::operator=()


/******************************************************************
| Name: empty
|
| Description: Deallocates the array and reset the size to 0
|
| Parameters: none
|
| Returns: nothing
\*****************************************************************/
void MyArray::empty()
{
    // make sure we have an array to delete
    if (size != 0 && array != NULL) 
    {
        size = 0;
        delete [] array;
        array = NULL; // make the pointer NULL after deallocating 
    }
} // MyArray::empty()

/******************************************************************
| Name: empty
|
| Description: 
|     Resizes the array with the new size. If the object contains an
|     array, it is deallocated first.
|
| Parameters: the size of the array 
|
| Returns: nothing
\*****************************************************************/
void MyArray::resize(int theSize)
{
    if (theSize >= 0)     // check that the new size is valid
    {
        if (size > 0)     // if the array is not empty, deallocate first
            empty();
        if (theSize != 0) // allocate again if the size is not 0
        {
            size = theSize;
            array = new int[size];
        }
    }
    else                  // negative size, give an error message
        cout << "Resize attepmted with a negative size. "
             << "Operation ignored." << endl;
} // MyArray::resize()

/******************************************************************
| Name: []
|
| Description: 
|     Access an element of the array. If the index (subscript) is 
|     out of the range of the array, it prints an error message 
|     and exits the program.
|
| Parameters: index
|
| Returns: value of array at index
\*****************************************************************/
int &MyArray::operator[](int index)
{
    // check that the index is in the right range
    if (index >= 0 && index < size) 
        return array[index]; 
    else // error
    {
        cerr << "Illegal access to an element of the array." << endl
             << "The size of the array was " << size 
             << " and the index was " << index << endl;
        exit(1);
    }
} // MyArray::operator[]()

/******************************************************************
| Name: getSize
|
| Description: Returns the size of the array.
|
| Parameters: nothing
|
| Returns: integer that is the size of the array
\*****************************************************************/
int MyArray::getSize()
{
    return size;
} // MyArray::getSize()

/******************************************************************
| Name: output
|
| Description: Outputs the elements of the array.
|
| Parameters: none
|
| Returns: nothing
\*****************************************************************/
void MyArray::output()
{
    // output the size
    cout << "The array of size " << size 
         << " contains the elements:" << endl;
    // then all the elements
    for (int i=0; i<size; i++)
        cout << array[i] << ' ';
    cout << endl;
} // MyArray::output()

/******************************************************************
| Name: << 
|
| Description: 
|     We define this so that we can write "cout << a;" if a is 
|     an object of this class. This is not a class method.
|
| Parameters: out and data for "out << data"
|
| Returns: ostream
\*****************************************************************/
ostream &operator<<(ostream &out, MyArray &data)
{
    // output the size
    out << "The array of size " << data.size 
        << " contains the elements:" << endl;
    // then all the elements
    for (int i=0; i<data.size; i++)
        out << data.array[i] << ' ';
    out << endl;
    return out;
} // operator<<()

/******************************************************************
| Name: >>
|
| Description: 
|     We define this so that we can write "cin >> a;" if a is an 
|     object of this class. This is not a class method. Kept simple. 
|     User prompting and error handling done externally.
|
| Parameters: in and data for "in >> data"
|
| Returns: istream
\*****************************************************************/
istream &operator>>(istream &in, MyArray &data)
{
    //input array
    for (int i=0; i<data.size; i++)
        in >> data.array[i];
    return in;
} // operator>>()


/******************************************************************
| Name: input
|
| Description: 
|     Input the elements of the array from the console. 
|     prompts user and handles some errors
|
| Parameters: none
|
| Returns: none
\*****************************************************************/
void MyArray::input()
{
    // ask for size of array
    int newSize;
    cout << "Size of array: ";
    cin >> newSize;

    // catch bad size
    if (cin.fail() || newSize < 0)
    {
        cout << "Size does not make sense. Ignoring input.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        newSize = size;
    }

    // calling appropriate function
    resize(newSize);

    // asking user to input array
    cout << "Input " << newSize << " elements: ";

    //input array
    for (int i=0; i<newSize; i++)
        cin >> array[i];

} // MyArray::input()

/******************************************************************
| Name: randomize
|
| Description: 
|     randomizes the array, changes the length, optional argument 
|     is the cap for random numbers generated
|
| Parameters: desired size of the array, cap of random numbers
|
| Returns: nothing
\*****************************************************************/
void MyArray::randomize(int theSize, int limit)
{
    //seed a random number generator
    srand (time(NULL));

    //reallocate array if requested, and the request makes sense
    if (theSize >= 0 && theSize != size)        
    {
        resize(theSize);
    }

    //randomize 
    for (int i = 0 ; i < theSize ; i++)
    {
        array[i] = rand() % (limit - 1);
    }
    
} // MyArray::randomize(int theSize, int limit=100)

/******************************************************************
| Name: == 
|
| Description: checks if a[] == b[]
|
| Parameters: a == b , where a and b are MyArray
|
| Returns: 1 true, 0 false
\*****************************************************************/
bool MyArray::operator==(MyArray &data)
{
    // if size does not match, then arrays do not match
    if ((*this).size != data.size)
        return 0;

    // if an element in this is not an element in data,
    // then arrays do not match
    for (int i = 0 ; i < (*this).size ; i++ )
    {
        if ((*this)[i] != data[i])
            return 0;
    }

    // arrays match
    return 1;
} // MyArray::operator==(MyArray &data)

/******************************************************************
| Name: != 
|
| Description: checks if a[] != b[]
|
| Parameters: a != b , where a and b are MyArray
|
| Returns: 1 true, 0 false
\*****************************************************************/
bool MyArray::operator!=(MyArray &data)
{
    return !((*this)==data);
} //MyArray::operator==(MyArray &data)

/******************************************************************
| Name: scalarProduct
|
| Description: 
|     gives back the scalar product of a[] and b[]
|     implement by a.scalarProduct(b)
|
| Parameters: b
|
| Returns: integer
\*****************************************************************/
int MyArray::scalarProduct(MyArray &data)
{
    //normal inner product
    int product = 0;
    for (int i = 0 ; i < (*this).size && i < data.size ; i++)
    {
        product += (*this)[i] * data[i];
    }

    return product;
}


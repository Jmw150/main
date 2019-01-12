//first insertion sort
//made by: Jordan Winkler
//made on: 06/05/2017

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void swap(int* array, int a, int b, int maxSize);


int main()
{
    srand(time(NULL));

    int max = 20;

    int* array = new int[max];

    for (int i = 0 ; i < max ; i++)
        array[i] = rand() % 250;

    cout << "array: ";
    for (int i = 0 ; i < max ; i++)
        cout << array[i] << ' ';
    cout << endl;

    //insert sort
    for (int outside = 0 ; outside < max ; outside++)
        for (int i = outside ; i > 0 ; i--)
        {
            if (array[i-1] > array[i])
                swap(array, i-1, i, max);
        }
    
    cout << "array: ";
    for (int i = 0 ; i < max ; i++)
        cout << array[i] << ' ';
    cout << endl;

    return 0;
}

void swap(int* array, int a, int b, int maxSize)
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

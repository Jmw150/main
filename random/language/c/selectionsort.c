/**
Selection Sort Algorithm C Example by Codebind.com
*/
#include <stdio.h>
#include <stdlib.h>

void PrintArray(int *array, int n) {
  for (int i = 0; i < n; ++i)
    printf("%d ", array[i]);
  printf("\n");
}

inline void Swap(int &a, int &b){
  int k = a;
  a = b;
  b = k;
}

void SelectionSort(int arr[], int arr_size){
  for(int i = 0; i < arr_size - 1; ++i){
    int min = i;
    for(int j = i+1; j < arr_size; ++j)
      if(arr[j] < arr[min])
        min = j;
    Swap(arr[min], arr[i]);
  }
}

int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int n = sizeof(array)/sizeof(array[0]);

  printf("Before Selection Sort :\n");
  PrintArray(array, n);

  SelectionSort(array, n);

  printf("After Selection Sort :\n");
  PrintArray(array, n);
  return (0);
}


/*
OUTPUT
Before Selection Sort :
94 42 50 95 333 65 54 456 1 2325
After Selection Sort :
1 42 50 54 65 94 95 333 456 2325
*/

/**
Insertion Sort Algorithm C Example by Codebind.com
*/
#include <stdio.h>
#include <stdlib.h>

void PrintArray(int *array, int n) {
  for (int i = 0; i < n; ++i)
    printf("%d ", array[i]);
  printf("\n");
}

void InsertionSort(int arr[], int arr_size){
  if(arr_size > 1){
    int size = arr_size;
    for(int i = 1; i < size; ++i){
      int j = i - 1;
      int key = arr[i];
      while(j >= 0 && arr[j] > key){
        arr[j+1] = arr[j];
        --j;
      }
      arr[j+1] = key;
    }
  }
}


int main() {
  int array[] = {94, 42, 50, 95, 333, 65, 54, 456, 1, 1234};
  int n = sizeof(array)/sizeof(array[0]);

  printf("Before Insertion Sort :\n");
  PrintArray(array, n);

  InsertionSort(array, n);

  printf("After Insertion Sort :\n");
  PrintArray(array, n);
  return (0);
}


/*
OUTPUT
Before Insertion Sort :
94 42 50 95 333 65 54 456 1 2325
After Insertion Sort :
1 42 50 54 65 94 95 333 456 2325
*/

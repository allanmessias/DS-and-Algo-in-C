#include <stddef.h>
#include <stdio.h>

int get_array_length(int *arr, int size);

int main (int argc, char *argv[])
{
  int i; 
  int marks[] = {1, 2, 3, 4, 5};
  

  // gets the length of the array
  int length = get_array_length(marks, sizeof(marks));


  for (i = 0; i < length; i++) {
    printf("%d \n", marks[i]);
  }; 
  
  return 0;
} 

int get_array_length(int *arr, int size) {
  return size / sizeof(arr[0]);
}


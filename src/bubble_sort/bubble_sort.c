#include <stdio.h>


void swap_values(int *array, int i, int j)
{
  int temp_var = array[i];
  array[i] = array[j];
  array[j] = temp_var;
}


void bubble_sort(int array[], int array_length)
{
  int i, j;
  for (i = 0; i < array_length - 1; i++) {
    for (j = 0; j < array_length - 1; j++) {
      if (array[j] > array[j + 1])
        swap_values(array, j, j + 1);
    }
  }
}


void print_array(int array[], int array_length)
{
  int i;
  for (i = 0; i < array_length; i++)
    printf("%d ", array[i]);
  printf("\n");
}


int main()
{
  int array[] = { 11, 170, 2, 1, 5, 17, 77, 83, 19 };
  int array_length = sizeof(array) / sizeof(array[0]);
  printf("Array before being sorted: \n");
  print_array(array, array_length);
  printf("Array after being sorted: \n");
  bubble_sort(array, array_length);
  print_array(array, array_length);
  return 0;
}

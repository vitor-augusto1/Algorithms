#include <stdio.h>


int partition(int *array, int start, int end)
{
  int pivot = array[start];
  int left = start + 1;
  int right = end;
  int flag = 0;
  while (!flag) {
    while (left <= right && array[left] <= pivot)
      left = left + 1;
    while (array[right] >= pivot && right >= left)
      right = right - 1;
    if (right < left) {
      flag = 1;
    } else {
      int temp = array[left];
      array[left] = array[right];
      array[right] = temp;
    }
  }
  int temp = array[start];
  array[start] = array[right];
  array[right] = temp;
  return right;
}


void quick_sort(int *array, int start, int end)
{
  if (start < end) {
    int partition_position = partition(array, start, end);
    quick_sort(array, start, partition_position - 1);
    quick_sort(array, partition_position + 1, end);
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
  int array[] = { 50, 25, 92, 16, 76, 30, 43, 54, 19 };
  int array_length = sizeof(array) / sizeof(array[0]);
  printf("Array before being sorted: \n");
  print_array(array, array_length);
  printf("Array after being sorted: \n");
  quick_sort(array, 0, array_length - 1);
  print_array(array, array_length);
  return 0;
}

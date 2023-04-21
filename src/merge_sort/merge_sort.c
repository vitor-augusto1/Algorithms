#include <stdio.h>
#include <stdlib.h>

void mergeSort(int *array, int start, int end);
void merge(int *array, int start, int middle, int end);
void printArray(int *array, int size);

int main()
{
  int arr[12] = {100, 2, 8888, 1, 800, 123, 532, 51, 123, 66, 12};
  int arr_size = sizeof(arr) / sizeof(arr[0]);
  puts("This is was the given array: ");
  printArray(arr, arr_size);
  mergeSort(arr, 0, arr_size - 1);
  puts("\nSorted array: ");
  printArray(arr, arr_size);
  return 0;
}

void printArray(int *array, int size)
{
  int index;
  for (index = 0; index < size; index++)
    printf("%d ", array[index]);
  printf("\n");
}

void mergeSort(int *array, int start, int end)
{
  int middle;
  if (start < end) {
    middle = start + (end - start) / 2;

    mergeSort(array, start, middle);
    mergeSort(array, middle + 1, end);

    merge(array, start, middle, end);
  }
}

void merge(int *array, int start, int middle, int end)
{
  int *temp, p1, p2, size, i, j, k;
  int end1 = 0;
  int end2 = 0;
  size = end - start + 1;

  // Create new 2 arrays to store subarrays
  p1 = start;
  p2 = middle + 1;

  // Create new temp array to merge the above 2 subarrays
  temp = (int *) malloc(size * sizeof(int));

  if (temp != NULL) {
    for (i = 0; i < size; i++) {
      if (!end1 && !end2) {
        if(array[p1] < array[p2])
          temp[i] = array[p1++];
        else
          temp[i] = array[p2++];
        if (p1 > middle) end1 = 1;
        if (p2 > end) end2 = 1;
      } else {
        if (!end1)
          temp[i] = array[p1++];
        else
          temp[i] = array[p2++];
      }
    }
    
    // Copy from temp to original array
    for (j = 0, k = start; j < size; j++, k++)
      array[k] = temp[j];
  }
  free(temp);
}

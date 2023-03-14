#include <stdio.h>
#include <stdlib.h>

int recursiveBinarySearch(int array[], int lower, int higher, int target)
{
  if (higher >= lower) {
    int middleValue = (lower + higher) / 2;
    int guess = array[middleValue];
    if (guess == target)
      return middleValue;
    if (guess > target)
      return recursiveBinarySearch(array, lower, higher - 1, target);
    else
      return recursiveBinarySearch(array, lower + 1, higher, target);
  }

  return -1;
}

int main(void)
{
  int arr[] = { 2, 3, 4, 10, 40 };
  int arrayLength = sizeof(arr) / sizeof(arr[0]);
  int myTarget = 10;
  int result = recursiveBinarySearch(arr, 0, arrayLength - 1, myTarget);
  (result == -1)
    ? printf("Element: %d is not present in array.", result)
    : printf("Element: %d is present in array.", result);
  return 0;
}

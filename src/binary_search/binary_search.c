#include <stdio.h>
#include <stdlib.h>

// Problem:
// Given a sorted array arr[] of n elements, write a function to
// search a given element x in arr[] and return the index of x in the array.
// Consider array is 0 base index.

// Input: arr[] = { 10, 20, 30, 40, 100, 200, 500, 100000 } target = 30
// Output: 2

int binarySearch(int list[], int target, int arrayLength)
{
  int lower = 0;
  int higher = arrayLength - 1;
  
  while (lower <= higher) {
    int middleValue = (lower + higher) / 2;
    int guess = list[middleValue];
    if (guess == target)
      return middleValue;
    if (guess > target)
      higher = middleValue - 1;
    else
      lower = middleValue + 1;
  }

  return -1;
}

int main(void)
{
  int myArray[8] = { 10, 20, 30, 40, 100, 200, 500, 600 };
  int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
  printf("%d\n", binarySearch(myArray, 30, myArrayLength));
  printf("%d\n", binarySearch(myArray, 2, myArrayLength));
  return 0;
}

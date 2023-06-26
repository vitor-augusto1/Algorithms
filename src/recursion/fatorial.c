#include <stdio.h>


int fat(int number)
{
  printf("Now number is equal to %d\n", number);
  if (number < 0)
    return -1;
  if (number == 0 || number == 1)
    return 1;
  while (number >= 1)
    return fat(number - 1) * number;
  return 1;
}


int main()
{
  int fat1 = fat(5);
  int fat2 = fat(0);
  printf("Fat1: %d\n", fat1);
  printf("Fat2: %d", fat2);
  return 0;
}

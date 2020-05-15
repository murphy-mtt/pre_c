#include <stdio.h>

int main()
{
  int number;
  printf("Input a integer: ");
  scanf("%d", &number);
  (number % 2 == 0)?printf("%d is a even number.", number):printf("%d is odd number", number);
  printf("\n");
  return 0;
}


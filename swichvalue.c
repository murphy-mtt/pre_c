#include <stdio.h>

int main()
{
  double firstNumber, secondNumber, temporaryVariable;
  printf("Input the first number: ");
  scanf("%lf", &firstNumber);
  printf("Input the second number: ");
  scanf("%lf", &secondNumber);
  temporaryVariable = firstNumber;
  firstNumber = secondNumber;
  secondNumber = temporaryVariable;
  printf("\nAfter swiching, 1st num is %.2lf\n", firstNumber);
  printf("After swiching, 2nd num is %.2lf\n", secondNumber);
  return 0;
}


#include <stdio.h>

int main()
{
  int integerType;
  float floatType;
  double doubleType;
  char charType;

  int a = 90;
  long b;
  long long c;
  double e;
  long double f;

  printf("size of int: %ld bytes\n", sizeof(integerType));
  printf("size of float: %ld bytes\n", sizeof(floatType));
  printf("size of double: %ld bytes\n", sizeof(doubleType));
  printf("size of char: %ld bytes\n", sizeof(charType));

  printf("size of int: %ld bytes\n", sizeof(a));
  printf("size of long: %ld bytes\n", sizeof(b));
  printf("size of long long: %ld bytes\n", sizeof(c));
  printf("size of double: %ld bytes\n", sizeof(e));
  printf("size of long double: %ld bytes\n", sizeof(f));
  printf("%d, %o, %x, %p\n", a, a, a, &a);
  return 0;
}


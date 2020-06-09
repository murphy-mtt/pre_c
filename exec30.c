#include <stdio.h>

int main()
{
  long ge, shi, qian, wan, x;
  printf("Type into number. \n");
  scanf("%ld", &x);
  wan = x/10000;
  qian = x % 10000 / 1000;
  shi = x % 100 / 10;
  ge = x % 10;
  if (ge == wan && shi == qian){
    printf("This is a palindrome number.\n");
  } else {
    printf("This is not a palindrome number.\n");
  }
}


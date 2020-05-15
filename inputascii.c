#include <stdio.h>

int main()
{
  char c;
  printf("Input a character: ");
  scanf("%c", &c);
  printf("%c ASCII is %d, address is %p\n", c, c, &c);
}


#include <stdio.h>

int main()
{
  char c;
  int letters=0, spaces=0, digits=0, others=0;
  printf("Input some letters: \n");
  while((c=getchar())!='\n')
  {
    if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
      letters++;
    else if (c>='0'&&c<='9')
      digits++;
    else if (c==' ')
      spaces++;
    else
      others++;
  }
  printf("Letters=%d, Digits=%d, Spaces=%d, Others=%d\n", letters, digits, spaces, others);
  return 0;
}


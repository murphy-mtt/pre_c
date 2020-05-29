#include <stdio.h>

int main()
{
  int a, b, t, r, n;
  printf("Type into 2 num: \n");
  scanf("%d %d", &a,&b);
  if (a<b)
  {t=b; b=a; a=t;}
  r=a%b;
  n=a*b;
  while(r!=0)
  {
    a=b;
    b=r;
    r=a%b;
  }
  printf("%d, %d\n",b,n/b);
  return 0;
}


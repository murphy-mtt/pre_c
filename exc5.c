#include <stdio.h>

int main()
{
  int x,y,z,t;
  printf("\nType into three number:\n");
  scanf("%d%d%d", &x, &y, &z);
  if (x > y){
    t=x; x=y; y=t;
  }
  if (x>z){
    t=x; z=x; x=t;
  }
  if (y>z){
    t=y; y=z; z=t;
  }
  printf("%d, %d, %d\n", x, y, z);
}


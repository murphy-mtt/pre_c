#include <stdio.h>

int main()
{
  float h, s;
  h = s = 100;
  h = h/2;
  for (int i=2; i<=10; i++){
    s = s + 2*h;
    h = h/2;
  }
  printf("Tenth drop, distance is %f meters, height is %f meters.\n", s, h);
  return 0;
}


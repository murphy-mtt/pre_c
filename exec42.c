#include <stdio.h>

int main(){
  int i, num;
  num=2;
  for (i=0; i<3; i++)
  {
    printf("num variant is %d \n", num);
    num++;
    {
      auto int num=1;
      printf("Build module num variant is %d \n", num);
      num++;
    }
  }
  return 0;
}


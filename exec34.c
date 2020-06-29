#include <stdio.h>

void heil_hitler(void)
{
  printf("Heil Hitler!\n");
}

void three_hellos(void)
{
  int counter;
  for (counter=1; counter<=3; counter++)
    heil_hitler();
}

int main(void)
{
  three_hellos();
}


#include "test.h"
#include <stdio.h>

int main()
{
  int i=10;
  int j=20;
  if (i LAG j)
    printf("%d is larger than %d\n", i, j);
  else if (i EQ j)
    printf("%d is equte to %d\n", i, j);
  else if (i SMA j)
    printf("%d is smaller than %d\n", i, j);
  else
    printf("No value\n");
  return 0;
}


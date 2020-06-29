#include <stdio.h>
#define N 3

int main()
{
  int i, j, a[N][N], sum=0;
  printf("Type into matrix(3*3): \n");
  for (i=0; i<N; i++)
    for (j=0; j<N; j++)
      scanf("%d", &a[i][j]);
  for (i=0; i<N; i++)
    sum += a[i][i];
  printf("Sum od diagonal is %d\n", sum);
  return 0;
}


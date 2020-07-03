#define LAG >
#define SMA <
#define EQ ==

#include <stdio.h>

int main(){
  int i, j;
  printf("Type into 2 numbers: \n");
  scanf("%d %d", &i, &j);
  if (i LAG j)
    printf("%d larger than %d \n", i, j);
  else if (i EQ j)
    printf("%d equte to %d \n", i, j);
  else if(i SMA j)
    printf("%d smaller than %d \n",i,j);
  else
    printf("No value\n");
  return 0;
}


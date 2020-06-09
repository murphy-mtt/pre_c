#include <stdio.h>

int main()
{
  char i, j;
  printf("Type into first letter:\n");
  scanf("%c", &i);
  getchar();
  switch(i)
  {
    case 'm':
      printf("monday\n");
      break;
    case 'w':
      printf("wednesday\n");
      break;
    case 'f':
      printf("friday\n");
      break;
    case 't':
      printf("Next letter\n");
      scanf("%c", &j);
      if (j=='u') {printf("tuesday\n");break;}
      if (j=='h') {printf("thursday\n");break;}
    case 's':
      printf("Next letter\n");
      scanf("%c", &j);
      if (j=='a') {printf("saturday\n"); break;}
      if (j=='u') {printf("sunday\n"); break;}
    default:
      printf("Error\n"); break;
  }
  return 0;
}


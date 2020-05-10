#include <stdio.h>

int main()
{
  FILE *fp = NULL;

  fp = fopen("/Users/wangfenglin/temp/test.txt", "w+");
  fprintf(fp, "This is test for fprintf...\n");
  fputs("This is testing for fputs...\n", fp);
  fclose(fp);
}


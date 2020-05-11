#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
  FILE * pf;
  int errnum;
  pf = fopen("/Users/wangfenglin/temp/test.txt", "rb");
  if (pf == NULL)
  {
    errnum = errno;
    fprintf(stderr, "Exception number: %d\n", errno);
    perror("Output exception via perror");
    fprintf(stderr, "Open file incorrectly: %s\n", strerror(errnum));
  }
  else
  {
    printf("I found this file.\n");
    fclose(pf);
  }
  return 0;
}


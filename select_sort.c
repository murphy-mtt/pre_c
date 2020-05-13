#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  printf("%p\n", a);
  *a = *b;
  *b = temp;

}

void selection_sort(int arr[], int len)


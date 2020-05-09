#include <stdio.h>

int main()
{
	int var;
	int *ptr;
	int **pptr;
	var = 3000;
	ptr = &var;
	pptr = &ptr;

	printf("Value of var = %d\n", var);
	printf("Value avaiable at *ptr = %d\n", *ptr);
	printf("Address %p\n", ptr);
	printf("Value avaiable at **pptr = %d\n", **pptr);
	printf("Address %p\n", pptr);

	return 0;
}



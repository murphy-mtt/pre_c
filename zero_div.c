#include <stdio.h>
#include <stdlib.h>

int main()
{
	int dividend = 20;
	int divisor = 0;
	int quotient;

	if (divisor == 0){
		fprintf(stderr, "divisor is zero, exiting...\n");
		exit(EXIT_FAILURE);
	}
	quotient = dividend / divisor;
	fprintf(stderr, "quotient is %d\n", quotient);

	exit(EXIT_SUCCESS);
}


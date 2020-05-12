#include <stdio.h>

int fibonaci(int i)
{
	if (i==0)
	{
		return 0;
	}
	else if (i==1)
	{
		return 1;
	}
	else 
	{
		return fibonaci(i-1) + fibonaci(i-2);
	}
}

int main()
{
	int i;
	for (i=0; i<10; i++)
	{
		printf("%d\t\n", fibonaci(i));
	}
	return 0;
}


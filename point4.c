#include <stdio.h>

const int MAX = 3;

int main()
{
	int var[] = {10, 100, 200};
	int i, *ptr;

	ptr = var;
	for (i=0; i<MAX; i++)
	{
		printf("存储地址：var[%d] = %x\n", i, (unsigned int)ptr );
		printf("Storage value: var[%d] = %d\n", i, *ptr);
		ptr++;
	}
	return 0;
}


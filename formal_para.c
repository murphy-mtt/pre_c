#include <stdio.h>

int a = 20;
int u;
char ss[2] = "hi";

int main()
{
	int a = 10;
	int b = 20;
	int c = 0;
	int sum(int, int);

	printf("%d\n", u);
	printf("%s\n", ss);
	printf("value of a in main() is %d\n", a);
	c = sum(a, b);
	printf("value of c in main() is %d\n", c);

	return 0;
}

int sum(int a, int b)
{
	printf("value of a in sum() = %d\n",  a);
	printf("value of b in sum() = %d\n",  b);

	return a + b;
}


#include <stdio.h>

int max(int x, int y)
{
	return x > y ? x : y;
}

int main(void)
{
	int (* p)(int, int) = &max;
	int a, b, c, d;

	printf("Type into 3 number: ");
	scanf("%d %d %d\n", &a, &b, &c);

	d = p(p(a, b), c);

	printf("Biggest number is %d\n", d);

	return 0;
}


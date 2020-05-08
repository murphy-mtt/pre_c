#include <stdio.h>

int main()
{
	int a = 21;
	int b = 10;
	int c;
	int d;
	
	unsigned int e = 60;
	unsigned int f = 13;
	int g = 0;
	
	c = a + b;
	printf("Line 1 - c value is %d\n", c);
	c = a++;
	printf("Line 2 - c value is %d\n", c);
	
	if (a && b)
		{
			printf("Line 3 - condition is true\n");
		}
	if (a || b)
		{
			printf("Line 4 - condition is true\n");
		}
	if (a && d)
		{
			printf("Line 5 - condition is ");
		}
	
	g = e & f;
	printf("g value: %d\n", g);
	g = e | f;
	printf("g value: %d\n", g);
	g = e ^ f;
	printf("g value: %d\n", g);
	g = ~e;
	printf("g value: %d\n", g);
	
	short h;
	double i;
	int* ptr;
	printf("Line 1 - size of a is %lu\n", sizeof(a));
	printf("Line 2 - size of h is %lu\n", sizeof(h));
	printf("Line 3 - size of i is %lu\n", sizeof(i));
	ptr = &a;
	printf("value of a %d\n", a);
	printf("*ptr is %d\n", *ptr);
	i = ( a == 1 ) ? 20: 30;
	printf("value of i is %d\n", b);
}

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
	printf("Heil Hitler! \n");
	printf("int storage size is %lu \n", sizeof(int));
	printf("float max storage: %lu \n", sizeof(float));
	printf("float min value: %E\n", FLT_MIN);
	printf("float max value: %E\n", FLT_MAX);
	printf("float digital: %d\n", FLT_DIG);

	float f, x=3.6, y=5.2;
	int i=4, a, b;
	a = x + y;
	b = (int)(x + y);
	f = 10 / i;
	printf("a=%d, b=%d, f=%f, x=%f \n", a, b, f, x);
	return 0;
}

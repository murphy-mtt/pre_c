#include <stdio.h>

int main()
{
	const int LENGTH = 100;
	const int WIDTH = 30;
	const char NEWLINE = '\n';
	int area;

	area = LENGTH * WIDTH;
	printf("value of area: %d", area);
	printf("%c", NEWLINE);
	return 0;
}


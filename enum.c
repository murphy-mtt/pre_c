#include <stdio.h>
#include <stdlib.h>

int main()
{
	enum color {red=1, green, blue};
	enum color favorite_color;
	printf("Input you favorite color: (1. red, 2. green, 3. blue): \n");
	scanf("%d", &favorite_color);
	
	switch (favorite_color)
	{
		case red:
			printf("You like red");
			break;
		case green:
			printf("You like green");
			break;
		case blue:
			printf("You like blue");
			break;
		default:
			printf("Haven't choose yet\n");
	}

	return 0;
}


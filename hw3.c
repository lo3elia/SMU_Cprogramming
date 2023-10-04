#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;
	for (a=0; a < 5; a++)
	{
		for (b = 0; b < 5-a;b++)
			printf(" ");
		for (c = 0; c < a*2+1; c++)
			printf("*");
		printf("\n");
	}
	return 0;
}
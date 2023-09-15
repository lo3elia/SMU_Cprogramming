#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	scanf("Input two integers: %d %d \n", &a, &b);
	printf("10 & 15 = %d \n", a & b);
	printf("10 | 15 = %d \n", a | b);
	printf("10 ^ 15 = %d \n", a ^ b);
	return 0;
}
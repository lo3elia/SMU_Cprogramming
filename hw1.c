#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	printf("Input two integers: ");
	scanf("%d %d", &a, &b);
	printf("10 & 15 = %d \n", a & b);
	printf("10 | 15 = %d \n", a | b);
	printf("10 ^ 15 = %d \n", a ^ b);
	return 0;
}

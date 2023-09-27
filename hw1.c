#define _CRT_SECURE_NO_WARNNINGS
#include <stdio.h>

int main(void)
{
	int a = 0, b = 0;
	printf("Input two integers: ");
	scanf("%d %d", &a, &b);
	printf("%d & %d = %d \n", a, b, a & b);
	printf("%d | %d = %d \n", a, b, a | b);
	printf("%d ^ %d = %d \n", a, b, a ^ b);
	return 0;
}

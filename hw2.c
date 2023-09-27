#define _CRT_SECURE_NO_WARNNINGS
# include <stdio.h>
int main(void)
{
	double a = 0;
	scanf("Please enter kilometers: %lf", &a);
	printf("%.1f km is equal to %.1f miles", a, a/1.609);
	return 0;
}
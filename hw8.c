#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
double result = 0;
double seta = 0;

void solution(int arr[], int count) {
	for (int j = 0; j < count; j++) {
		result += pow(arr[j] - seta, 2);
	}
	result /= count;
	result = sqrt(result);
	printf("Standard Deviation = %.3f", result);
}

int main() {
	int arr[5];
	int i;
	printf("Enter 5 real number: ");
	for (i = 0; i < 5; i++) {
		scanf(" %d", &arr[i]);
		seta += arr[i];
	}
	seta = seta / 5;

	solution(arr, sizeof(arr) / sizeof(int));

	return 0;
}
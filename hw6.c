#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int array[5];
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
	}
	printf("\nOdd numbers: ");
	for (int i = 0; i < 5; i++) {
		if (array[i] % 2 == 1) {
			printf("%d ", array[i]);
		}
	}
	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++) {
		if (array[i] % 2 == 0) {
			printf("%d ", array[i]);
		}
	}
	return 0;
}
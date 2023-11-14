#define _CRT_SECURE_NO_WARININGS
#include <stdio.h>

int main() {
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* aptr = &arr1[0];
	int* bptr = &arr2[0];
	int temp;
	printf("arr1: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr2[i]);


	for (int i = 0; i < 6; i++) {
		temp = *aptr;
		*aptr = *bptr;
		*bptr = temp;
		aptr++;
		bptr++;
	}

	printf("\n\nafter swap");
	printf("\narr1: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (int i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	return 0;
}
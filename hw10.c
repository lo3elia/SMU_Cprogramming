#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void ClearLineFromReadBuffer() {
	while (getchar() != '\n');
}

typedef struct country {
	char city[50];
	char ctry[50];
	int pop;
} Country;

int main() {
	Country arr[3] = { 0, };
	int i;
	printf("Input three cities:\n");
	for (i = 0; i < 3; i++) {
		printf("Name> ");
		fgets(arr[i].city, sizeof(arr[i].city) / sizeof(char), stdin);
		arr[i].city[strlen(arr[i].city) - 1] = '\0';
		printf("Country> ");
		fgets(arr[i].ctry, sizeof(arr[i].ctry) / sizeof(char), stdin);
		arr[i].ctry[strlen(arr[i].ctry) - 1] = '\0';
		printf("Population> ");
		scanf("%d", &arr[i].pop);
		ClearLineFromReadBuffer();
	}
	printf("\nPrinting the three cities: \n");
	for (i = 0; i < 3; i++) {
		printf("%s in %s with a population of %d people\n", arr[i].city, arr[i].ctry, arr[i].pop);
	}
	return 0;
}
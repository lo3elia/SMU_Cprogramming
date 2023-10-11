#include <stdio.h>

int main() {
    int num;
    int a = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);
    for(int i = 2; i < num; i++) {
        if (num%i == 0) {
            printf("It is not a prime number.");
            a += 1;
            break;
        }
    }
    if (a == 0)
        printf("It is a prime number.");
    return 0;
}
//
// Created by ÀÌÁ¾Ãµ on 2023-10-16.
//

#include <stdio.h>

int square(int num) {
    if ( num > 1) square(num/2);
    printf("%d", num%2);
}

int main() {
    int num;
    printf("Please enter a number: ");
    scanf("%d", &num);
    square(num);
    return 0;
}
/*
Write a program that takes a number and prints whether it lies
between 1-10, 11-20, or greater than 20 using an if-else-if ladder.
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 1 && num <= 10) {
        printf("The number lies between 1 and 10");
    } else if (num >= 11 && num <= 20) {
        printf("The number lies between 11 and 20");
    } else if (num > 20) {
        printf("The number is greater than 20");
    } else {
        printf("The number is less than 1");
    }

    return 0;
}
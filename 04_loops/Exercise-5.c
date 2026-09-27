// Write a program that takes a number as input and prints its factorial. Use a loop.

#include <stdio.h>

int main(){
    int n, i = 1, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        factorial *= i;     // factorial = factorial * i
        i++;
    }

    printf("Factorial = %d", factorial);

    return 0;
}
// Write a program that takes two integers as input from the user and prints their sum.

#include <stdio.h>

int main(){
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Sum = %d", a+b);

    return 0;
}
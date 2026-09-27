// Write a program to add two numbers using pointers.

#include <stdio.h>

int main() {
    int a, b, sum;
    int *p, *q;

    p = &a;
    q = &b;

    printf("Enter two number: ");
    scanf("%d %d", &a, &b);

    sum = *p + *q;

    printf("Sum = %d", sum);

    return 0;
}
// Write a program to swap two numbers using pointers.

#include <stdio.h>

int main(){
    int a = 10, b = 4, temp;
    int *p, *q;

    p = &a;
    q = &b;

    printf("Before swap: a = %d & b = %d\n", a, b);

    temp = *p;
    *p = *q;
    *q = temp;

    printf("After swap: a = %d & b = %d", a, b);

    return 0;
}
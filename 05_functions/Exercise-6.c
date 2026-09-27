/*
Write a function swap(int *x, int *y) that swaps the values of two integers
using pointers.
*/

#include <stdio.h>

void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10, b = 4;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b);

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
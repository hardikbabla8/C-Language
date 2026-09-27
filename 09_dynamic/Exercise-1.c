/*
Write a program to dynamically allocate memory for an array of 5 integers. Take
input from the user and print the array elements.  
*/

/* 
    ptr[i]  : Value at Index 'i',
    &ptr[i] : Address of Value at Index 'i'
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, i;

    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    printf("Enter 5 integers: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Array: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
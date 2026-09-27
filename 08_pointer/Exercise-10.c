// Write a program to calculate the sum of elements of an array using pointers.

#include <stdio.h>

int main(){
    int arr[5], i, sum;
    int *ptr;

    printf("Array: ");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    for(i = 0; i < 5; i++) {
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);

    return 0;
}
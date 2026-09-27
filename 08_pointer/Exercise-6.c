// Write a program to find the maximum element in an array using pointers.

#include <stdio.h>

int main() {
    int i, arr[5];
    int *ptr, max;

    printf("Array: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    max = *ptr;

    for (i = 0; i < 5; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("Maximum element: %d", max);

    return 0;
}
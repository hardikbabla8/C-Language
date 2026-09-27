// Write a program to print all elements of an array using pointers.

#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Array elements: ");

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
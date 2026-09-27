/* 
Write a program that takes two arrays of the same size and stores their
element-wise sum in a third array. 
*/

#include <stdio.h>

int main() {
    int arr1[5], arr2[5], sum[5], i;

    printf("Array 1: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Array 2: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < 5; i++) {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("Sum Array: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
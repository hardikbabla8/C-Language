// Write a program to copy all elements of one array into another array.

#include <stdio.h>

int main(){
    int i, orgArr[5], copgArr[5];

    printf("Original array: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &orgArr[i]);
    }

    for (i = 0; i < 5; i++) {
        copgArr[i] = orgArr[i];
    }

    printf("Copied array: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", copgArr[i]);
    }

    return 0;
}
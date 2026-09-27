// Write a program to calculate the sum of all elements in an array.

#include <stdio.h>

int main(){
    int arr[5], i;
    int sum = 0;

    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        sum += arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}
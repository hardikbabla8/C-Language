/*
Write a program to find the sum of array elements present at even and odd indices
separately.
*/

#include <stdio.h>

int main(){
    int i, arr[5];
    int sumOfEven = 0, sumOfOdd = 0;

    printf("Array: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {
        
        if ( i % 2 == 0) {
            sumOfEven += arr[i];
        } else {
            sumOfOdd += arr[i];
        }
        
    }

    printf("Sum of even indices = %d\n", sumOfEven);
    printf("Sum of odd indices = %d", sumOfOdd);

    return 0;
}
// Write a program to reverse the elements of an array.

#include <stdio.h>

int main(){
    int i, temp, arr[5];

    printf("Original array: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5/2; i++) {

        temp = arr[i];
        arr[i] = arr[4-i];  
        arr[4-i] = temp;

        /*
        for 'n number of elements 
        in the array we use:
        'n-1-i' instead of '4-i'
        */
    }

    printf("Reversed array: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
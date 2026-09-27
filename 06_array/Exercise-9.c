// Write a program to find the second largest number in an array.

#include <stdio.h>

int main(){
    int i, arr[5], largest, secondLargest;

    printf("Array: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    largest = secondLargest = arr[0];

    for (i = 0; i < 5; i++) {
        
        if (largest < arr[i]) {

            secondLargest = largest;
            largest = arr[i];

        } 
        
        else if ((secondLargest < arr[i]) && (largest != arr[i])) {
            secondLargest = arr[i];
        }

    }

    printf("Second largest = %d", secondLargest);

    return 0;
}
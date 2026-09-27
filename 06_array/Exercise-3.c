// Write a program to find the largest and smallest numbers in an array.

#include <stdio.h>

int main(){
    int arr[5], i;
    int largest, smallest;

    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    largest = smallest = arr[0];

    for(i = 0; i < 5; i++) {

        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }

    }

    printf("Maximum = %d\n", largest);
    printf("Minumum = %d", smallest);

    return 0;
}
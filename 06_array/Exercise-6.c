// Write a program to search for a given number in an array.

#include <stdio.h>

int main(){
    int i, arr[5];
    int search, found = 0; 

    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for (i = 0; i < 5; i++) {

        if (arr[i] == search) {
            found = 1;
            break;
        }

    }

    if (found == 1) {
        printf("%d found at index %d", search, i);
    } else {
        printf("Element not found!!");
    }

    return 0;
}
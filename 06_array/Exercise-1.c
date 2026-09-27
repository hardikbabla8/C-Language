/* 
Write a program to take 5 integers as input from the user and print them back on
the screen. 
*/

#include <stdio.h>

int main(){
    int arr[5], i;

    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");

    for (i = 0; i < 5; i++) {
        printf("%d", arr[i]);
    }

    return 0;
}
/*
Write a program using goto to print numbers from 1 to 5.
Then rewrite it using a loop (for or while) to show why loops are better.
*/

#include <stdio.h>

int main() {
    // Using goto

    int i = 1;

    start:
    printf("%d ", i);
    i++;

    if (i <= 5) {
        goto start;
    }

    printf("\n");

    // Using for loop
    
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    return 0;
}
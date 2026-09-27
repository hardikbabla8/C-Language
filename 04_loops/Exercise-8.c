/*
Write a program that takes numbers as input continuously. Stop reading and exit
the loop as soon as a negative number is entered.  
*/

#include <stdio.h>

int main(){
    int n;

    while (1) {

        printf("Enter a number: ");
        scanf("%d", &n);

        if (n < 0) {
            break;
        }

    }

    printf("Loop terminated");

    return 0;
}
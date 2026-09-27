/*
Write a program that takes two numbers as input and prints the larger one using
an if-else statement.  
*/

#include <stdio.h>

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("%d is greater than %d", a, b);
    } else {
        printf("%d is greater than %d", b, a);
    }
    
    return 0;
}
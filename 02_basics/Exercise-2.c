/* 
Write a program that takes two numbers from the user and prints 1 if the first
number is greater than the second number (Otherwise it should print 0). 
*/

#include <stdio.h>

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    printf("%d\n", (a>b));
    
    return 0;
}
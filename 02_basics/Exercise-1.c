/* 
Write a program that takes two integers as input and performs the following
operations: addition, subtraction, multiplication, division, and modulus. Print the
results in a clear format. 
*/

#include <stdio.h>

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a+b);
    printf("Difference = %d\n", a-b);
    printf("Product = %d\n", a*b);
    printf("Quotient = %d\n", a/b);
    printf("Remainder = %d\n", a%b);

    return 0;
}
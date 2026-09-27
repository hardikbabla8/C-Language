/* 
Write a function factorial(int n) that returns the factorial of n.
Use a for loop inside the function.
*/

#include <stdio.h>

int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main(){
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial = %d", factorial(n));

    return 0;
}
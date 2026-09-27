// Write a recursive version of the factorial program using a function factorial(int n) .

#include <stdio.h>

int factorial(int n) {

    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
    
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial = %d", factorial(num));

    return 0;
}
/*
Write a recursive function power(int base, int exp) to calculate base^exp . 
Example Input/Output:
    Enter base: 2
    Enter exponent: 5
    Result = 32
*/


#include <stdio.h>

int power(int base, int exp) {
    
    if (exp == 0) {
        return 1;
    }

    return base * power(base, exp - 1);
}

int main(){
    int base, exp;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    printf("Result = %d", power(base, exp));
    
    return 0;
}

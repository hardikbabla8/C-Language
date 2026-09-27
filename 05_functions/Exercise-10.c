/* 
Write a function sumOfDigits(int n) that returns the sum of digits of a given
number. 
*/

#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0;

    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }

    return sum;
}

int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits = %d", sumOfDigits(num));

    return 0;
}
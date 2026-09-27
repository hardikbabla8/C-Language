/* 
Write a recursive function fibonacci(int n) that prints the first 
n terms of the Fibonacci series.
Fibonacci Series:
    0 1 1 2 3 5... upto n terms 
*/

#include <stdio.h>

int fibonacci(int n) {

    if (n == 1)
        return 0;

    if (n == 2)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);

}

int main(){
    int num, i;

    printf("Enter number of terms: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}
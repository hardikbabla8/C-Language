/* 
Write a program using a while loop that calculates the sum of the first N natural
numbers entered by the user. 
*/

#include <stdio.h>

int main(){
    int n, i = 1, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        sum = sum + i;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}   
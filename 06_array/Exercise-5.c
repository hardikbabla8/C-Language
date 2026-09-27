// Write a program that counts how many even and odd numbers are in an array.

#include <stdio.h>

int main(){
    int i, arr[5];
    int even = 0, odd = 0;

    printf("Enter 5 numbers: ");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 5; i++) {

        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }

    }

    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}
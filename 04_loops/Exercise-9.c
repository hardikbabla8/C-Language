// Write a program to print a square pattern of stars of size "n" using nested loops.

#include <stdio.h>

int main(){
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {
            printf("* ");
        }
        
        printf("\n");

    }

    return 0;
}
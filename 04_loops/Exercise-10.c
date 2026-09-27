/* 
Write a program to print the following right triangle pattern using nested loops.
Example Input/Output:
    Enter n: 5
    *
    * *
    * * *
    * * * *
    * * * * * 
*/

#include <stdio.h>

int main(){
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){

        for (int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");

    }

    return 0;
}
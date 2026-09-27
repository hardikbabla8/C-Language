/* 
Write a program that keeps asking the user to enter a positive number until they
enter 0. Use a do-while loop. 
*/

#include <stdio.h>

int main(){
    int n;
    
    do {

        printf("Enter a number: ");
        scanf("%d", &n);

    } while (n != 0);

    printf("Program ended");

    return 0;
}
// Write a program to print the address and value of a variable using a pointer.

#include <stdio.h>

int main(){
    int x = 10;
    int *ptr = &x;

    printf("Address of variable: %p\n", (void *)ptr);
    printf("Value of variable: %d", *ptr);

    return 0;
}
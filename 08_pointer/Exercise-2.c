// Write a program to demonstrate a pointer to a pointer.

#include <stdio.h>

int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("Value of x = %d\n", x);
    printf("Value accessed using pointer to pointer = %d", **pp);
    
    return 0;
}
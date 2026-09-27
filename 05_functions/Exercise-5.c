/* 
Write a program to show that changes made to a variable inside a function using 
call by value do not affect the original variable. 
*/

#include <stdio.h>

void modifyValue(int x) {
    x = 100;
    printf("Inside function: a = %d\n", x);
}

int main(){
    int a = 10;

    printf("Before function call: a = %d\n", a);
    
    modifyValue(a);
    
    printf("After function call: a = %d\n", a);

    return 0;
}
/* 
Write a program that swaps the values of two integer variables using a third temporary variable. 
*/

#include <stdio.h>

int main(){
    int a = 10, b = 4;
    int temp;

    printf("Before swap : a = %d, b = %d\n", a, b);
    
    temp = a;
    a = b;
    b = temp;

    printf("After swap : a = %d, b = %d", a, b);
    
    return 0;
}
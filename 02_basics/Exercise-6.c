/* 
Write a program that demonstrates type casting by dividing two integers and
printing both the integer and floating-point results. 
*/

#include <stdio.h>

int main(){
    int a = 5, b = 2;

    printf("Integer division result: %d\n", (a/b));
    printf("Floating-point division result: %.2f", ((float)a/b));

    return 0;
}
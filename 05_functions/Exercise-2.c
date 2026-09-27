/* 
Write a function add(int a, int b) that takes two integers as arguments and
returns their sum. Call the function from main() and display the result. 
*/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(){
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Sum = %d", add(x, y));

    return 0;
}
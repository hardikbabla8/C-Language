/* 
Write a function max(int x, int y) that returns the greater of two numbers. Use
this function inside main() to find and print the maximum number. 
*/

#include <stdio.h>

int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

int main(){
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum = %d", max(a, b));
    
    return 0;
}

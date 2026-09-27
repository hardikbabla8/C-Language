/* 
Write a program that prints the sum of all even numbers between 1 and 20. Use 
continue to skip odd numbers. 
*/

#include <stdio.h>

int main(){
    int i;
    int sum = 0;

    for (i = 1; i <= 20; i++) {
        
        if (i % 2 != 0) {
            continue; 
        } 
        sum += i;
    }

    printf("Sum of even numbers between 1 and 20 = %d", sum);

    return 0;
}
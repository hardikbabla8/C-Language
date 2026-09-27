/* 
Write a program that initializes an integer variable with some value and then
applies the following compound assignment operations sequentially:
    ( +=, -=, *=, /=, %= )
Print the value of the variable after each operation.
*/

#include <stdio.h>

int main() {
    int number = 20;
    printf("%d\n", number);

    number += 5;
    printf("After += 5: %d\n", number);

    number -= 3;
    printf("After -= 3: %d\n", number);

    number *= 2;
    printf("After *= 2: %d\n", number);

    number /= 4;
    printf("After /= 4: %d\n", number);

    number %= 3;
    printf("After %%= 3: %d\n", number);

    return 0;
}
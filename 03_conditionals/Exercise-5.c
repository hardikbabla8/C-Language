/* 
Write a simple calculator program that uses a switch statement to perform
operations based on user choice. 
Operations are:
    1. Addition
    2. Subtraction
    3. Multiplication
    4. Division
*/

#include <stdio.h>

int main() {
    int choice;
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Enter operation (1-Add, 2-Sub, 3-Mul, 4-Div): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result: %.2f\n", (num1 + num2));
            break;

        case 2:
            printf("Result: %.2f\n", (num1 - num2));
            break;

        case 3:
            printf("Result: %.2f\n", (num1 * num2));
            break;

        case 4:
            printf("Result: %.2f\n", (num1 / num2));
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
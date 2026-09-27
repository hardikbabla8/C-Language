/*
Write a program that allocates memory for an array of integers, fills it
with even numbers up to n, and then resizes it using realloc() to hold 
odd numbers up to n.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int evenCount, oddCount;
    int *numbers;

    printf("Enter n: ");
    scanf("%d", &n);

    evenCount = n / 2;
    oddCount = n - evenCount;

    // allocate space for even numbers only

    numbers = (int *)malloc(evenCount * sizeof(int));

    if (numbers == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < evenCount; i++) {
        numbers[i] = (i + 1) * 2;   // 2, 4, 6, ...
    }

    printf("Even numbers: ");

    for (i = 0; i < evenCount; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // resize the same block to also fit odd numbers

    numbers = (int *)realloc(numbers, n * sizeof(int));

    if (numbers == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    for (i = 0; i < oddCount; i++) {
        numbers[evenCount + i] = (i * 2) + 1;   // 1, 3, 5, ...
    }

    printf("Odd numbers: ");

    for (i = 0; i < oddCount; i++) {
        printf("%d ", numbers[evenCount + i]);
    }

    printf("\n");

    printf("Final array: ");

    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");

    free(numbers);

    return 0;
}
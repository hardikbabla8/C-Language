/* 
Demonstrate memory deallocation using free(). Allocate memory for an
array, print values, free it, and then reallocate it again.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;

    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    printf("First allocation: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    ptr = (int *)malloc(5 * sizeof(int));

    if (ptr == NULL) {
        printf("\nMemory allocation failed!");
        return 1;
    }

    for (i = 0; i < 5; i++) {
        ptr[i] = (i + 1) * 10;
    }

    printf("\nAfter reallocation: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
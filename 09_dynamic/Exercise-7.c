/*
Write a program to check whether malloc() or calloc() failed to allocate
memory and handle the error gracefully by printing a message.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1;
    int *ptr2;

    ptr1 = (int *)malloc(5 * sizeof(int));

    if (ptr1 == NULL) {
        printf("malloc() failed to allocate memory.\n");
    } else {
        printf("malloc() successfully allocated memory.\n");
    }

    ptr2 = (int *)calloc(5, sizeof(int));

    if (ptr2 == NULL) {
        printf("calloc() failed to allocate memory.\n");
    } else {
        printf("calloc() successfully allocated memory.\n");
    }

    free(ptr1);
    free(ptr2);

    return 0;
}
/*
Demonstrate the difference between malloc() and calloc()
by showing their default initialization behavior.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int *mallocPtr;
    int *callocPtr;

    mallocPtr = (int *)malloc(5 * sizeof(int));
    callocPtr = (int *)calloc(5, sizeof(int));

    if (mallocPtr == NULL || callocPtr == NULL) {
        printf("Memory Allocation Failed!!");
        return 1;
    }


    printf("Memory allocated using malloc():\n");
    
    for (i = 0; i < 5; i++) {
        printf("%d ", mallocPtr[i]);
    }

    printf("\n\nMemory allocated using calloc():\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", callocPtr[i]);
    }


    free(mallocPtr);
    free(callocPtr);

    return 0;
}
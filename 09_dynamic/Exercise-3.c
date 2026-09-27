/* 
Write a program to dynamically allocate memory for 'n' integer, 
where 'n' is entered by the user. Then, use realloc() to double 
the size and fill the new elements with user input. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;
    int n, i;

    printf("Enter no of integers: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory Allocation Failed!");
        return 1;
    }

    printf("Enter %d integers: ", n);

    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    ptr = (int *)realloc(ptr, (2 * n) * sizeof(int));

    if (ptr == NULL) {
        printf("Memory Reallocation Failed!");
        return 1;
    }

    printf("Enter %d more integers: ", n);

    for (i = n; i < (2 * n); i++) {
        scanf("%d", &ptr[i]);
    }

    printf("Values are: ");

    for (i = 0; i < (2 * n); i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);

    return 0;
}
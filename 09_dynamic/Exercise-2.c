/* 
Use calloc() to allocate memory for 10 float values. Initialize them with random
values and print their sum. 
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    float *ptr, sum;
    int i;

    ptr = (float *)calloc(10, sizeof(float));

    if (ptr == NULL) {
        printf("Memory Allocation Failed!");
        return 1;
    }

    for (i = 0; i < 10; i++) {
        ptr[i] = (float)rand() / RAND_MAX * 100;
        sum += ptr[i];
    }

    printf("Values: ");

    for (i = 0; i < 10; i++) {
        printf("%.2f ", ptr[i]);
    }

    printf("\nSum = %.2f", sum);

    free(ptr);

    return 0;
}
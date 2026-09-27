/*
Use malloc() to create a dynamic 2D array (matrix) and take its elements
as input. Print the matrix.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, columns, i, j;
    int **matrix;

    printf("Enter no of rows: ");
    scanf("%d", &rows);

    printf("Enter no of columns: ");
    scanf("%d", &columns);

    matrix = (int **)malloc(rows * sizeof(int *));

    if (matrix == NULL) {
        printf("Memory Allocation Failed!");
        return 1;
    }

    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(columns * sizeof(int));

        if (matrix[i] == NULL) {
            printf("Memory Allocation Failed!");
            return 1;
        }
    }

    printf("\nEnter %d elements : ", rows * columns);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\n------------------------------------\n");
    printf("              MATRIX\n");
    printf("------------------------------------\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    printf("------------------------------------\n");

    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}
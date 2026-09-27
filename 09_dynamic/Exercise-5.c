/*
Write a program that uses dynamic memory allocation to store names
of students using an array of character pointers. Take input for
names and display them.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    char **names;

    printf("Enter no of students: ");
    scanf("%d", &n);

    // Allocate an array of n character pointers
    names = (char **)malloc(n * sizeof(char *));

    if (names == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter student names:\n\n");
    for (i = 0; i < n; i++) {
        // Allocate memory for each name
        names[i] = (char *)malloc(50 * sizeof(char));

        if (names[i] == NULL) {
            printf("Memory allocation failed!\n");
            return 1;
        }

        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("\n------------------------------------\n");
    printf("          STUDENT NAMES\n");
    printf("------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%d. %s\n", i + 1, names[i]);
    }

    printf("------------------------------------\n");

    // Free each name, then the array of pointers
    for (i = 0; i < n; i++) {
        free(names[i]);
    }
    free(names);

    return 0;
}
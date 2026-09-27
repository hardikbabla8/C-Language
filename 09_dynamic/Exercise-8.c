/*
Create a program to dynamically store marks of students using structures
and pointers. Take inputs for names and marks, then display the results.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    int n, i;
    struct Student *students;

    printf("Enter no of students: ");
    scanf("%d", &n);

    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory Allocation Failed!");
        return 1;
    }

    printf("\nEnter Student details:\n");

    for (i = 0; i < n; i++) {
        printf("\nStudent - %d\n", i + 1);

        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    printf("\n------------------------------------\n");
    printf("          Student Result\n");
    printf("------------------------------------\n");
    
    for (i = 0; i < n; i++) {
        printf("%d. %s - %.2f marks\n", (i + 1), students[i].name, students[i].marks);
    }
    
    printf("------------------------------------\n");

    free(students);

    return 0;
}
/* 
Write a program to calculate and display the average marks of 5 
students using a structure Student with members name and marks. 
*/

#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main(){
    int i;
    float average, total = 0;
    struct Student student[5];

    printf("===== Enter Student Details =====\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", (i + 1));

        printf("Name: ");
        scanf(" %[^\n]", &student[i].name);

        printf("Marks: ");
        scanf("%f", &student[i].marks);


        total += student[i].marks;
    }

    average = total / 5;

    printf("\n----------------------------------------\n");

    printf("Average Marks: %.2f", average);

    printf("\n----------------------------------------\n");

    return 0;
}
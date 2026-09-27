/* 
Write a program that takes a student’s marks (0–100) and prints the grade as per
the following rules:
    1. 90 and above → Grade A
    2. 75 to 89 → Grade B
    3. 60 to 74 → Grade C
    4. Below 60 → Grade D
Use an if-else-if ladder. 
*/

#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 90) {
        printf("Grade A\n");
    }
    else if (marks >= 75) {
        printf("Grade B\n");
    }
    else if (marks >= 60) {
        printf("Grade C\n");
    }
    else {
        printf("Grade D\n");
    }

    return 0;
}
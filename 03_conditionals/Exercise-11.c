/* 
Bonus Challenge:
Recreate the grading system (Exercise 3) using a switch statement by 
dividing the marks by 10 and matching the integer value 
*/

#include <stdio.h>

int main() {
    int marks;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks / 10) {
        case 10:
        case 9:
            printf("Grade A");
            break;

        case 8:
        case 7:
            printf("Grade B");
            break;

        case 6:
            printf("Grade C");
            break;

        default:
            printf("Grade D");
    }

    return 0;
}
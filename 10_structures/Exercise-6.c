/* 
Write a program to store details of 10 employees using an array of structures and 
display those with a salary greater than 50,000. 
*/

#include <stdio.h>

struct Empolyee {
    int id;
    char name[50];
    float salary;
};

int main(){
    int i;
    struct Empolyee emp[10];

    printf("======== Enter Employee Details ========\n\n");

    for (i = 0; i < 2; i++) {
        printf("Employee %d:\n", (i + 1));

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);

        printf("\n");
    } 

    printf("===== Employee with Salary > 50,000 =====\n");
    
    for (i = 0; i < 2; i++) {
        if (emp[i].salary > 50000) {
            printf("\nID: %d | Name: %s\n", emp[i].id, emp[i].name);
            printf("Salary: %.2f\n", emp[i].salary);
        } 
    }
    
    printf("\n-----------------------------------------");

    return 0;
}
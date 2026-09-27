/* 
Define a structure Employee with members id, name, and salary. 
Write a function display() that takes a structure as an argument
and prints its details. 
*/

#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void display(struct Employee emp){

    printf("\n-------- Employee Details --------\n\n");
    
    printf("ID : %d\n", emp.id);
    printf("Name : %s\n", emp.name);
    printf("Salary : %.2f\n", emp.salary);

}

int main(){
    struct Employee emp;

    printf("===== Enter Employee Details =====\n\n");

    printf("ID: ");
    scanf("%d", &emp.id);

    printf("Name: ");
    scanf(" %[^\n]", emp.name);

    printf("Salary: ");
    scanf("%f", &emp.salary);

    display(emp);

    printf("\n==================================\n");

    return 0;
}
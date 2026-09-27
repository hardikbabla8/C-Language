/* 
Write a program that uses nested structures to store and display 
information about a student, including name, roll number, and 
address (city and pincode). 
*/

#include <stdio.h>

struct Address {
    char city[50];
    int pincode;
};

struct Student {
    char name[50];
    int rollno;
    struct Address address;
};

int main() {
    struct Student student;

    printf("===== Enter Student Details =====\n\n");

    printf("Enter name: ");
    scanf("%s", student.name);

    printf("Enter roll number: ");
    scanf("%d", &student.rollno);

    printf("Enter city: ");
    scanf("%s", student.address.city);

    printf("Enter pincode: ");
    scanf("%d", &student.address.pincode);

    printf("\n======== Student Details ========\n\n");

    printf("Name    : %s\n", student.name);
    printf("Roll No : %d\n", student.rollno);
    printf("City    : %s\n", student.address.city);
    printf("Pincode : %d\n", student.address.pincode);

    printf("\n---------------------------------");

    return 0;
}
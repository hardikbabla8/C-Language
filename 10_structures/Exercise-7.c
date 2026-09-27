/* 
Demonstrate the use of pointers to structures by creating a structure Car 
with members name and price. Input and display the values using a pointer. 
*/

#include <stdio.h>

struct Car {
    char car[50];
    float price;
};

int main(){
    struct Car car;
    struct Car *ptr = &car;
    
    printf("=== Enter Car Details ===\n\n");

    printf("Enter car name: ");
    scanf("%s", ptr->car);

    printf("Enter car price: ");
    scanf("%f", &ptr->price);


    printf("\n====== Car Details ======\n\n");

    printf("Name: %s\n", ptr->car);
    printf("Price: %.2f\n", ptr->price);

    printf("\n-------------------------");

    return 0;
}
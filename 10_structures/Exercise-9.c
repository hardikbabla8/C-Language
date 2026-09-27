/* 
Create a union Data that can store an integer, a float, or a string. Assign values to each member one by one and print them to demonstrate how only one value is retained at a time. 
*/

#include <stdio.h>
#include <string.h>

union Data {
    int integer;
    float decimal;
    char string[50];
};

int main() {
    union Data data;

    data.integer = 100;
    printf("Integer: %d\n", data.integer);
    printf("Address: %p\n\n", (void *)&data.integer);

    data.decimal = 25.5;
    printf("Float: %.2f\n", data.decimal);
    printf("Address: %p\n\n", (void *)&data.decimal);

    strcpy(data.string, "Hello");
    printf("String: %s\n", data.string);
    printf("Address: %p\n", (void *)&data.string);

    return 0;
}
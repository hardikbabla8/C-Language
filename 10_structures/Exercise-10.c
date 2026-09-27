/* 
Write a program that compares the memory size of a structure and a 
union containing an int, float, and char array of size 20. Display
the sizes using sizeof().
*/

#include <stdio.h>

struct DataStruct {
    int integer;
    float decimal;
    char string[20];
};

union DataUnion {
    int integer;
    float decimal;
    char string[20];
};

int main() {

    printf("===== Memory Size Comparison =====\n\n");

    printf("Size of Structure : %d bytes\n", sizeof(struct DataStruct));
    printf("Size of Union     : %d bytes\n", sizeof(union DataUnion));

    return 0;
}
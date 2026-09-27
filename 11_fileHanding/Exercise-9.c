/* 
Write a program that takes a file name as input and checks whether it exists 
or not. Display a suitable message accordingly. 
*/  

#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("File does not exist!");
    } else {
        printf("File exists!");
        fclose(file);
    }

    return 0;
}
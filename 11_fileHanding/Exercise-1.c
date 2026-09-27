/* 
Write a program to create a file named data.txt and write your name and 
age into it using fprintf(). 
*/

#include <stdio.h>

int main(){
    FILE *file;

    file = fopen("data.txt", "w");

    if (file == NULL) {
        printf("File not found!");
        return 1;
    }

    fprintf(file, "Name: Hardik\n");
    fprintf(file, "Age: 20\n");

    printf("Data written successfully to data.txt");

    fclose(file);

    return 0;
}

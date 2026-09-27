/* 
Write a program to append a new line to an existing file without 
overwriting its content. 
*/

#include <stdio.h>

int main(){
    FILE *file;
    char text[100];

    file = fopen("test.txt", "a");

    if (file == NULL) {
        printf("File not found!");
        return 1;
    }

    printf("Enter a line: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);

    printf("Line added successfully!");
    
    return 0;
}
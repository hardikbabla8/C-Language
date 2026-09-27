/* 
Create a program that reads the content of data.txt and displays
it on the screen using fgetc() .
*/

#include <stdio.h>

int main(){
    FILE *file;
    int ch;

    file = fopen("data.txt", "r");

    if (file == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}
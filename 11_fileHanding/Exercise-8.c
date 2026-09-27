/* 
Write a program that reads a text file and converts all lowercase letters to
uppercase in another file. 
*/

#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *source, *destination;
    int ch;

    source = fopen("input.txt", "r");

    destination = fopen("output.txt", "w");

    if (source == NULL || destination == NULL) {
        printf("Error: Failed to open file.");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        ch = toupper(ch);
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File converted successfully!");
    
    return 0;
}
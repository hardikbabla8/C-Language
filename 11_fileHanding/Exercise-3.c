/* 
Write a program to copy the contents of one file into another file. 
Take source and destination file names from the user. 
*/

#include <stdio.h>

int main(){
    FILE *source, *destination;
    char sourceName[50], destinationName[50];
    int ch;

    printf("Enter Source file name: ");
    scanf("%s", sourceName);

    printf("Enter Destination file name: ");
    scanf("%s", destinationName);

    source = fopen(sourceName, "r");

    if (source == NULL) {
        printf("File not found!");
        return 1;
    }

    destination = fopen(destinationName, "w");

    if (destination == NULL) {
        printf("File not found!");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully!");

    return 0;
}
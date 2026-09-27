/* 
Write a program that reads from a file character by character until the end of file
using feof() and prints all characters to the console.
*/

/*
feof() checks if the end of a file has been reached.
Returns non-zero if EOF is reached, otherwise 0.
*/

// End of the file reach hua??

#include <stdio.h>

int main(){
    FILE *file;
    int ch;
    int count = 0;

    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("File does not exist!");
        return 1;
    }

    while (!feof(file)) {       
        ch = fgetc(file);

        if (ch == EOF) {
            break;
        }
        
        printf("%c ", ch);
        count++;
    }

    printf("\nTotal Character is : %d", count);

    fclose(file);

    return 0;
}
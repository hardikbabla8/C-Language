/* 
Write a program that counts the number of characters, words, 
and lines in a text file. 
*/

#include <stdio.h>

int main() {
    FILE *file;
    int ch;
    int characters = 0;
    int words = 0;
    int lines = 0;
    int insideWord = 0;
    int lastChar = '\n';

    file = fopen("text.txt", "r");

    if (file == NULL) {
        printf("File not found!");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {

        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (ch == ' ' || ch == '\n' || ch == '\t') {
            insideWord = 0;
        }
        else if (insideWord == 0) {
            words++;
            insideWord = 1;
        }

        lastChar = ch;
    }

    if (characters > 0 && lastChar != '\n') {
        lines++;
    }

    fclose(file);

    printf("--- File Information ---\n\n");
    printf("Characters : %d\n", characters);
    printf("Words      : %d\n", words);
    printf("Lines      : %d\n", lines);

    printf("\n------------------------");

    return 0;
}
/* 
Write a program to count the number of words in a given sentence.
Use fgets() to take mulitple word as an input. 
*/

#include <stdio.h>

int main(){
    char str[100];
    int i = 0, word = 0;
    int insideWord = 0;   // 0 = not in a word, 1 = in a word

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            
            if (insideWord == 0) {
                word++;          
                insideWord = 1;  
            }
        }
        else {
            insideWord = 0;  
        }

        i++;
    }

    printf("Word count = %d\n", word);

    return 0;
}
// Write a program to count vowels in a string using pointers.

#include <stdio.h>

int main(){
    char str[100];
    char *ptr;
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    while (*ptr != '\0') {

        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' ||
            *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' ||
            *ptr == 'O' || *ptr == 'U') {
                count++;
            }

            ptr++;
    }

    printf("Vowel Count = %d", count);

    return 0;
}
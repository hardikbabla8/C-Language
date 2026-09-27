/* 
Write a program to convert a string into uppercase and lowercase 
without using string library functions 
    'a' = 97, 'A' = 65 → difference is 32
    'z' = 122, 'Z' = 90 → difference is 32
*/

#include <stdio.h>

int main(){
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    printf("Uppercase: %s\n", str);

    i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("Lowercase: %s\n", str);

    return 0;
}
/* 
Write a program to copy one string into another without using the 
strcpy() function. 
*/

#include <stdio.h>

int main(){
    char str1[50], str2[50];
    int i = 0;

    printf("Enter a string: ");
    scanf("%s", str1);

    while (str1[i] != '\0') {
        str2[i] = str1[i];
        i++;
    }

    str2[i] = '\0';

    printf("Copied string: %s", str2);

    return 0;
}
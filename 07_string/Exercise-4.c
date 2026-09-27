/* 
Write a program to compare two strings without using the 
strcmp() funtion.
*/

#include <stdio.h>

int main(){
    char str1[50], str2[50];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while ((str1[i] == str2[i]) && (str1[i] != '\0')) {
        i++;
    }

    if (str1[i] == str2[i]) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}
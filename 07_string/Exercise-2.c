/* 
Write a program to find the length of a string without using the 
strlen() function. 
*/

#include <stdio.h>

int main(){
    char str[50];
    int length = 0; 

    printf("Enter a string: ");
    scanf("%s", str);

    while ((str[length] != '\0')) {
        length++;
    }

    printf("Length = %d", length);

    return 0;
}
// Write a program to reverse a string without using the strrev() function.

#include <stdio.h>

int main(){
    char str[50], temp;
    int i = 0, j;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j) {
        
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
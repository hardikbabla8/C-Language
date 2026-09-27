// Write a program to check whether a given string is a palindrome or not.

#include <stdio.h>

int main(){
    char str[50];
    int i = 0, j;
    int isPalindrome = 1;   // 1 => true

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[i] != '\0') {
        i++;
    }

    j = i - 1;
    i = 0;

    while (i < j) {
        
        if (str[i] != str[j]) {
            isPalindrome = 0;
            break;
        }

        i++;
        j--;
    }

    if (isPalindrome) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }

    return 0;
}
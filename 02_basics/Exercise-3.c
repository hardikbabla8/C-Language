/* 
Write a program that checks whether a person is eligible to vote. A person is
eligible if their age is 18 or above and they are a citizen (use 1 for Yes, 0 for No).
Print 1 for yes and 0 for no 
*/

#include <stdio.h>

int main(){
    int age;
    char ch;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Is you are a citizen of India? (y/n): ");
    scanf(" %c", &ch);

    printf("%d\n", ((age >= 18) && (ch == 'y' || ch == 'Y')));

    return 0;
}
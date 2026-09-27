/* 
Write a program that takes an integer as input and prints its multiplication table up
to 10. 
*/

#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, (n * i));
        i++;
    }

    return 0;
}
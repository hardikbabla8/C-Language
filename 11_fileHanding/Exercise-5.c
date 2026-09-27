/* 
Create a file numbers.txt containing a list of integers. Write a program to 
read all numbers and calculate their sum. 
*/

#include <stdio.h>

int main(){
    FILE *file;
    int number;
    int sum = 0;

    file = fopen("numbers.txt", "r");

    if (file == NULL) {
        printf("File not found!");
        return 1;
    }

    while (fscanf(file, "%d", &number) != EOF) {
        sum += number;
    }

    fclose(file);

    printf("Sum = %d", sum);

    return 0;
}

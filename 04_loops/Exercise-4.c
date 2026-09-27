// Write a program that prints numbers from 10 down to 1 using a while loop

#include <stdio.h>

int main(){
    int i = 10;

    while (i > 0) {
        printf("%d ", i);
        i--;
    }
    return 0;
}
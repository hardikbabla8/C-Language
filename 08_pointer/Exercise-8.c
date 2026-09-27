/* 
Write a function that takes an integer pointer as a parameter and
changes the value of the variable it points to. 
*/

#include <stdio.h>

void changeValue(int *x){
    *x = 50;
}

int main(){
    int a = 10;
    int *ptr = &a;

    printf("Before function call: a = %d\n", a);
    
    changeValue(&a);
    
    printf("After function call: a = %d", a);

    return 0;
}
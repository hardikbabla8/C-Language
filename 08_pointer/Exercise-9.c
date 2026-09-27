/* 
Write a program that demonstrates pointer arithmetic using an integer array.
Print the address before and after incrementing the pointer. 
*/

#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    printf("Before increment: %p\n", (void *)ptr);
    
    ptr++;
    
    printf("After increment: %p", (void *)ptr);

    return 0;
}
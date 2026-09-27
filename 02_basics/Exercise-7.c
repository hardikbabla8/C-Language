/* 
Predict the output of this expression before running it:
    int result = 10 + 20 * 3 / 2- 5;
Then, write a program to verify your answer and explain why that result was
produced.
*/

// Solution :

// 10 + ((20 * 3) / 2) - 5
// 10 + (60 / 2) - 5
// (10 + 30) - 5
// 40 - 5
// 35  (Predicted)

#include <stdio.h>

int main(){
    int result = 10 + 20 * 3 / 2- 5; 
    printf("Result is: %d", result);
    return 0;
}
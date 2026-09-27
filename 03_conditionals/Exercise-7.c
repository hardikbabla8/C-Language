/* 
A student is eligible for admission if:
    1. Their math marks ≥ 60
    2. Their physics marks ≥ 50
    3. Their chemistry marks ≥ 40
    4. And the total marks ≥ 200
Use nested if statements to check eligibility. 
*/

#include <stdio.h>

int main() {
    int math, physics, chemistry, total;

    printf("Enter marks in Math, Physics, Chemistry: ");
    scanf("%d %d %d", &math, &physics, &chemistry);

    total = math + physics + chemistry;

    if (math >= 60) {
        if (physics >= 50) {
            if (chemistry >= 40) {
                if (total >= 200) {
                    printf("Eligible for admission\n");
                }
                else {
                    printf("Not eligible for admission\n");
                }
            }
            else {
                printf("Not eligible for admission\n");
            }
        }
        else {
            printf("Not eligible for admission\n");
        }
    }
    else {
        printf("Not eligible for admission\n");
    }

    return 0;
}
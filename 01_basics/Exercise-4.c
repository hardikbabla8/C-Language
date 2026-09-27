/* 
Write a program that asks the user to enter the radius of a circle and then calculates
and prints its area. (Use the formula: Area = π * r * r, where π = 3.1416) 
*/

#include <stdio.h>

int main(){
    float radius, area;
    float pie = 3.1416;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = pie * radius * radius;

    printf("Area of circle = %.2f", area);

    return 0;
}
/* 
Write a program using a structure Point to store x and y coordinates. 
Calculate the distance between two points entered by the user. 
*/

/* 
Distance (d) btw two points (x₁, y₁) & (x₂, y₂) is
given by the formula:
    d = √((x₂ - x₁)² + (y₂ - y₁)²)
*/

#include <stdio.h>
#include <math.h>

struct Point {
    float x;
    float y;
};

int main() {
    struct Point p1, p2;
    float distance;

    printf("==== Distance Between Points ====\n\n");

    printf("Enter Point 1 (x y): ");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Enter Point 2 (x y): ");
    scanf("%f %f", &p2.x, &p2.y);

    distance = sqrt(
        ((p2.x - p1.x) * (p2.x - p1.x)) +
        ((p2.y - p1.y) * (p2.y - p1.y))
    );

    printf("\n---------------------------------\n\n");

    printf("Point 1: (%.2f, %.2f)\n", p1.x, p1.y);
    printf("Point 2: (%.2f, %.2f)\n", p2.x, p2.y);
    
    printf("\n---------------------------------\n\n");
    
    printf("Distance: %.2f", distance);
    
    printf("\n\n=================================\n");

    return 0;
}
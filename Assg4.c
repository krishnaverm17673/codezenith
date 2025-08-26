#include <stdio.h>
#define PI 3.14159   

int main() { // Q4: Write a program to calculate the area and circumference of a circle given its radius.
    float radius, area, circumference;

    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    
    printf("\nResults:\n");
    printf("Area of Circle = %.2f\n", area);
    printf("Circumference of Circle = %.2f\n", circumference);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() { //Q17: Write a program to find the roots of a quadratic equation and categorize them.
    float a, b, c, discriminant, root1, root2;

    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation (a cannot be 0).\n");
    } else {
        discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Roots are Real and Distinct.\n");
            printf("Root1 = %f, Root2 = %f\n", root1, root2);
        } 
        else if (discriminant == 0) {
            root1 = root2 = -b / (2 * a);
            printf("Roots are Real and Equal.\n");
            printf("Root1 = Root2 = %f\n", root1);
        } 
        else {
            float realPart = -b / (2 * a);
            float imagPart = sqrt(-discriminant) / (2 * a);
            printf("Roots are Imaginary (Complex).\n");
            printf("Root1 = %f + %fi, Root2 = %f - %fi\n", 
                    realPart, imagPart, realPart, imagPart);
        }
    }

    return 0;
}

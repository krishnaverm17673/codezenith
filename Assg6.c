#include <stdio.h>

int main() {
    // Q6: Write a program to swap two numbers using a third variable.
    int a, b, temp;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nBefore Swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After Swapping:  a = %d, b = %d\n", a, b);

    return 0;
}

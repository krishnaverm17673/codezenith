#include <stdio.h>

int main() {
    //Q5: Write a program to convert temperature from Celsius to Fahrenheit.
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("\nTemperature in Fahrenheit = %.2f\n", fahrenheit);

    return 0;
}

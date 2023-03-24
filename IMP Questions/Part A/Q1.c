/* Write a C program to convert a given temperature from
 Celsius to Fahrenheit and vice versa */

#include <stdio.h>

main() 
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n\n", fahrenheit);
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius: %.2f\n", celsius);
}

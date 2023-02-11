/* Program to find temperature in farhaniet for the given 
value in celcius */
#include <stdio.h>

main() 
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Temperature in Fahrenheit: %.2f", fahrenheit);
}

/* Program to find GCD and LCM of two given numbers */
/* Method 2 */
#include <stdio.h>

main()
{
    int num1, num2, gcd, lcm, remainder, numerator, denominator;

    printf("Enter two positive integers: ");
    scanf("%i %i", &num1, &num2);
    
    numerator = (num1 > num2) ? num1 : num2;
    denominator = (num1 > num2) ? num2 : num1;

    remainder = numerator % denominator;
    while (remainder != 0)
    {
        numerator = denominator;
        denominator = remainder;
        remainder = numerator % denominator;
    }
    gcd = denominator;
    lcm = (num1 * num2) / gcd;
    printf("GCD of %i and %i is %i\n", num1, num2, gcd);
    printf("LCM of %i and %i is %i\n", num1, num2, lcm);
}

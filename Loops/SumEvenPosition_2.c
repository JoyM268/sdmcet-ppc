/* Program to print the sum of digits in the even 
position */
/* Method 2 */
#include <stdio.h>

main() 
{
    int num, digit, sum = 0, place = 1;

    printf("Enter a number: ");
    scanf("%i", &num);

    while (num > 0)
    {
        digit = num % 10;
        if (place % 2 == 0) 
        {
            sum += digit;
        }
        num /= 10;
        place++;
    }

    printf("Sum of digits in even positions = %i", sum);
}

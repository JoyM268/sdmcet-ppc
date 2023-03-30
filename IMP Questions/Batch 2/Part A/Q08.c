/* Write a C program to find and print the number of
 digits in a given string. */
#include <stdio.h>
#define SIZE 100

main() 
{
    char str[SIZE];
    int i,digits = 0;
    printf("Enter a input string: ");
    scanf("%[^\n]",str);
    for(i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= '0' && str[i] <= '9') 
        {
            digits++;
        }
    }
    printf("Number of digits in the string: %i\n", digits);
}

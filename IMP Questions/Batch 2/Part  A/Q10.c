/* Write a C program to include two functions – 
add (int , int) and subtract (int, int) and main () 
calls these functions to print the sum and difference of 
2 input numbers passed as parameters from main */
#include <stdio.h>

int add(int, int);
int subtract(int, int);
main() 
{
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%i %i", &num1, &num2);
    printf("Sum of %i and %d is %i\n", num1, num2, add(num1, num2));
    printf("Difference of %i and %i is %i\n", num1, num2, subtract(num1, num2));
}
int add(int a, int b) 
{
    return a + b;
}
int subtract(int a, int b) 
{
    return a - b;
}


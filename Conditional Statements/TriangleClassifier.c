/* Write a c program to read 3 sides of a triangle A,B,C
using appropriate condition checking to print the type of
the triangle based on the sides using else if ladder */
#include <stdio.h>

main() 
{
    float a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a) 
    {
        if (a == b && b == c) 
        {
            printf("The triangle is an equilateral triangle\n");
        }
        else if (a == b || b == c || a == c) 
        {
            printf("The triangle is an isosceles triangle\n");
        }
        else
        {
            printf("The triangle is a scalene triangle\n");
        }
    } 
    else
    {
        printf("The sides do not form a valid triangle\n");
    }
}

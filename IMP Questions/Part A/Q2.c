/* Write a C program to compute area of a triangle given
 three sides a, b & c */
#include<stdio.h>
#include<math.h>

main() 
{
    int a, b, c;
    float s, area;
    printf("Enter the three sides of the triangle: ");
    scanf("%i %i %i", &a, &b, &c);
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %.3f\n", area);
}

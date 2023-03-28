/* Write a C program to find and print the area and
perimeter of a circle whose radius isgiven */
#include <stdio.h>
#define pi 3.142

main() 
{
    float radius, area, perimeter;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;
    printf("The area of the circle is: %.3f\n", area);
    printf("The perimeter of the circle is: %.3f\n", perimeter);
}

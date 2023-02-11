/* Program to check if the triangle is formaed and if its
a rignt angled triangle or not */
#include <stdio.h>

main() 
{
    float a, b, c;
    printf("Enter the sides of the triangle: ");
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
      if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
      {
        printf("Triangle is right angled");
      }
      else
      {
        printf("Triangle is not right angled");
      } 
    
    }
    else 
    {
        printf("The sides do not form a valid triangle\n");
    }
}
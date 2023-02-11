/* C Program to find the discriminant of a quadratic 
equation for the given value of coeficient a,b,c */
#include <stdio.h>
#include<math.h>

main()
{
  float a,b,c,d;
  printf("Enter the values of a,b,c: ");
  scanf("%f %f %f", &a,&b,&c);
  d = sqrt(b*b - 4*a*c);
  printf("The discriminant is: %f\n",d);
}
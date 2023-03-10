/* Program to find diameter,circumference and area of 
circle using function */
#include<stdio.h>
#include<math.h>

float diameter(float);
float circumference(float);
float area(float);
main()
{
  float radius;
  printf("Enter the radius of circle: ");
  scanf("%f",&radius);
  float dia = diameter(radius);
  float circ = circumference(radius);
  float ar = area(radius);
  printf("The diameter of the circle is: %.2f units\n",dia);
  printf("The circumference of the circle is: %.2f units\n",circ);
  printf("The area of the circle is: %.2f sq units\n",ar);
}
float diameter(float r)
{
  return (2*r);
}
float circumference(float r)
{
  return (2*M_PI*r);
}
float area(float r)
{
  return (r*M_PI*r);
}
/* C Program to find the volume of a cylinder when radius
and height are given */
#include<stdio.h>
#define pi 3.14

main()  
{
  float height, radius, volume;
  printf("Enter the radius and height of the cylinder: ");
  scanf("%f %f",&radius, &height);
  volume = pi*radius*radius*height;
  printf("The volume of the cylinder is: %.2f\n",volume);
}
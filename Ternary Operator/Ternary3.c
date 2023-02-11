/* C program to solve the following and print x
x = 4y+5, if y>0
x = 4y-5, otherwise
using ternary operator/conditional operator */
#include<stdio.h>

main()
{
  int x,y;
  printf("Enter the value of y: ");
  scanf("%i",&y);
  x = (y>0)? 4*y+5 : 4*y-5;
  printf("The value of x is: %i",x);
}
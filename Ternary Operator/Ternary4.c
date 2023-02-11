/* C program to find the value of the following function
and print the result
f(x) = if x=0, 10
f(x) = otherwise, 4x^2+5
using ternary operator/conditional operator */
#include<stdio.h>

main()
{
  int x,result;
  printf("Enter the value of x: ");
  scanf("%i",&x);
  result = (x==0)? 10 : 4*x*x+5;
  printf("The result of the function is: %i\n",result);
}
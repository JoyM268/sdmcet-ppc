/* C program to find the value of the following function
and print the result
f(x) = if x>10, √x^2+5
f(x) = otherwise, x^3+4x^2+5
using ternary operator/conditional operator */
#include<stdio.h>
#include<math.h>

main()
{
  int x,result;
  printf("Enter the value of x: ");
  scanf("%i",&x);
  result = (x>10)? sqrt(pow(x,2)+5) : pow(x,3)+4*pow(x,2)+5;
  printf("The value of the function is: %i\n",result);
}
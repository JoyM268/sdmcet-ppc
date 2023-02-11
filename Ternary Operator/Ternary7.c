/* C program to find the value of the following function
and print the result
f(x) = 0, if x=0
f(x) = 40, if x>0
f(x) = -40, if x<0
using ternary operator/conditional operator */
#include<stdio.h>

main()
{
  int x,result;
  printf("Enter the value of x: ");
  scanf("%i",&x);
  result = (x==0)? 0 : ((x>0)? 40 : -40);
  printf("The value of the function is: %i\n",result);
}
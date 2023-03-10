/* Program to find factorial of a given number using 
functions */
#include<stdio.h>

int factorial(int);
main()
{
  int n;
  printf("Enter a number: ");
  scanf("%i",&n);
  int res = factorial(n);
  printf("The factorial of %i is %i\n",n,res);
}
int factorial(int n)
{
  int fact = 1;
  for(int i = 2; i <= n; i++)
  {
    fact *= i;
  }
  return fact;
}

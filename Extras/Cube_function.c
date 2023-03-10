/* Program to find cube of a number using function */
#include<stdio.h>
#include<math.h>

int cube(int n);
main()
{
  int n;
  printf("Enter a number: ");
  scanf("%i",&n);
  printf("The cube of %i is %i\n",n,cube(n));
}
int cube(int n)
{
  return pow(n,3);
}
/* Write a C program to find the factorial of a given 
integer number */
#include<stdio.h>

main()
{
  int n,factorial=1,i;
  printf("Enter the number: ");
  scanf("%i",&n);
  for(i = 2; i <= n; i++)
  {
    factorial = factorial * i;
  }
  printf("The factorial of %i is %i\n",n,factorial);
}

/* Program to print the following series
1! + 2! + 3! + ...... + n! */
#include<stdio.h>

main()
{
  int n,factorial=1,sum=0;
  printf("Enter the number: ");
  scanf("%i",&n);
  for(int i = 1; i <= n; i++)
  {
    factorial = factorial * i;
    sum = sum + factorial;
  }
  printf("The sum of the series is: %i\n",sum);
}
/* Program to print the following series
-1! + 2! -3! + 4! -5! ...... + n! */
/* Method 2 */
#include<stdio.h>

main()
{
  int n,product=1,sum1=0,sum2=0,sum;
  printf("Enter the number: ");
  scanf("%i",&n);
  for(int i = 1; i <= n; i++)
  {
    product = product * i;
    if(i%2 == 0)
    {
      sum1 = sum1 + product;
    }
    else
    {
      sum2 = sum2 - product;
    }
  }
  sum = sum1 + sum2;
  printf("The sum of the series is: %i\n",sum);
}
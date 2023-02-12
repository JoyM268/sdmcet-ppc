/* Program to print the following series
-1! + 2! -3! + 4! -5! ...... + n! */
/* Method 3 */
#include<stdio.h>

main()
{
  int n,product=1,sum=0;
  printf("Enter the number: ");
  scanf("%i",&n);
  for(int i = 1; i <= n; i++)
  {
    product = product * i;
    int sign = (i%2 == 0)? 1:-1;
    sum = sum + product * sign;
  }
  printf("The sum of the series is: %i\n",sum);
}
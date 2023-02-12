/* Program to print the following series
-1! + 2! -3! + 4! -5! ...... + n! */
/* Method 1 */
#include<stdio.h>
#include<math.h>
main()
{
  int n,product=1,sum=0;
  printf("Enter the number: ");
  scanf("%i",&n);
  for(int i = 1; i <= n; i++)
  {
    product = product * i;
    sum = sum + pow(-1,i) * product;
  }
  printf("The sum of the series is: %i\n",sum);
}
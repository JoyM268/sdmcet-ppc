/* Program to print the following series
1 + 1/3! + 1/5!...... + n! */
#include<stdio.h>

main()
{
  int n;
  float sum=0,product=1;
  printf("Enter the number: ");
  scanf("%i",&n);
  for(int i = 1; i <= n; i++)
  {
    product = product * i;
    if(i%2 != 0)
    {
      sum = sum + 1/product;
    }
    else
    {
      continue;
    }
  }
  printf("The sum of the series is %f\n",sum);
}
  
  
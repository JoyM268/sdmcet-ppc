/* Program to print strong numbers between 1 to n */
#include<stdio.h>

main()
{
  int n,remainder,sum,factorial;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  printf("The strong numbers between 1 to %i are:\n",n);
  for(int i = 1; i <= n; i++)
  {
    int j = i;
    sum = 0;
    while(j > 0)
    {
      factorial = 1; 
      remainder = j % 10;
      for(int k = 2; k <= remainder; k++)
      {
        factorial = factorial * k;
      }
      sum = sum + factorial;
      j = j / 10;
    }
    if(i == sum)
    {
    printf("%i\n",i);
    }
    else
    {
      continue;
    }
  }
}
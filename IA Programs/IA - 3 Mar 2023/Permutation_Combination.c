/* Write a modular C program to find nCr and nPr, where n >= r */
#include<stdio.h>
#include<stdlib.h>

int factorial(int);
main()
{
  int n,nCr,r,nPr;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  printf("Enter the value of r: ");
  scanf("%i",&r);
  if(n < r)
  {
      printf("n should be greater than or equal to r\n");
      exit(0);
  }
  nPr = factorial(n)/factorial(n-r);
  nCr = nPr/factorial(r);
  printf("nPr = %i\n",nPr);
  printf("nCr = %i\n",nCr);
}
int factorial(int n)
{
  int fact = 1,i;
  for(i = 2; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}

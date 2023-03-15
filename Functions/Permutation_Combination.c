/* Program to find permutation and combination */
#include<stdio.h>
int factorial(int);
main()
{
  int n,nCr,r,nPr;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  printf("Enter the value of r: ");
  scanf("%i",&r);
  nPr = factorial(n)/factorial(n-r);
  nCr = nPr/factorial(r);
  printf("nPr = %i\n",nPr);
  printf("nCr = %i\n",nCr);
}
int factorial(int n)
{
  int fact = 1;
  for(int i = 2; i <= n; i++)
  {
    fact = fact * i;
  }
  return fact;
}
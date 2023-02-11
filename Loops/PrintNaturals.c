/* Program to print first n natural numbers */
#include<stdio.h>

main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  for(int i = 1; i <= n; i++)
  {
    printf("%i\n",i);
  }
}
/* Program to print all the odd numbers between 1 and n */
#include<stdio.h>

main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  for(int i = 1; i <= n; i = i + 2)
  {
    printf("%i\n",i);
  }
}
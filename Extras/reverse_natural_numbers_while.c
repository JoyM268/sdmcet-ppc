/* Program to print all natural numbers in reverse 
(from n to 1) using while loop */
#include<stdio.h>

main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  printf("The natural numbers in reverse(from %i to 1) are:\n",n);
  while(n >= 1)
  {
    printf("%i\n",n);
    n--;
  }
}
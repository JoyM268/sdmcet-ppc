/* program to print all odd numbers between 1 to n using
 while loop */
#include<stdio.h>

main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  printf("The odd numbers between 1 and %i are:\n",n);
  int i = 1;
  while(i <= n)
  {
    printf("%i\n",i);
    i += 2;
  }
}
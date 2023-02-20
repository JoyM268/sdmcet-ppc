/* Program to display the multiplication table of a given 
integer */
#include<stdio.h>

main()
{
  int n;
  printf("Enter the integer: ");
  scanf("%i",&n);
  for(int i = 1; i <= 10; i++)
  {
    printf("%i x %i = %i\n",n,i,n*i);
  }
}
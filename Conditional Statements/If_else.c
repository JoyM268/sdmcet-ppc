/* C program to check whether a given number is divisible 
by 3 or not */
#include<stdio.h>

main()
{
  int n;
  printf("Enter a number: ");
  scanf("%i",&n);
  if(n%3 == 0)
  {
    printf("The number is divisible by 3\n");
  }
  else
  {
    printf("The number is not divisible by 3\n");
  }
}
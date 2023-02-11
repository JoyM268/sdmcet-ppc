/* C program to check whether the given number is positive,
negative or zero */
#include<stdio.h>

main()
{
  int n;
  printf("Enter the number: ");
  scanf("%i",&n);
  if(n == 0)
  {
    printf("The number is zero\n");
  }
  else if(n > 0)
  {
    printf("The number is positive\n");
  }
  else
  {
    printf("The number is negative\n");
  }
}
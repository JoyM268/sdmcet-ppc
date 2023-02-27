/* Program to find all factors of a number */
#include<stdio.h>

main()
{
  int num;
  printf("Enter a number: ");
  scanf("%i",&num);
  printf("The factors of %i are:\n",num);
  for(int i = 1; i <= num; i++)
  {
    if(num % i == 0)
    {
      printf("%i\n",i);
    }
  }
}
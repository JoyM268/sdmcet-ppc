/* Program to print all the numbers that are divisible by 
3 between 1 and n */
#include<stdio.h>

main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  for(int i = 1; i <= n; i++)
  {
    if(i%3 == 0)
    {
      printf("%i\n",i);
    }
  }
}
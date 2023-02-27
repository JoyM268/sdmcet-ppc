/* Program to find prime factors of a number */
#include<stdio.h>

main()
{
  int num;
  printf("Enter a number: ");
  scanf("%i",&num);
  printf("The prime factors of %i are:\n",num);
  for(int i = 1; i <= num; i++)
  {
    int prime = 1;
    if(num % i == 0)
    {
      for(int j = 2; j <= sqrt(i); j++)
      {
        if(i % j == 0)
        {
          prime = 0;
          break;
        }
      }
      if(prime == 1)
      {
        printf("%i\n",i);
      }
    }
  }
}
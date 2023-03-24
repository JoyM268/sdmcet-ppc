/* Write a C program to check whether a given number is 
a prime number or not */
#include<stdio.h>
#include<math.h>

main()
{
  int num,prime=1,remainder,i;
  printf("Enter the number: ");
  scanf("%i",&num);
  for(i = 2; i <= sqrt(num); i++)
  {
    remainder = num % i;
    if(remainder == 0)
    {
      prime = 0;
      break;
    }
  }
  if(prime == 1)
  {
    printf("%i is a prime number\n",num);
  }
  else
  {
    printf("%i is not a prime number\n",num);
  }
}
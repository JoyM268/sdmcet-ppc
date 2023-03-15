/* Program to check if a number is prime or not using 
functions */
#include<stdio.h>
#include<math.h>

int is_prime(int);
main()
{
  int n;
  printf("Enter a number: ");
  scanf("%i",&n);
  if(is_prime(n))
  {
    printf("%i is a prime number\n",n);
  }
  else
  {
    printf("%i is not a prime number\n",n);
  }
}
int is_prime(int n)
{
  for(int i = 2; i <= sqrt(n); i++)
  {
    if(n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
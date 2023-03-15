/* Program to find prime numbers in given range using 
functions */
#include<stdio.h>
#include<math.h>

int is_prime(int);
void print_prime(int,int);
main()
{
  int n1,n2;
  printf("Enter a range(n1 & n2): ");
  scanf("%i %i",&n1,&n2);
  printf("Prime numbers between the range of %i and %i are:\n",n1,n2);
  print_prime(n1,n2);
}
int is_prime(int i)
{
  for(int j = 2; j <= sqrt(i); j++)
  {
    if(i % j == 0)
    {
      return 0;
    }
  }
  return 1;
}
void print_prime(int n1, int n2)
{
  for(int i = n1; i <= n2; i++)
  {
    if(is_prime(i))
    {
      printf("%i\n",i);
    }
  }
}

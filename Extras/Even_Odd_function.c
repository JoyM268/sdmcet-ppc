/* Program to check even or odd using functions */

#include<stdio.h>
#include<stdbool.h>
bool is_even(int);
main()
{
  int n;
  printf("Enter a number: ");
  scanf("%i",&n);
  if(is_even(n))
  {
    printf("%i is a even number\n",n);
  }
  else
  {
    printf("%i is a odd number\n",n);
  }
}
bool is_even(int n)
{
  return !(n % 2);
}
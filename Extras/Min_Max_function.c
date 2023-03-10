/* Program to find maximum and minimum using functions */
#include<stdio.h>

int max(int, int);
int min(int, int);
main()
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%i %i",&a,&b);
  int maximum = max(a,b);
  int minimum = min(a,b);
  printf("Minimum = %i\n",minimum);
  printf("Maximum = %i\n",maximum);
}
int max(int a, int b)
{
  return (a > b)? a : b;
}
int min(int a, int b)
{
  return (a < b)? a : b;
}
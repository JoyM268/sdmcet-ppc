/* C program to print if the given number is even or odd
using ternary operator/conditional operator */
#include<stdio.h>

main()
{
  int n;
  printf("Enter a number: ");
  scanf("%i",&n);
  (n%2==0)? printf("The number is even") : printf("The number is odd");
}
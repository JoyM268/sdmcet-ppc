/* C program to find the largest among three given numbers
using ternary operator/conditional operator */
#include<stdio.h>

main()
{
  int a,b,c,largest;
  printf("Enter 3 numbers: ");
  scanf("%i %i %i",&a,&b,&c);
  largest = (a>b)? ((a>c)? a : c) : ((b>c)? b : c);
  printf("The largest of the 3 numbers is: %i", largest);
}
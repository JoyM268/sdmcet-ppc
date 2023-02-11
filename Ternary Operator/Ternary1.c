/* C program to print largest among two numbers using 
ternary operator/conditional operator */
#include<stdio.h>

main()
{
  int a,b,largest;
  printf("Enter the two numbers: ");
  scanf("%i %i",&a,&b);
  largest = (a>b)? a:b;
  printf("The largest of the two numbers is: %i \n",largest);
}
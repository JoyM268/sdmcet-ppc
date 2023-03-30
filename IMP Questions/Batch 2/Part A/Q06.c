/* Write a C program to find the largest of any 3 given
 integers */
#include<stdio.h>

main()
{
  int a,b,c,largest;
  printf("Enter 3 numbers: ");
  scanf("%i %i %i",&a,&b,&c);
  largest = (a>b)? a : ((b>c)? b : c);
  printf("The largest of the 3 numbers is: %i", largest);
}

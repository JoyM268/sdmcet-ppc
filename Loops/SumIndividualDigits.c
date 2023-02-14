/* Program to print the sum of individual digits of a given
number */
#include<stdio.h>

main()
{
  int remainder,num,sum=0;
  printf("Enter the number: ");
  scanf("%i",&num);
  while(num > 0)
  {
    remainder = num % 10;
    sum = sum + remainder;
    num = num / 10;
  }
  printf("The sum of individual digits of the number is : %i\n",sum);
}
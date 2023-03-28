/* Write a C program to print the sum of digits of a 
given integer number */
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
  printf("The sum of digits of the number is : %i\n",sum);
}

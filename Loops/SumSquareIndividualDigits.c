/* Program to print the sum of squares of individual 
digits of a given number */
#include<stdio.h>
#include<math.h>
main()
{
  int remainder,num,sum=0;
  printf("Enter the number: ");
  scanf("%i",&num);
  while(num>0)
  {
    remainder = num % 10;
    sum = sum + pow(remainder,2);
    num = num/10;
  }
  printf("The sum of squares of individual digits of the number is: %i\n",sum);
}
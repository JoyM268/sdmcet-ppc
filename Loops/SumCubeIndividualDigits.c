/* Program to print the sum of cubes of individual 
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
    sum = sum + pow(remainder,3);
    num = num/10;
  }
  printf("The sum of cubes of individual digits of the number is: %i\n",sum);
}
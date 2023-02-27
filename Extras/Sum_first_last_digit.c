/* Program to find sum of first and last digit of any 
 number */
#include<stdio.h>

main()
{
  int num,firstdigit,lastdigit,sum;
  printf("Enter the number: ");
  scanf("%i",&num);
  lastdigit = num % 10;
  firstdigit = num;
  while(firstdigit >= 10)
  {
    firstdigit = firstdigit/10;
  }
  sum = firstdigit + lastdigit;
  printf("The sum of first and last digit of %i is %i\n",num,sum);
}
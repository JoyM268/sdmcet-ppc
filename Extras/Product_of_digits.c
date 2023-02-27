/* Program to find product of digits of a number */
#include<stdio.h>

main()
{
  int num,product = 1,original,remainder;
  printf("Enter a number: ");
  scanf("%i",&num);
  original = num;
  while(num > 0)
  {
    remainder = num % 10;
    product = product * remainder;
    num = num / 10;
  }
  printf("The product of all digits in %i: %i\n",original,product);
}
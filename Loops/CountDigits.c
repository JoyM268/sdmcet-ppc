/* Program to count the number of digits of a given
number */
#include<stdio.h>

main()
{
  int remainder,num,counter=0;
  printf("Enter the number: ");
  scanf("%i",&num);
  while(num > 0)
  {
    remainder = num % 10;
    counter ++;
    num = num / 10;
  }
  printf("The number has %i digits\n",counter);
}
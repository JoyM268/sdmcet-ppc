/* Program to find reverse of the given number. 
Print the number before and after reversing */
#include<stdio.h>

main()
{
  int remainder, num, reverse=0,m;
  printf("Enter the number: ");
  scanf("%i",&num);
  m = num;
  while(num>0)
  {
    remainder = num % 10;
    reverse = reverse * 10 + remainder;
    num = num/10;
  }
  printf("The orignal number is: %i\n",m);
  printf("The reversed number is: %i\n",reverse);
}
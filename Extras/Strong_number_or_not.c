/* Program to check whether a number is Strong number or
 not */
#include<stdio.h>

main()
{
  int num,remainder,sum = 0,factorial;
  printf("Enter a number: ");
  scanf("%i",&num);
  int original = num;
  while(num > 0)
  {
    factorial = 1; 
    remainder = num % 10;
    for(int i = 2; i <= remainder; i++)
    {
      factorial = factorial * i;
    }
    sum = sum + factorial;
    num = num / 10;
  }
  if(original == sum)
  {
    printf("%i is a strong number\n",original);
  }
  else
  {
    printf("%i is not a strong number\n",original);
  }
}
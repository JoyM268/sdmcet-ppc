/* Program to check whether a given number is an armstrong 
number or not */
#include<stdio.h>
#include<math.h>

main()
{
  int sum = 0,remainder,num;
  printf("Enter the number: ");
  scanf("%i",&num);
  int original = num;
  while(num > 0)
  {
    remainder = num % 10;
    sum = sum + pow(remainder,3);
    num = num / 10;
  }
  if(original == sum)
  {
    printf("%i is a armstrong number\n",original);
  }
  else
  {
    printf("%i is not a armstrong number\n",original);
  }
}
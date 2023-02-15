/* Program to check wheter a given number is palindrome or
not */
#include<stdio.h>

main()
{
  int remainder,reverse=0,num,original;
  printf("Enter the number: ");
  scanf("%i",&num);
  original = num;
  while(num > 0)
  {
    remainder = num % 10;
    reverse = reverse*10 + remainder;
    num = num/10;
  }
  if(original == reverse)
  {
    printf("The number is a palindrome\n");
  }
  else
  {
    printf("The number is not a palindrome\n");
  }
}
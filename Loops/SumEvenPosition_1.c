/* Program to print the sum of digits in the even 
position */
/* Method 1 */
#include<stdio.h>

main()
{
  int remainder,num,sum=0;
  printf("Enter the number: ");
  scanf("%i",&num);
  while(num > 0)
  {
    num = num / 10;
    remainder = num % 10;
    num = num / 10;
    sum = sum + remainder;
  }
  printf("The sum of the digits in the even position of the number is: %i",sum);
}
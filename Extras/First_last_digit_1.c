/* Program to find first and last digit of any number */
/* Method 1 */
#include<stdio.h>

main()
{
  int num,m,lastdigit;
  printf("Enter the number: ");
  scanf("%i",&num);
  lastdigit = num % 10;
  m = num;
  while(num >= 10)
  {
    num = num / 10;
  }
  printf("The first digit of %i is: %i\n",m,num);
  printf("The last digit of %i is: %i\n",m,lastdigit);
}
/* Program to find first and last digit of any number */
/* Method 2 */
#include<stdio.h>
#include<math.h>

main()
{
  int num,lastdigit,digits,firstdigit;
  printf("Enter the number: ");
  scanf("%i",&num);
  lastdigit = num % 10;
  digits = log10(num);
  firstdigit = num/(pow(10,digits));
  printf("The first digit of %i is: %i\n",num,firstdigit);
  printf("The last digit of %i is: %i\n",num,lastdigit);
}
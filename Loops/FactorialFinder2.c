/* Program to find factorial of the given number */
/* METHOD 2 */
#include<stdio.h>

main()
{
  int n,factorial=1;
  printf("Enter the number: ");
  scanf("%i",&n);
  for(int i = n; i >= 2; i--)
  {
    factorial = factorial * i;
  }
  printf("The factorial of %i is %i\n",n,factorial);
}
/* program to print all even numbers between 1 to n using
 while loop */
#include<stdio.h>

main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  printf("The even numbers between 1 and %i are:\n",n);
  int i = 2;
  while(i <= n)
  {
    printf("%i\n",i);
    i += 2;
  }
}

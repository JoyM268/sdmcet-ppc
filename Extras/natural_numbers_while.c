/* program to print all natural numbers from 1 to n using 
while loop */
#include<stdio.h>

main()
{
  int n;
  printf("Enter the upperlimit: ");
  scanf("%i",&n);
  printf("The natural numbers from 1 to %i are:\n",n);
  int num = 1;
  while(num <= n)
  {
    printf("%i\n",num);
    num++;
  }
}
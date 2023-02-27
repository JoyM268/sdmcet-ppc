/* Program to find Armstrong numbers between 1 to n */
#include<stdio.h>
#include<math.h>

main()
{
  int sum = 0,remainder,n,j;
  printf("Enter the value of n: ");
  scanf("%i",&n);
  printf("The armstrong number between 1 and %i are:\n",n);
  for(int i = 0; i <= n; i++)
  {
    j = i;
    sum = 0;
    while(j > 0)
    {
      remainder = j % 10;
      sum = sum + pow(remainder,3);
      j = j / 10;
    }
    if(i == sum)
    {
      printf("%i\n",i);
    }
  }
}
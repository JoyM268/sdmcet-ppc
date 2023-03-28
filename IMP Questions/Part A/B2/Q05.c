/* Write a C program to print the 1st ‘n’ elements in a 
Fibonacci series */
#include<stdio.h>

main()
{
  int i,n;
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  int firstterm = 0;
  int secondterm = 1;
  int thirdterm;


  if(n == 1)
  {
    printf("0\n");
  }
  else
  {
    printf("%i\n",firstterm);
    printf("%i\n",secondterm);
    for(i = 3; i <= n; i++)
    {
      thirdterm = firstterm+secondterm;
      printf("%i\n",thirdterm);
      firstterm = secondterm;
      secondterm = thirdterm;
    }
  }
}

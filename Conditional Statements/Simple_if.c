/* C program to print the value of the following function
only when a-b not equal to 0
f(x) = (ma-nb)/(a-b) */
#include<stdio.h>

main()
{
  int a,b,m,n,result;
  printf("Enter the values of a and b: ");
  scanf("%i %i",&a,&b);
  if((a-b) != 0)
  {
    printf("Enter the values of m and n: ");
    scanf("%i %i",&m,&n);
    result = ((m*a)-(n*b))/(a-b);
    printf("The value of the expression is: %i\n",result);
  }
}
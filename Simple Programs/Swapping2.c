/* C Program to read two integer and swap the values of 
those two integer using only two variables and also 
print values before and after */
#include<stdio.h>

main()
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%i %i",&a,&b);
  printf("Before Swap:\n");
  printf("The value of a is %i and b is %i\n",a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("After Swap:\n");
  printf("The value of a is %i and b is %i\n",a,b);
}
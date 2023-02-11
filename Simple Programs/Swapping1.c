/* C Program to read two integer and swap the values of 
those two integer using temporary variable and also 
print values before and after */
#include <stdio.h>

main()
{
  int a,b,temp;
  printf("Enter two numbers: ");
  scanf("%i %i",&a,&b);
  printf("The value of a is %i and b is %i\n",a,b);
  temp=b;
  b=a;
  a=temp;
  printf("The value of a is %i and b is %i\n",a,b);
 }
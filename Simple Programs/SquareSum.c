/* C Program tof find the value of (a+b)^2 for given 
values of a and b */
#include<stdio.h>
#include<math.h>
main()
{
  int a,b,result;
  printf("Enter the value of a and b: ");
  scanf("%i %i",&a,&b);
  result=pow(a+b,2);
  printf("Result = %i",result);
}
/* program to find maximum between two numbers using
 switch case */
#include<stdio.h>

main()
{
  int a,b;
  printf("Enter two numbers: ");
  scanf("%i %i",&a,&b);
  switch(a > b)
  {
    case 0:
      printf("%i is the maximum\n",b);
      break;
    case 1:
      printf("%i is the maximum\n",a);
      break;
  }
}
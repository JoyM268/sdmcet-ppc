/* Program to find value of y based on the following using 
switch y=0, for x=0
       y=-1, for x=-1
       y=1, for x=1
*/
#include<stdio.h>

main()
{
  int x;
  printf("Enter the value of x: ");
  scanf("%i",&x);
  switch(x)
  {
    case 0:
      printf("y = 0\n");
      break;
    case 1:
      printf("y = 1\n");
      break;
    case -1:
      printf("y = -1\n");
      break;
    default:
      printf(" Invalid Input\n");
      break;
  }
}
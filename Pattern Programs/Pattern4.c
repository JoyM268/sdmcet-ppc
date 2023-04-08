/* Program to print the following pattern using loops for n diff rows
example:
*
* *
* * *
* *
*
when rows = 5 */ 
#include<stdio.h>
main()
{
  int rows,i,j;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  for(i = 1; i <= (rows/2)+1; i++)
  {
    for(j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for(i = (rows/2); i >= 1; i--)
  {
    for(j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}  
  
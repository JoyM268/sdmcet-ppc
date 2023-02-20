/* Program to display the pattern like a diamond
    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    * 
rows = 5 */
#include<stdio.h>

main()
{
  int rows;
  printf("Enter the number of rows(half of the diamonds): ");
  scanf("%i",&rows);
  for(int i = 0; i <= rows; i++)
  {
    for(int j = 1; j <= rows - i; j++)
    {
      printf(" ");
    }
    for(int j = 1; j <= 2*i-1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  for(int i = rows - 1; i >= 1; i--)
  {
    for(int j = 1; j <= rows-i; j++ )
    {
      printf(" ");
    }
    for(int j = 1; j <= 2*i-1; j++)
    {
      printf("*");
    }
    printf("\n");
  }
}
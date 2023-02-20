/* Program to make such a pattern like a pyramid
with an asterisk. The pattern is as follows :
   * 
  * * 
 * * * 
* * * *
rows = 4 */
#include<stdio.h>

main()
{
  int rows;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  for(int i = 1; i <= rows; i++)
  {
    for(int j = 1; j <= rows - i; j++)
    {
      printf(" ");
    }
    for(int j = 1; j <= i; j++)
    {
      printf("* ");
    }
    printf("\n");
  }
}
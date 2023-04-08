/* Program to print the following pattern using loops for n diff rows
example:
5 5 5 5 5
5 5 5 5 5
5 5 0 5 5
5 5 5 5 5
5 5 5 5 5
when rows = 5 */
#include<stdio.h>

main()
{
  int rows,i,j;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  for(i = 0; i < rows; i++)
  {
    for(j = 0; j < rows; j++)
    {
      if(i == (rows/2) && j == (rows/2))
      {
        printf("0\t");
      }
      else
      {
        printf("5\t");
      }
    }
    printf("\n");
  }
}
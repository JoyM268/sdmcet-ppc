/* Program to print the following pattern using loops for n diff rows
example:
1 2 3 4
  2 3 4
    3 4
      4
when rows = 4 */
#include<stdio.h>

main()
{
  int rows,i,j;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  for(i = 1; i <= rows; i++)
  {
    for(j = 1; j <= rows; j++)
    {
      if(i > j)
      {
        printf(" \t");
      }
      else
      {
        printf("%i\t",j);
      }
      
    }
    printf("\n");
  }
}
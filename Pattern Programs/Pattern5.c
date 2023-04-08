/* Program to print the following pattern using loops for n diff rows
example:
1 2 3 4
1 2 3
1 2
1
when rows = 4 */
#include<stdio.h>

main()
{
  int rows,i,j;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  for(i = rows; i >= 1; i--)
  {
    for(j = 1; j <= i; j++)
    {
      printf("%i\t",j);
    }
    printf("\n");
  }
}
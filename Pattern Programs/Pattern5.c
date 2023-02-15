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
  int rows;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  for(int i = rows; i >= 1; i--)
  {
    for(int j = 1; j <= i; j++)
    {
      printf("%i\t",j);
    }
    printf("\n");
  }
}
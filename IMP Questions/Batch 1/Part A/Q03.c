/* Write a C program to print the following patterns:
1            1
1 2          2 2
1 2 3        3 3 3
......       ......
*/
#include<stdio.h>

main()
{
  int rows,i,j;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  for(i = 1; i <= rows; i++)
  {
    for(j = 1; j <= i; j++)
    {
      printf("%i\t",j);
    }
    printf("\n");
  }
  printf("\n");
  for(i = 1; i <= rows; i++)
  {
    for(j = 1; j <= i; j++)
    {
      printf("%i\t",i);
    }
    printf("\n");
  }
}

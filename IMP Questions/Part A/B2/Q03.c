/* Write a C program to print the following patterns:
a                    $ $ $
a b                    $ $
a b c                    $
.....                          For ‘n’ rows */

#include<stdio.h>

main()
{
  int rows,i,j;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  for(i = 0; i < rows; i++)
  {
    char ch = 'a';
    for(j = 0; j <= i; j++)
    {
      printf("%c ",ch++);
    }
    printf("\n");
  }
  printf("\n");
  for(i = 0; i < rows; i++)
  {
    for(j = 0; j < rows; j++)
    {
      if(i > j)
      {
        printf("  ");
      }
      else
      {
        printf("$ ");
      }
    }
    printf("\n");
  }
}
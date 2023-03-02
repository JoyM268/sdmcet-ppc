/* Program to check wheter a given matrix is square or not,
if it is then print principal diagonal elements.if it is
not print error */
#include<stdio.h>
#include<stdlib.h>
#define ROW 10
#define COL 10
main()
{
  int arr[ROW][COL],i,j,m,n;
  printf("Enter the order of the matrix: ");
  scanf("%i %i",&m,&n);
  if(m != n)
  {
    printf("It is not a square matrix\n");
    exit(0);
  }
  printf("Enter %i elements:\n",m*n);
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      scanf("%i",&arr[i][j]);
    }
  }
  printf("The principal diagonal elements are: ");
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      if(i == j)
      {
        printf("%i ",arr[i][j]);
      }
    }
  }
}
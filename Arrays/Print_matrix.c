/* Program to read a matrix of order mxn and print it on 
the console in the matrix format */
#include<stdio.h>
#define ROW 10
#define COL 10
main()
{
  int arr[ROW][COL],i,j,m,n;
  printf("Enter the order of the matrix: ");
  scanf("%i %i",&m,&n);
  printf("Enter %i elements:\n",m*n);
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      scanf("%i",&arr[i][j]);
    }
  }
  printf("The Matrix elements are:\n");
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("%i ",arr[i][j]);
    }
    printf("\n");
  }
}
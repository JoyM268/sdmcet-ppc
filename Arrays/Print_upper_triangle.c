/* Program to print all the elements that are present in
upper triangle of square matrix */
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
  printf("The elements in the upper triangle are:\n");
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      if(j > i)
      {
        printf("%i ",arr[i][j]);
      }
    }
  }
}
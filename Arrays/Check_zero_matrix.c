/* Program to check wheter a given matrix is zero matrix 
or not */
#include<stdio.h>
#include<stdlib.h>
#define ROW 10
#define COL 10
main()
{
  int arr[ROW][COL],i,j,m,n,flag = 1;
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
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      if(arr[i][j] != 0)
      {
        flag = 0;
        break;
      }
    }
    if(flag == 0)
    {
      break;
    }
  }
  if(flag == 1)
  {
    printf("It is a zero matrix\n");
  }
  else
  {
    printf("It is not a zero matrix\n");
  }
}
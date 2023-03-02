/* Program to check wheter a given matrix is unit matrix 
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
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      if(i == j)
      {
        if(arr[i][j] != 1)
        {
          flag = 0;
          break;
        }
      }
      else
      {
        if(arr[i][j] != 0)
        {
          flag = 0;
          break;
        }
      }
    }
  }
  if(flag == 1)
  {
    printf("It is a unit matrix\n");
  }
  else
  {
    printf("It is not a unit matrix\n");
  }
}


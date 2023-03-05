/* Program to find transpose of a matrix */
#include<stdio.h>
#define ROW 10
#define COL 10

main()
{
  int matrix[ROW][COL],transpose[ROW][COL],i,j,m,n;
  printf("Enter the order of the matrix: ");
  scanf("%i %i",&m,&n);
  printf("Enter %i elements:\n",m*n);
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      scanf("%i",&matrix[i][j]);
    }
  }
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      transpose[j][i] = matrix[i][j];
    }
  }
  printf("The transpose kf the matrix is:\n");
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++)
    {
      printf("%i ",transpose[i][j]);
    }
    printf("\n");
  }
}
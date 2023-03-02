/* Program to find and print sum of any two given matrices
 where first matrix is of order m x n and second is of 
 order p x q, sum can be found out only when m = p and 
 n = q */
#include<stdio.h>
#include<stdlib.h>
#define ROW 10
#define COL 10
main()
{
  int matrix1[ROW][COL],matrix2[ROW][COL],m,n,p,q,i,j;
  printf("Enter the order of matrix 1: ");
  scanf("%i %i",&m,&n);
  printf("Enter the order of matrix 2: ");
  scanf("%i %i",&p,&q);
  if(m != p || n != q)
  {
    printf("Sum of the matrices not possible\n");
    exit(0);
  }
  printf("Enter %i elements of matrix 1:\n",m*n);
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      scanf("%i",&matrix1[i][j]);
    }
  }
  printf("Enter %i elements of matrix 2:\n",p*q);
  for(i = 0; i < p; i++)
  {
    for(j = 0; j < q; j++)
    {
      scanf("%i",&matrix2[i][j]);
    }
  }
  printf("The sum of the two matrices is:\n");
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < n; j++)
    {
      printf("%i ",matrix1[i][j] + matrix2[i][j]);
    }
    printf("\n");
  }
}
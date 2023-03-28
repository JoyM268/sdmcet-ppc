/* Write a C program to multiply two matrices of order 
m x n and p x q and print the
product matrix in the 
matrix format.[NOTE: Check the matrices for 
multiplication compatibility.] */
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
  if(n != p)
  {
    printf("Product of the matrices not possible\n");
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
  int k,product[ROW][COL];
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < q; j++)
    {
      product[i][j] = 0;
      for(k = 0; k < n; k++)
      {
        product[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }
  printf("The product matrix is:\n");
  for(i = 0; i < m; i++)
  {
    for(j = 0; j < q; j++)
    {
      printf("%i ",product[i][j]);
    }
    printf("\n");
  }
}

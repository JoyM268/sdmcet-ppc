/* Write a C program to read a matrix of order m x n, 
find whether it is a square matrix or not. If it is not 
print error message and go back and read the correct 
order.Once it is a square matrix find the sum of all 
elements of secondary diagonal */
#include<stdio.h>
#define ROW 50
#define COL 50

main()
{
  int matrix[ROW][COL],m,n,i,j,sum = 0;
  Read:
  printf("Enter the order of the matrix: ");
  scanf("%i %i",&m,&n);
  if(m != n)
  {
    printf("It is not a square matrix\n\n");
    goto Read;
  }
  printf("Enter %i elemnets:\n",m*n);
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
      if(i + j == m - 1)
      {
        sum += matrix[i][j];
      }
    }
  }
  printf("Sum of all secondary diagonal elements: %i\n",sum);
}
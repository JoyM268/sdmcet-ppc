/* Program to print norm of a square matrix */
/* norm = sum of squares of principal diagonal elements */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ROW 10
#define COL 10
main()
{
  int arr[ROW][COL],i,j,m,n,norm = 0;
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
    norm += pow(arr[i][i],2);
  }
  printf("The norm of the matrix is: %i\n",norm);
}

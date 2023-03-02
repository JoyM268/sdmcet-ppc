/* Program to find trace of the given square matrix
Trace = sum of all the principal diagonal elements */
/* Method 2 */
#include<stdio.h>
#include<stdlib.h>
#define ROW 10
#define COL 10
main()
{
  int arr[ROW][COL],i,j,m,n,trace = 0;
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
    trace = trace + arr[i][i];
  }
  printf("The trace of the matrix is: %i\n",trace);
}

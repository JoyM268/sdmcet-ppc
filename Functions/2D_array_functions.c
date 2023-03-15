/* Modular C program to perform following operation
1. Read two different of orders mxn and pxq
2. Print both of them on the console along in format of 
   matrix
3. Find the sum of all the elements which are present in
   even numbered row
*/
#include<stdio.h>
#define ROW 50
#define COL 50

void read_matrix(int,int,int[][COL]);
void print_matrix(int,int,int[][COL]);
int even_row_sum(int,int,int[][COL]);
main()
{
  int m,n,p,q,matrix1[ROW][COL],matrix2[ROW][COL];
  printf("Enter order of matrix 1: ");
  scanf("%i %i",&m,&n);
  read_matrix(m,n,matrix1);
  printf("Enter order of matrix 2: ");
  scanf("%i %i",&p,&q);
  read_matrix(p,q,matrix2);
  print_matrix(m,n,matrix1);
  print_matrix(p,q,matrix2);
  printf("Sum of even row elements in matrix 1:%i\n",even_row_sum(m,n,matrix1));
  printf("Sum of even row elements in matrix 2:%i\n",even_row_sum(p,q,matrix2));
}
void read_matrix(int m,int n,int matrix[][COL])
{
  printf("Enter the %i elements:\n",m*n);
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
      scanf("%i",&matrix[i][j]);
    }
  }
}
void print_matrix(int m,int n,int matrix[][COL])
{
  printf("Elements of matrix are:\n");
  for(int i = 0; i < m; i++)
  {
    for(int j = 0; j < n; j++)
    {
      printf("%i ",matrix[i][j]);
    }
    printf("\n");
  }
}
int even_row_sum(int m,int n,int matrix[][COL])
{
  int sum = 0;
  for(int i = 0; i < m; i+=2)
  {
    for(int j = 0; j < n; j ++)
    {
      sum += matrix[i][j];
    }
  }
  return sum;
}

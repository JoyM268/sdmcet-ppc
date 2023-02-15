/* Program to print hollow rectangle pattern using 
loops for n and m diff rows and columns
example:
* * * * *
*       *
*       *
* * * * *
when n = 4 and m = 5 */
#include<stdio.h>

main()
{
  int n,m;
  printf("Enter the number of rows and columns: ");
  scanf("%i %i",&n,&m);
  for(int i = 1; i <= n; i++)
  {
    for(int j =1; j <= m; j++)
    {
      if(i == 1 || i == n)
      {
        printf("*\t");
      }
      else if(j == 1 || j == m)
      {
        printf("*\t");
      }
      else
      {
        printf(" \t");
      }
    }
    printf("\n");
  }
}
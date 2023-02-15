/* Program to print Floyd's triangle using loops for 
n diff rows
example:
1
2 3
4 5 6
7 8 9 10
when rows = 4 */
#include<stdio.h>

main()
{
  int rows, counter = 1;
  printf("Enter the number of rows: ");
  scanf("%i",&rows);
  for(int i = 1; i <= rows; i++)
  {
    for(int j =1; j <= i; j++)
    {
      printf("%i\t",counter);
      counter++;
    }
    printf("\n");
  }
}
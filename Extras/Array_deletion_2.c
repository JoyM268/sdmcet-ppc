/* Program to delete an element from an array at 
specified position */
/* Method 2 */
#include<stdio.h>
#define SIZE 100

main()
{
  int n,arr[SIZE], pos;
  printf("Enter number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  printf("Enter the position of the element: ");
  scanf("%i",&pos);
  printf("Array before deletion: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
  printf("\n");
  for(int i = pos - 1; i < n - 1; i++)
  {
    arr[i] = arr[i + 1];
  }
  n--;
  printf("Array after deletion: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
  printf("\n");
}
  
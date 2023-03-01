/* Program to delete an element from an array at 
specified position */
/* Method 1 */
#include<stdio.h>
#define SIZE 100

main()
{
  int n,arr[SIZE],index;
  printf("Enter number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  printf("Enter the index of the element: ");
  scanf("%i",&index);
  printf("Array before deletion: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
  printf("\n");
  for(int i = index; i < n - 1; i++)
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
  
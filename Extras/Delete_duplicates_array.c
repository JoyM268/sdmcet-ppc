/* Program to delete duplicate elements from array */
#include<stdio.h>
#define SIZE 50
main()
{
  int n,arr[SIZE];
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  printf("Array before deletion of duplicates: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
  printf("\n");
  for(int i = 0; i < n; i++)
  {
    for(int j = i + 1; j < n; j++)
    {
      if(arr[i] == arr[j])
      {
        for(int k = j; k < n - 1; k++)
        {
          arr[k] = arr[k + 1];
        }
        n--;
        j--;
      }
    }
  }
  printf("Array after deletion of duplicates: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
  printf("\n");
}
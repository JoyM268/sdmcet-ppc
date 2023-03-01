/* Program to copy all elements of one array to another */
#include<stdio.h>

main()
{
  int n;
  printf("Enter number of elements: ");
  scanf("%i",&n);
  int arr1[n];
  int arr2[n];
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr1[i]);
  }
  printf("Array 1: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr1[i]);
  }
  printf("\n");
  for(int i = 0; i < n; i++)
  {
    arr2[i] = arr1[i];
  }
  printf("Array 2: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr2[i]);
  }
  printf("\n");
}
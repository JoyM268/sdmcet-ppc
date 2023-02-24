/* Bubble Sort */
#include<stdio.h>

main()
{
  int n, temp;
  printf("Enter the number of elements: ");
  scanf("%i", &n);
  int arr[n];
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  for(int i = 0; i < n - 1; i++)
  {
    for(int j = 0; j < n-i-1; j++)
    {
      if(arr[j] > arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
  printf("The array of elements after sorting: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
}
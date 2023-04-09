/* Bubble Sort */
#include<stdio.h>
#define SIZE 50
main()
{
  int n, temp, arr[SIZE],i,j;
  printf("Enter the number of elements: ");
  scanf("%i", &n);
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n-i-1; j++)
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
  for(i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
}
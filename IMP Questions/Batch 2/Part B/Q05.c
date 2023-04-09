/* Write a C program to sort elements of an integer array using bubble sort technique.
Print both unsorted and sorted array of elements */
#include<stdio.h>
#define SIZE 50

main()
{
  int n, temp, arr[SIZE],i,j,unsorted[SIZE];
  printf("Enter the number of elements: ");
  scanf("%i", &n);
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  for(i = 0; i < n; i++)
  {
    unsorted[i] = arr[i];
  }
  for(i = 0; i < n-1; i++)
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
  printf("The array of elements before sorting: ");
  for(i = 0; i < n; i++)
  {
    printf("%i ",unsorted[i]);
  }
  printf("\n");
  printf("The array of elements after sorting: ");
  for(i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
  printf("\n");
}

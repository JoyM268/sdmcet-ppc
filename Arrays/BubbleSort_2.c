/* Bubble Sort, but it exits the loop if the elements in 
the array are already sorted */
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
    int swap = 0;
    for(int j = 0; j < n-i-1; j++)
    {
      if(arr[j] > arr[j+1])
      {
        swap = 1;
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
    if(swap == 0)
    {
      break;
    }
  }
  printf("The array of elements after sorting: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
}
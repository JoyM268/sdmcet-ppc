/* Program to find maximum and minimum element in array */
#include<stdio.h>

main()
{
  int n,max,min;
  printf("Enter the no. of elements: ");
  scanf("%i",&n);
  int arr[n];
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  max = arr[0];
  min = arr[0];
  for(int i = 1; i < n; i++)
  {
    if(arr[i] > max)
    {
      max = arr[i];
    }
    if(arr[i] < min)
    {
      min = arr[i];
    }
  }
  printf("The minimum element of the array: %i\n",min);
  printf("The maximum element of the array: %i\n",max);
}
/* Write a C program to find the maximum and minimum 
element in an array of n
elements */
#include<stdio.h>
#define SIZE 50

main()
{
  int n,max,min,arr[SIZE],i;
  printf("Enter the no. of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  max = arr[0];
  min = arr[0];
  for(i = 1; i < n; i++)
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

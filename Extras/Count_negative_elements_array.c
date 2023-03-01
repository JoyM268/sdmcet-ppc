/* Program to count negative elements in array */
#include<stdio.h>

main()
{
  int n,count = 0;
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  int arr[n];
  printf("Enter the %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  for(int i = 0; i < n; i++)
  {
    if(arr[i] < 0)
    {
      count++;
    }
    else
    {
      continue;
    }
  }
  printf("The count of negative elements in the array is: %i",count);
}
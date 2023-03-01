/* Program count total duplicate elements in array */
#include<stdio.h>
#define SIZE 50
main()
{
  int count = 0,n,arr[SIZE];
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  for(int i = 0; i < n; i++)
  {
    for(int j = i + 1; j < n; j++)
    {
      if(arr[i] == arr[j])
      {
        count ++;
        break;
      }
    }
  }
  printf("The total duplicates in the array: %i",count);
}
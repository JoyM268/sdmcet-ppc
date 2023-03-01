/* Program to find second largest number in array */
#include<stdio.h>

main() 
{
  int n, largest, slargest, i;
  printf("Enter the number of elements: ");
  scanf("%i", &n);
  int arr[n];
  printf("Enter %i elements:\n", n);
  for (i = 0; i < n; i++) 
  {
    scanf("%i", &arr[i]);
  }
  largest = arr[0];
  for (i = 1; i < n; i++) 
  {
    if (arr[i] > largest) 
    {
      largest = arr[i];
    }
  }
  slargest = arr[0];
  i = 1;
  while(slargest == largest)
  {
    slargest = arr[i];
    i++;
  }
  for (i = 0; i < n; i++) 
  {
    if(arr[i] < largest && arr[i] > slargest)
    {
      slargest =  arr[i];
    }
  }
  printf("The second largest element of the array is: %i", slargest);
}

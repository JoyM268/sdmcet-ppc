/* Linear Search */
#include<stdio.h>

main()
{
  int n, found = 0,key,i;
  printf("Enter number of elements: ");
  scanf("%i",&n);
  int arr[n];
  printf("Enter %i elements:\n",n);
  for(i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  printf("Enter the key element: ");
  scanf("%i",&key);
  for(i = 0; i < n; i++)
  {
    if(arr[i] == key)
    {
      found = 1;
      break;
    }
  }
  if(found == 1)
  {
    printf("%i found at position %i\n",key,i);
  }
  else
  {
    printf("%i not found\n",key);
  }
}
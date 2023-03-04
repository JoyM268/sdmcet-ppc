/* Program to insert an element in array */
/* Method 3 */
#include<stdio.h>
#define SIZE 50
main()
{
  int arr[SIZE],n,ele,index,temp;
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  printf("Enter the element: ");
  scanf("%i",&ele);
  printf("Enter the index: ");
  scanf("%i",&index);
  arr[n] = ele;
  for(int i = n; i > index; i--)
  {
    temp = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = temp;
  }
  n++;
  printf("Array after insertion: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
}
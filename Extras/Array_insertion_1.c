/* Program to insert an element in array */
/* Method 1 */
#include<stdio.h>
#define SIZE 100

main()
{
  int n,arr[SIZE],ele,index;
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
  printf("Enter the element to be inserted: ");
  scanf("%i",&ele);
  printf("Enter the index: ");
  scanf("%i",&index);
  printf("Array before insetion: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
  printf("\n");
  for(int i = n - 1; i >= index; i--)
  {
    arr[i+1] = arr[i];
  }
  arr[index] = ele;
  n++;
  printf("Array after insetion: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i ",arr[i]);
  }
  printf("\n");
}
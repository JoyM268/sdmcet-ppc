/* Program to declare and intialize a array of size n and
print all those elements */
/* Method 1 */
#include<stdio.h>

main()
{
  int a[10],size;
  printf("Enter the number of elements:");
  scanf("%i",&size);
  printf("Enter the elements:");
  for(int i = 0; i < size; i++)
  {
    scanf("%i",&a[i]);
  }
  printf("The elements in the array are: ");
  for(int i = 0; i < size; i++)
  {
    printf("%i\t",a[i]);
  }
}
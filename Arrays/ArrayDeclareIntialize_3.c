/* Program to declare and intialize a array of size n and
print all those elements */
/* Method 3 */
#include<stdio.h>
#define SIZE 50

main()
{
  int a[SIZE],n;
  printf("Enter the number of elements:");
  scanf("%i",&n);
  printf("Enter the elements:\n");
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&a[i]);
  }
  printf("The elements in the array are: ");
  for(int i = 0; i < n; i++)
  {
    printf("%i\t",a[i]);
  }
}
/* Program to read n elements and print count of all 
those elements that are factors of 3, implement this 
when the number entered is a positive number, if n 
value entered is a negative number go back and read the 
n value again until positive number is entered */
/* Method 2 */
#include <stdio.h>

main()
{
  int n,count = 0;
  do
  {
    printf("Enter the number of elements: ");
    scanf("%i",&n);
  } while(n <= 0);
  int arr[n];
  printf("Enter %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
    if(arr[i]%3 == 0)
    {
      count++;
    }
  }
  printf("The count of elements that are factors of 3 is %i\n",count);
}
/* Program to find the count of all the elements that are
 prime numbers in a given set of elements */
#include<stdio.h>
#include<math.h>

main()
{
  int n, count = 0, prime;
  printf("Enter the number of elements: ");
  scanf("%i",&n);
  int arr[n];
  for(int i = 0; i < n; i++)
  {
    printf("Enter element %i: ",i);
    scanf("%i",&arr[i]);
    prime = 1;
    for(int j = 2; j <= sqrt(arr[i]); j++)
    {
      if(arr[i] % j == 0)
      {
        prime = 0;
        break;
      }
    }
    if(arr[i] <= 1)
    {
      prime = 0;
    }
    if(prime == 1)
    {
      count ++;
    }
    else
    {
      continue;
    }
  }
  printf("The count of elements that are prime is %i\n",count);
}
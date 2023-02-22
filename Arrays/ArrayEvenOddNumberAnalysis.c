/* Program to read n different array elements, find
 occurance of all even and odd numbers, print the sum and
 count of all those even and odd numbers seperately also 
 print every even and odd number with its position */
#include <stdio.h>

main() 
{
    int n, i, count_even = 0, sum_even = 0, count_odd = 0, sum_odd = 0;
    printf("Enter the number of elements: ");
    scanf("%i", &n);
    int arr[n];
    for (i = 0; i < n; i++) 
    {
        printf("Enter the element %i: ",i);
        scanf("%i", &arr[i]);
    }
    for (i =0; i < n; i++)
    {
      if (arr[i] % 2 == 0) 
        {
            count_even++;
            sum_even += arr[i];
            printf("Even number %i found at position %i\n", arr[i], i);
        }
    }
    for (i =0; i < n; i++)
    {
      if (arr[i] % 2 != 0) 
        {
            count_odd++;
            sum_odd += arr[i];
            printf("Odd number %i found at position %i\n", arr[i], i);
        }
    }
    printf("Count of even numbers: %i\n", count_even);
    printf("Sum of even numbers: %i\n", sum_even);
    printf("Count of odd numbers: %i\n", count_odd);
    printf("Sum of odd numbers: %i\n", sum_odd);
}

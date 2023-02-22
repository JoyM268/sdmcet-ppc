/* Program to read n different array elements, find
 occurance of all odd numbers, print the sum and count
 of all those odd numbers also print every odd number
 with its position */
#include <stdio.h>

main() 
{
    int n, i, count = 0, sum = 0;
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
      if (arr[i] % 2 != 0) 
        {
            count++;
            sum += arr[i];
            printf("Odd number %i found at position %i\n", arr[i], i);
        }
    }
    printf("Count of odd numbers: %i\n", count);
    printf("Sum of odd numbers: %i\n", sum);
}

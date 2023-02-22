/* Program to read n different array elements, find
 occurance of all even numbers, print the sum and count
 of all those even numbers also print every even number
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
      if (arr[i] % 2 == 0) 
        {
            count++;
            sum += arr[i];
            printf("Even number %i found at position %i\n", arr[i], i);
        }
    }
    printf("Count of even numbers: %i\n", count);
    printf("Sum of even numbers: %i\n", sum);
}

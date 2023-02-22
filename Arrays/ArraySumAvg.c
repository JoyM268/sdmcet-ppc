/* Program to read n different array elements, print the
 sum and average of all the elements */
#include <stdio.h>

main() 
{
    int n, i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%i", &n);
    int arr[n];
    for (i = 0; i < n; i++) 
    {
        printf("Enter the element %i:",i);
        scanf("%i", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %i\n", sum);
    printf("Average = %.2f\n", (float)sum/n);
}

/* Write a C program to find copy one array into another 
array and print both the arrays */
#include <stdio.h>
#define SIZE 50
main() 
{
    int arr1[SIZE], arr2[SIZE], i, n;
    printf("Enter the number of elements: ");
    scanf("%i",&n);
    printf("Enter %i elements: ",n);
    for (i = 0; i < n; i++) 
    {
        scanf("%i",&arr1[i]);
    }
    for (i = 0; i < n; i++) 
    {
        arr2[i] = arr1[i];
    }

    printf("Original Array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%i ", arr1[i]);
    }
    printf("\n");
    printf("Copied Array: ");
    for (i = 0; i < n; i++) 
    {
        printf("%i ", arr2[i]);
    }
    printf("\n");
}

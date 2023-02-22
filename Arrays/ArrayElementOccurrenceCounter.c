/* Program to find number of occurrences of a given key
element in a array of n elements */
#include <stdio.h>

main() 
{
    int n, key, count = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%i", &n);
    int arr[n];
    printf("Enter the key element to search for: ");
    scanf("%i", &key);
    for (int i = 0; i < n; i++) 
    {   printf("Enter the element %i: ",i);
        scanf("%i", &arr[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            count++;
        }
    }
    printf("The number of occurrences of %i in the array is %i\n", key, count);
}

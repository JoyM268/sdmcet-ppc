/* Write a C program to search an element from list of 
‘n’ array elements using binary
search technique */
#include<stdio.h>
#define SIZE 50

main()
{
    int n, key, arr[SIZE], i, found = 0;
    printf("Enter the number of elements: ");
    scanf("%i", &n);
    printf("Enter %i elements: ",n);
    for(i = 0; i < n; i++)
    {
        scanf("%i",&arr[i]);
    }
    printf("Enter the key element: ");
    scanf("%i",&key);
    int low = 0, high = n-1, mid;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(arr[mid] == key)
        {
            found = 1;
            break;
        }
        else if(arr[mid] > key)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if(found == 1)
    {
        printf("%i found at position %i\n", key, mid);
    }
    else
    {
        printf("%i not found\n", key);
    }
}

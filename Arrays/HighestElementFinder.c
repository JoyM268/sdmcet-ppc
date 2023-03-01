/* Program to find the highest element in the given list
of elements with position */
#include <stdio.h>

main() 
{
    int n, max,pos;
    printf("Enter the number of elements: ");
    scanf("%i", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%i", &arr[i]);
    }
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max) 
        {
            max = arr[i];
            pos = i;
        }
    }
    printf("The highest element in the array is %i\n", max);
    printf(" The position of the highest element is %i\n",pos);
}

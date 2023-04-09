/* Write a modular C Program to search an element of an 
unsorted array using Linear Search Technique.
use read() - To read elements of an array
use search() - Search an element of the array using Linear
Search Technique
use display() - Display the status of the search */
#include <stdio.h>
#define SIZE 50

void read(int arr[], int size);
int search(int arr[], int size, int key);
void display(int index, int key);

int main() 
{
    int arr[SIZE], size, key, index;
    printf("Enter the size of the array: ");
    scanf("%i", &size);
    read(arr, size);
    printf("Enter the element to search: ");
    scanf("%i", &key);
    index = search(arr, size, key);
    display(index, key);
}

void read(int arr[], int size) 
{
    int i;
    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) 
    {
        scanf("%i", &arr[i]);
    }
}

int search(int arr[], int size, int key) 
{
    int i;
    for (i = 0; i < size; i++) 
    {
        if (arr[i] == key) 
        {
            return i;
        }
    }
    return -1;
}

void display(int index, int key) 
{
    if (index == -1) 
    {
        printf("Element %i not found in the array.\n", key);
    } 
    else 
    {
        printf("Element %i found at index %i in the array.\n", key, index);
    }
}

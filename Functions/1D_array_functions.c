/* Modular C program to perform following operation
1. Read two different integer array
2. Print both of them on the console along with the 
   indices of each element in each array
3. Find the sum of all the elements which are present in
   even positions in each of the array
*/
#include<stdio.h>
#define SIZE 50

void read_arr(int, int[]);
void print_arr(int, int[]);
int even_sum(int, int[]);
main()
{
  int m,n,arr1[SIZE],arr2[SIZE];
  printf("Enter the size of array 1: ");
  scanf("%i",&m);
  read_arr(m,arr1);
  printf("Enter the size of array 2: ");
  scanf("%i",&n);
  read_arr(n,arr2);
  print_arr(m,arr1);
  print_arr(n,arr2);
  printf("Sum of even position elements in array 1: %i\n",even_sum(m,arr1));
  printf("Sum of even position elements in array 2: %i\n",even_sum(n,arr2));
}
void read_arr(int n, int arr[])
{
  printf("Enter the %i elements:\n",n);
  for(int i = 0; i < n; i++)
  {
    scanf("%i",&arr[i]);
  }
}
void print_arr(int n, int arr[])
{
  printf("Elements of array are:\n");
  for(int i = 0; i < n; i++)
  {
    printf("The %i element = %i\n",i,arr[i]);
  }
}
int even_sum(int n, int arr[])
{
  int sum = 0;
  for(int i = 0; i < n; i+=2)
  {
    sum += arr[i];
  }
  return sum;
}

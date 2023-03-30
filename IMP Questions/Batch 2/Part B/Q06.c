/* Write a C program that computes the mean, variance and
standard deviation of n
elements in an array */
#include <stdio.h>
#include <math.h>
#define SIZE 50
main() 
{
   int n, i,arr[SIZE];
   float sum = 0, mean, variance, std_dev;
   printf("Enter the number of elements: ");
   scanf("%i", &n);
   printf("Enter %i elements:\n", n);
   for (i = 0; i < n; i++) 
   {
      scanf("%i", &arr[i]);
      sum += arr[i];
   }
   mean = sum / n;
   sum = 0;
   for(i = 0; i < n; i++) 
   {
      sum += pow(arr[i] - mean, 2);
   }
   variance = sum / n;
   std_dev = sqrt(variance);

   printf("Mean = %f\n", mean);
   printf("Variance = %f\n", variance);
   printf("Standard deviation = %f\n", std_dev);
}

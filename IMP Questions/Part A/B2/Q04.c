/* Write a C program to print the value of following sum:
Sum = 1 + 3 + 5 + .... */
#include <stdio.h>

main() 
{
   int n, i, sum = 0;
   printf("Enter the limit: ");
   scanf("%i", &n);
   for (i = 1; i <= n; i += 2) 
   {
      sum += i;
   }
   printf("Sum = %i\n",sum);
}

/* Program to print the individual digits of a given
 number */
 /* Method 2 */
#include <stdio.h>

main() 
{
   int num, digit, i = 0;
   int digits[10];
   printf("Enter a number: ");
   scanf("%i", &num);
   while (num > 0) 
   {
      digit = num % 10;
      digits[i] = digit;
      i++;
      num = num / 10;
   }
   printf("Individual digits:\n");
   for (int j = i-1; j >= 0; j--) 
   {
      printf("%i\n", digits[j]);
   }
}

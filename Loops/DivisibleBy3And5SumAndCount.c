/* Program to print the sum and the count of all the
 numbers that are divisible by both 3 and 5 and range
 starts from n1 and goes up to n2 */
#include<stdio.h>

main() 
{
  int n1, n2, i, sum = 0, count = 0;

  printf("Enter the range (n1 and n2): ");
  scanf("%d%d", &n1, &n2);

  for (i = n1; i <= n2; i++) 
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      sum += i;
      count++;
    }
  }

  printf("Sum of numbers divisible by 3 and 5: %d\n", sum);
  printf("Count of numbers divisible by 3 and 5: %d\n", count);
}

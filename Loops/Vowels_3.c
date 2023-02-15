/* Program to find the total number of occurrences of vowels
in reading alphabets from keyboard from the end user n 
number of times */
/* Do While Loop */
#include <stdio.h>

main() 
{
  int n, count = 0, i = 1;
  char ch;

  printf("Enter the number of inputs: ");
  scanf("%i", &n);

  do 
  {
    printf("Enter the character: ");
    scanf(" %c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'E') 
    {
      count++;
    }

    i++;
  } 
  while (i <= n);

  printf("The number of occurrences of vowels is: %i\n", count);
}

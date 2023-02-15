/* Program to find the total number of occurrences of vowels
in reading alphabets from keyboard from the end user n 
number of times */
/* For Loop */
#include<stdio.h>

main()
{
  int n,count=0;
  char ch;
  printf("Enter the number of inputs: ");
  scanf("%i",&n);
  for(int i = 1; i <= n; i++)
  {
    printf("Enter the character: ");
    scanf(" %c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'E')
    {
      count ++;
    }
    else
    {
      continue;
    }
  }
  printf("The number of occurrences of vowels is: %i\n",count);
}
/* Program to count the number of vowels in a string */
#include<stdio.h>
#define SIZE 50
main()
{
  char str[SIZE],i,count = 0;
  puts("Enter the input string: ");
  gets(str);
  for(i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'E') 
    {
      count++;
    }
  }
  printf("Count of vowels in the string: %i\n",count);
}
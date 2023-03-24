/* Write a C Program to convert alphabets in a string 
from lowercase to uppercase andvice-versa, without 
using built-in string handling functions. Print both 
the originalstring and the modified string */
#include<stdio.h>
#define SIZE 50

main()
{
  char str[SIZE],org[SIZE],i;
  puts("Enter input string: ");
  gets(str);
  for(i = 0; str[i] != '\0'; i++)
  {
    org[i] = str[i];
  }
  for(i = 0; str[i] != '\0'; i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z')
    {
      str[i] -= 32;
    }
    else if(str[i] >= 'A' && str[i] <= 'Z')
    {
      str[i] += 32;
    }
  }
  printf("Originsl String: %s\n",org);
  printf("Modified String: %s\n",str);
}
  
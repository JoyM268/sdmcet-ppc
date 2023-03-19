/* Program compare two strings */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 50

main()
{
  char str1[SIZE], str2[SIZE], i;
  puts("Enter input string 1: ");
  gets(str1);
  puts("Enter input string 2: ");
  gets(str2);
  if(strlen(str1) != strlen(str2))
  {
    puts("The strings are not equal\n");
    exit(0);
  }
  int flag = 1;
  for(i = 0; str1[i] != '\0'; i++)
  {
    if(str1[i] != str2[i])
    {
      flag = 0;
      break;
    }
  }
  if(flag == 1)
  {
    puts("The strings are equal\n");
  }
  else
  {
    puts("The strings are not equal\n");
  }
}
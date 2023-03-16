/* Program to print a string in reverse order */
#include<stdio.h>
#include<string.h>
#define SIZE 50

main()
{
  char str[SIZE],len;
  printf("Enter a string: ");
  gets(str);
  len = strlen(str);
  printf("The reverse of the string is: ");
  for(int i = len; i >= 0; i--)
  {
     printf("%c",str[i]);
  }
}
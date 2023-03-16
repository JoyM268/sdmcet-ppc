/* Program to read a string and print its length along 
with the string */
#include<stdio.h>
#define SIZE 50
main()
{
  char str[SIZE];
  puts("Enter an input string: ");
  gets(str);
  int i;
  for(i = 0; str[i] != '\0'; i++);
  printf("The length of string %s is %i\n",str,i);
}
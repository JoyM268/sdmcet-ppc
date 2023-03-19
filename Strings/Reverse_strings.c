/* Program to reverse a string */
#include<stdio.h>
#include<string.h>
#define SIZE 50

main()
{
  char str1[SIZE],str2[SIZE],i;
  printf("Enter input string: ");
  scanf("%s",str1);
  int len = strlen(str1);
  int j = 0;
  for(i = len - 1; i >= 0; i--)
  {
    str2[j++] = str1[i];
  }
  str2[j] = '\0';
  printf("Reversed string: %s",str2);
}
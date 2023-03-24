/* Write a C program to check whether a string is 
palindrome or not, without usingbuilt-in string 
handling functions.*/
#include<stdio.h>
#include<string.h>
#define SIZE 50

main()
{
  char str1[SIZE],str2[SIZE],i;
  printf("Enter input strings: ");
  scanf("%s",str1);
  int len = strlen(str1);
  int j = 0;
  for(i = len - 1; i >= 0; i--)
  {
    str2[j++] = str1[i];
  }
  str2[j] = '\0';
  int flag = 1;
  for(i = 0; i < len; i++)
  {
    if(str1[i] != str2[i])
    {
      flag = 0;
      break;
    }
  }
  if(flag == 1)
  {
    printf("It is a palindrome\n");
  }
  else
  {
    printf("It is not a palindrome\n");
  }
}
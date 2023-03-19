/* Program to check if a string is a palindrome or not */
/* Method 2 */
#include<stdio.h>
#include<string.h>
#define SIZE 50

main()
{
  char str1[SIZE],str2[SIZE],i;
  puts("Enter input strings: ");
  gets(str1);
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
    puts("It is a palindrome\n");
  }
  else
  {
    puts("It is not a palindrome\n");
  }
}
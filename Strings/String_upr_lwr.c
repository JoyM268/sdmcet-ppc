/* Program that reads two different strings prints the 
first string all in capital letters and secondary string 
in lower case */
#include<stdio.h>
#define SIZE 50
main()
{
  char str1[SIZE],str2[SIZE];
  puts("Enter string 1: ");
  gets(str1);
  puts("Enter string 2: ");
  gets(str2);
  int i;
  for(i = 0; str1[i] != '\0'; i++)
  {
    if(str1[i] >= 'a' && str1[i] <= 'z')
    {
      str1[i] -= 32;
    }
  }
  for(i = 0; str2[i] != '\0'; i++)
  {
    if(str2[i] >= 'A' && str2[i] <= 'Z')
    {
      str2[i] += 32;
    }
  }
  printf("String 1 in uppercase: %s\n",str1);
  printf("String 2 in lowercase: %s\n",str2);
}
  
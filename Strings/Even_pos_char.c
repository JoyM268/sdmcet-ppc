/* Program to read a string copy only even position 
character into another string */
#include<stdio.h>
#define SIZE 50

main()
{
  char str1[SIZE],str2[SIZE];
  puts("Enter a input string: ");
  gets(str1);
  int i;
  int j = 0;
  for(i = 0; str1[i] != 0; i += 2)
  {
    str2[j++] = str1[i];
  }
  printf("String 1: %s\n",str1);
  printf("String 2: %s\n",str2);
}

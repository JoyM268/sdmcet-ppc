/* Program to concatenate two strings */
#include<stdio.h>
#define SIZE 40

main()
{
  char str1[SIZE],str2[SIZE],str3[2*SIZE],i;
  printf("Enter two input strings: ");
  scanf("%s %s",str1,str2);
  int j = 0;
  for(i = 0; str1[i] != '\0'; i++)
  {
    str3[j++] = str1[i];
  }
  str3[j++] = ' ';
  for(i = 0; str2[i] != '\0'; i++)
  {
    str3[j++] = str2[i];
  }
  str3[j] = '\0';
  printf("Concatenated string: %s",str3);
}

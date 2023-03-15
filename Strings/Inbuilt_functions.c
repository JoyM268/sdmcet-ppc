/* Program to demonstrate inbuilt functions used for 
string manipulation */
#include<stdio.h>
#include<string.h>
#define SIZE 50
main()
{
  char s1[SIZE],s2[SIZE],s3[2*SIZE];
  printf("Enter string 1: ");
  gets(s1);
  printf("Enter string 2: ");
  gets(s2);
  int len1 = strlen(s1);
  int len2 = strlen(s2);
  printf("\n");
  printf("The size of string 1: %i\n",len1);
  printf("The size of string 2: %i\n",len2);
  printf("\n");
  if(strcmp(s1,s2) == 0)
  {
    printf("The strings are same\n");
  }
  else
  {
    printf("The strings are different\n");
  }
  printf("\n");
  strcpy(s3,s1);
  printf("Original string: %s\n",s1);
  printf("Copied string: %s\n",s3);
  printf("\n");
  strcat(s3,s2);
  printf("Concatenated string: %s\n",s3);
  printf("\n");
  printf("String 1: %s\nString 2: %s\nString 3: %s\n",s1,s2,s3);
}
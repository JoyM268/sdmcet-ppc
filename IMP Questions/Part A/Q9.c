/* Write a C program to show the use of the following 
built-in functions in strings:
i. strcat     ii. strcpy     iii. strcmp */
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
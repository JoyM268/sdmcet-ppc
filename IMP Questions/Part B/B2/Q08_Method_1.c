/* Write a C program to read 2 strings, compare both of 
them. If both are unequal then concatenate the 1st string 
with the 2nd and print the resultant string; if equal 
print the success message along with the length of the 
strings. */
/* Method 1 */
#include<stdio.h>
#include<string.h>
#define SIZE 50

main() 
{
  char str1[SIZE],str2[SIZE];
  printf("Enter input string 1: ");
  scanf("%[^\n]",str1);
  getchar();
  printf("Enter input string 2: ");
  scanf("%[^\n]",str2);
  if(strcmp(str1,str2) == 0)
  {
    int len = strlen(str1);
    printf("Both the strings are equal with a string lenght of %i\n",len);
  }
  else
  {
    strcat(str1,str2);
    printf("Resultant string: %s\n",str1);
  }
}
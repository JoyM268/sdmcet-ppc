/* Write a C program to read 2 strings, compare both of 
them. If both are unequal then concatenate the 1st string 
with the 2nd and print the resultant string; if equal 
print the success message along with the length of the 
strings. */
/* Method 1 */

#include<stdio.h>
#define SIZE 50

int compare(char[],char[]);
main() 
{
  char str1[SIZE],str2[SIZE];
  printf("Enter input string 1: ");
  scanf("%[^\n]",str1);
  getchar();
  printf("Enter input string 2: ");
  scanf("%[^\n]",str2);
  if(compare(str1,str2) == 0)
  {
    int len;
    for(len = 0; str1[len] != '\0'; len++);
    printf("Both the strings are equal\n");
    printf("The lenght of the string is %i\n",len);
  }
  else
  {
    int i,j = 0;
    char str3[2*SIZE];
    for(i = 0; str1[i] != '\0'; i++)
    {
      str3[j++] = str1[i];
    }
    for(i = 0; str2[i] != '\0'; i++)
    {
      str3[j++] = str2[i];
    }
    str3[j] = '\0';
    printf("Resultant string: %s\n",str3);
  }
}
int compare(char str1[SIZE],char str2[SIZE])
{
  int i;
  int len1,len2;
  for(len1 = 0; str1[len1] != '\0'; len1++);
  for(len2 = 0; str2[len2] != '\0'; len2++);
  if(len1 != len2)
  {
    return 1;
  }
  else
  {
    for(i = 0; str1[i] != '\0'; i++)
    {
      if(str1[i] != str2[i])
      {
        return 1;
      }
    }
  }
  return 0;
}

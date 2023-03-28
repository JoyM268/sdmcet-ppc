/* Write a C program to read 2 strings, compare both of 
them. If both are unequal then concatenate the 1st string 
with the 2nd and print the resultant string; if equal 
print the success message along with the length of the 
strings. */
/* Method 2 */
#include<stdio.h>
#define SIZE 50

int compare(char[],char[]);
main() 
{
  char str1[SIZE],str2[SIZE],str3[2*SIZE],len;
  printf("Enter input string 1: ");
  scanf("%[^\n]",str1);
  getchar();
  printf("Enter input string 2: ");
  scanf("%[^\n]",str2);
  if(compare(str1,str2) == 0)
  {
    for(len = 0; str1[len] != '\0'; len++);
    printf("Both the strings are equal with a string lenght of %i\n",len);
  }
  else
  {
    int i,j = 0;
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
    printf("Resultant string: %s\n",str3);
  }
}
int compare(char str1[SIZE],char str2[SIZE])
{
  int i;
  if(strlen(str1) != strlen(str2))
  {
    return 1;
  }
  int flag = 1;
  for(i = 0; str1[i] != '\0'; i++)
  {
    if(str1[i] != str2[i])
    {
      flag = 0;
      break;
    }
  }
  if(flag == 1)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

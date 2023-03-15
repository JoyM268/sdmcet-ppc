/* program to separate individual characters from a string•
*/
#include<stdio.h>
#include<string.h>
#define SIZE 50

main()
{
  int len;
  char s[SIZE];
  printf("Enter a String: ");
  gets(s);
  len = strlen(s);
  printf("The characters in the string are:\n");
  for(int i = 0; i < len; i++)
  {
    printf("%c\n",s[i]);
  }
}
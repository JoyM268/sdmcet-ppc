/* C Program to read a character from keyboard and print
the character along with its ASCII value */
#include<stdio.h>

main()
{
  char c;
  printf("Enter a character: ");
  scanf("%c",&c);
  printf("The character is: %c\n",c);
  printf("The ASCII value is: %i\n",c);
}
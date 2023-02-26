/* Program to check vowel or consonant using switch case */
#include<stdio.h>

main()
{
  char ch;
  printf("Enter a alphabhet: ");
  scanf("%c",&ch);
  switch(ch)
  {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("Vowel\n");
      break;
    default:
      printf("Consonant\n");
  }
}
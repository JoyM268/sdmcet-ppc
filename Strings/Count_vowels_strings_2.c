/* Program to count the number of vowels in a string */
/* Method 2 */
#include<stdio.h>
#define SIZE 50
main()
{
  char str[SIZE];
  int i,count = 0;
  puts("Enter the input string: ");
  gets(str);
  for(i = 0; str[i] != '\0'; i++)
  {
    switch(str[i])
    {
      case 'a':
      case 'e':
      case 'i':
      case 'o':
      case 'u':
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'U':
        count++;
        break;
      default:
        break;
    }
  }
  printf("Count of vowels in the string: %i\n",count);
}
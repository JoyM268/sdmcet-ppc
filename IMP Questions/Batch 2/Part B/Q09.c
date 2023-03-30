/* Write a C program to find the number of lowercase, 
uppercase letters, digits and special characters. 
Implement this without using any built-in string handling 
functions. Print all the counts along with the input 
string. */
#include<stdio.h>
#define SIZE 50

main()
{
  char str[SIZE];
  int i,count_lwr,count_upr,count_digit,count_special;
  count_lwr = count_upr = count_digit = count_special = 0;
  printf("Enter a input string: ");
  scanf("%[^\n]",str);
  for(i = 0; str[i] != '\0'; i++)
  {
    if(str[i] >= 'a' && str[i] <= 'z')
    {
      count_lwr++;
    }
    else if(str[i] >= 'A' && str[i] <= 'Z')
    {
      count_upr++;
    }
    else if(str[i] >= '0' && str[i] <= '9')
    {
      count_digit++;
    }
    else
    {
      count_special++;
    }
  }
  printf("Number of lowercase letters: %i\n",count_lwr);
  printf("Number of uppercase letters: %i\n",count_upr);
  printf("Number of digits: %i\n",count_digit);
  printf("Number of special characters: %i\n",count_special);
}

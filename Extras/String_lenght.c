/* program to find the length of a string without using
 library functions */
#include<stdio.h>
#define SIZE 50

main()
{
   char s[SIZE];
   printf("Enter a string: ");
   gets(s);
   int i = 0;
   while(s[i] != '\0')
   {
     i++;
   }
   printf("The size of the string is %i\n",i);
}
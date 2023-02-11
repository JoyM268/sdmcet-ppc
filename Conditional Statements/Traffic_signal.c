/* Write a C Program to implement traffic signal by choice
 of colour using else if ladder */
#include<stdio.h>

main()
{
  char choice;
  printf("Enter colour: ");
  scanf("%c",&choice);
  if(choice=='R' || choice=='r')
  {
    printf("Red\n");
  }
  else if(choice=='Y' || choice=='y')
  {
    printf("Yellow\n");
  }
  else
  {
    printf("Green\n");
  }
}
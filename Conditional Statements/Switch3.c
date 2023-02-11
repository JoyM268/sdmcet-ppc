/* Write a C Program to implement traffic signal by choice
 of colour using switch */
#include<stdio.h>

main()
{
  char colour;
  printf("Enter the colour: ");
  scanf("%c",&colour);
  switch(colour)
  {
    case 'r':
    case 'R':
      printf("Red\n");
      break;
    case 'y':
    case 'Y':
      printf("Yellow\n");
      break;
    case 'g':
    case 'G':
      printf("Green\n");
      break;
    default:
      printf(" Invalid Colour\n");
      break;
  }
}
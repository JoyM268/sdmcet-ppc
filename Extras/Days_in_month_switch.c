/* program to print number of days in a month using switch
 case */
#include<stdio.h>

main()
{
  int month;
  printf("Enter the month number(1-12): ");
  scanf("%i",&month);
  switch(month)
  {
    case 1:
      printf("Total number of Days = 31\n");
      break;
    case 2:
      printf("Total number of Days = 28/29\n");
      break;
    case 3:
      printf("Total number of Days = 31\n");
      break;
    case 4:
      printf("Total number of Days = 30\n");
      break;
    case 5:
      printf("Total number of Days = 31\n");
      break;
    case 6:
      printf("Total number of Days = 30\n");
      break;
    case 7:
    case 8:
      printf("Total number of Days = 31\n");
      break;
    case 9:
      printf("Total number of Days = 30\n");
      break;
    case 10:
      printf("Total number of Days = 31\n");
      break;
    case 11:
      printf("Total number of Days = 30\n");
      break;
    case 12:
      printf("Total number of Days = 31\n");
      break;
    default:
      printf("Invalid Input\n");
  }
}

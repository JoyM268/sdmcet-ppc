#include <stdio.h>

//Compiler version gcc  6.3.0
main()
{
  int days, years, months, remaining;
  printf("Enter the number of days:");
  scanf("%i",&days);
  years= days/365;
  remaining= days - 365*years;
  months= remaining/30;
  remaining=remaining-months*30;
  printf("%i years, %i months, %i days",years,months,remaining);
 
}
/*program to convert the number of days into the number of years, number of months, 
and the number of the remaining days */
/* Method 2 */
#include <stdio.h>

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

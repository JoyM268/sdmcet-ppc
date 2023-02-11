/* C Program to calculate and print the total bill
generated for a consumer of electricity supply the billing
details are as given below

units consumed        rate applicable 
0-200.                80
>200 <400.            100+0.75 per unit above 200
>=400 <600.           180+0.85 per unit above 400
anything >=600.       250+1 per unit above 600
*/
#include<stdio.h>

main()
{
  int units,rate;
  printf("Enter the units consumed by the customer: ");
  scanf("%i",&units);
  if(units >=0 && units <= 200)
  {
    rate=80;
  }
  else if(units>200 && units<400)
  {
    units = units-200;
    rate = 100+0.75*units;
  }
  else if(units >= 400 && units <600)
  {
    units = units-400;
    rate = 180+0.85*units;
  }
  else
  {
    units = units-600;
    rate = 250+1*units;
  }
  printf("The amount due is: %i",rate);
}
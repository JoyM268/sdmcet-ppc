/* Program to find equivalent resistance when two
resistors are arranged in series and parallel */
#include <stdio.h>

main()
{
  float r1,r2,rp,rs;
  printf("Enter the resistance R1 and R2: ");
  scanf("%f %f",&r1,&r2);
  rs = r1+r2;
  rp=(r1*r2)/(r1+r2);
  printf("The series equivalent resistance is: %.2f\n",rs);
  printf("The parallel equivalent resistance is: %.2f\n",rp);
}
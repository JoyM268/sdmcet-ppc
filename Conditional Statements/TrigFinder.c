/* Program to print sine, cosine or tangent of a angle */
#include<stdio.h>
#include<math.h>
#define pi 3.142

main()
{
  float angle;
  char choice;
  printf("Enter the angle in degree: ");
  scanf("%f",&angle);
  angle=angle*pi/180;
  printf("Choice:\n");
  printf("s or S for sine\n");
  printf("c or C for cosine\n");
  printf("t or T for tangent\n");
  printf("Enter the choice: ");
  scanf(" %c",&choice);
  if(choice=='S' || choice == 's')
  {
    printf("Sin of the angle is: %f",sin(angle));
  }
  if(choice=='C' || choice == 'c')
  {
    printf("Cos of the angle is: %f",cos(angle));
  }
  if(choice=='T' || choice == 't')
  {
    printf("Tan of the angle is: %f",tan(angle));
  }
}
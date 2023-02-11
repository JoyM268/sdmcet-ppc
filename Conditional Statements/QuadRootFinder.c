/* Write a program to find the roots of the quadratic
 equation when coefficients are given */
#include<stdio.h>

main()
{
  int a,b,c;
  float disc,root1,root2,real,imaginary;
  printf("Enter the coefficients of the QE: ");
  scanf("%i %i %i",&a,&b,&c);
  disc=b*b-4*a*c;
  if(disc==0)
  {
    printf("Roots are equal and real\n");
    root1=root2=-b/(2*a);
    printf("Root1=Root2=%f\n",root1);
  }
  else if(disc>0)
  {
    printf("Roots are real and distinct\n");
    root1=(-b+sqrt(disc))/(2*a);
    root2=(-b-sqrt(disc))/(2*a);
    printf("Root1=%f\nRoot2=%f\n",root1,root2);
  }
  else
  {
    printf("Roots are imaginary\n");
    real =-b/(2*a);
    imaginary=sqrt(-1*disc)/(2*a);
    printf("Root1=%f+i%f\n",real,imaginary);
    printf("Root2=%f-i%f\n",real,imaginary);
  }
}
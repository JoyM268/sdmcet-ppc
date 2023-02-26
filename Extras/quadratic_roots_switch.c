/* Program to find all roots of a quadratic equation using
 switch case */
#include<stdio.h>
#include<math.h>

main()
{
  int disc,a,b,c;
  float root1,root2,real,imaginary;
  printf("Enter the coefficients of QE: ");
  scanf("%i %i %i",&a,&b,&c);
  disc = b*b - 4*a*c;
  switch(disc > 0)
  {
    case 1:
      printf("Roots are real and distinct\n");
      root1 = (-b + sqrt(disc))/(2*a);
      root2 = (-b - sqrt(disc))/(2*a);
      printf("Root 1 = %.2f\nRoot 2 = %.2f\n",root1,root2);
      break;
    case 0:
      switch(disc < 0)
      {
        case 1:
          printf("Roots are imaginary\n");
          real = -b/(2*a);
          imaginary = sqrt(-disc)/(2*a);
          printf("Root 1 = %.2f + %.2fi\n",real,imaginary);
          printf("Root 2 = %.2f - %.2fi\n",real,imaginary);
          break;
        case 0:
          printf("Roots are real and equal\n");
          root1 = root2 = -b/(2*a);
          printf("Root 1 = Root 2 = %.2f\n",root1);
          break;
      }
  }
}
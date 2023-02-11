/* C Program to read marks scored by a student in PPC
subject for 5 different tests conducted and find the
total marks scored and average */
#include<stdio.h>

main()
{
  int m1,m2,m3,m4,m5,sum;
  float avg;
  printf("Enter Marks 1: ");
  scanf("%i",&m1);
  printf("Enter Marks 2: ");
  scanf("%i",&m2);
  printf("Enter Marks 3: ");
  scanf("%i",&m3);
  printf("Enter Marks 4: ");
  scanf("%i",&m4);
  printf("Enter Marks 5: ");
  scanf("%i",&m5);
  sum=m1+m2+m3+m4+m5;
  avg=sum/5.0;
  printf("The total marks is: %i\n",sum);
  printf("The average of the marks is: %.2f\n",avg);
}
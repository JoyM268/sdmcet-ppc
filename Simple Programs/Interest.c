/* Program to find simple interest and compound interest */
#include<stdio.h>
#include<math.h>

main()
{
  float p,t,r,n,si,ci;
  printf("Enter the principle amount: ");
  scanf("%f",&p);
  printf("Enter the time period in years: ");
  scanf("%f",&t);
  printf("Enter the interest rate: ");
  scanf("%f",&r);
  printf("Enter the number of times interest compounded per year: ");
  scanf("%f",&n);
  si = (p*t*r)/100.0;
  ci = p*pow((1+(r/n)),n*t);
  printf("The simple interest is: %.2f\n",si);
  printf("The compound interest is: %.2f\n",ci);
}
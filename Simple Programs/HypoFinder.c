/* C Program to find the hypotenuse of a right angled 
triangle having the values of two sides */
#include<stdio.h>
#include<math.h>

main()
{
  float hyp,adj,opp;
  printf("Enter the two sides of the triangle: ");
  scanf("%f %f",&adj,&opp);
  hyp=sqrt(adj*adj + opp*opp);
  printf("The value of the hypotenuse is: %.2f\n",hyp);
}
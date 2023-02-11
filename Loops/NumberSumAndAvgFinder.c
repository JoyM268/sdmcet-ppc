/* Program to find sum and average of all the positive 
numbers entered from the keyboard */
#include<stdio.h>

main()
{
  int sum = 0,counter=0,n,num;
  float average;
  printf("Enter the number of inputs: ");
  scanf("%i",&n);
  for(int i=1; i<=n; i++)
  {
    printf("Enter the number: ");
    scanf("%i",&num);
    if(num>0)
    {
      sum=sum+num;  
      counter++;
    }
    else
    {
      continue;
    }
  }
  average = (float)sum/counter;
  printf("The sum of all the positive numbers entered is: %i\n",sum);
  printf("The average of all the positive numbers entered is: %.2f\n",average);
}
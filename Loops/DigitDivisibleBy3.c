/* Program to print count of all the digits that are 
divisible by 3 in a given integer number. Also check 
positivity of the number, if number is negative print
a error message */
#include<stdio.h>

main()
{
  int num,remainder,count = 0;
  printf("Enter the number: ");
  scanf("%i",&num);
  if(num > 0)
  {
    while(num > 0)
    {
      remainder = num % 10;
      if(remainder % 3 == 0)
      {
        count++ ;
      }
      num = num/10;
    }
    printf("The count of digits that are divisible by 3 is: %i\n",count);
  }
  else
  {
    printf("Error: The input can only be positive\n");
  }
}

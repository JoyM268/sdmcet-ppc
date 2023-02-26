/* Program to check positive, negative or zero using
 switch case */
#include<stdio.h>

main()
{
  int num;
  printf("Enter a number: ");
  scanf("%i",&num);
  switch(num > 0)
  {
    case 1:
      printf("%i is positive number\n",num);
      break;
    case 0:
      switch(num < 0)
      {
        case 1:
          printf("%i is a negative number\n",num);
          break;
        case 0:
          printf("The number is zero\n");
          break;
      }
      break;
  }
}
/* Simple Calculator using switch */
#include<stdio.h>

main()
{
  int a,b;
  char opr;
  printf("Enter two numbers: ");
  scanf("%i %i",&a,&b);
  printf(" Enter the operator: ");
  scanf(" %c",&opr);
  switch(opr)
  {
    case '+':
      printf("Sum = %i",a+b);
      break;
    case '-':
      printf("Difference = %i",a-b);
      break;
    case '*':
      printf("Product = %i",a*b);
      break;
    case '/':
      if(b != 0)
      {
        printf("Quotient = %i",a/b);
      }
      else
      {
        printf("Undefined");
      }
      break;
    default:
      printf("Invalid operator");
      break;
  }
}
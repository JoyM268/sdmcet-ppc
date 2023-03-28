/* Write a C program to implement a simple calculator
 involving +, -, * and / operations.Use ‘switch’ to 
 implement this. [NOTE: The program must report errors 
 for division by zero and illegal operator] */
#include<stdio.h>

main()
{
  int a,b;
  char opr;
  printf("Enter two numbers: ");
  scanf("%i %i",&a,&b);
  printf("Enter the operator: ");
  getchar();
  scanf("%c",&opr);
  switch(opr)
  {
    case '+':
      printf("Sum = %i\n",a+b);
      break;
    case '-':
      printf("Difference = %i\n",a-b);
      break;
    case '*':
      printf("Product = %i\n",a*b);
      break;
    case '/':
      if(b != 0)
      {
        printf("Quotient = %f\n",(float)a/b);
      }
      else
      {
        printf("Error: Division by 0\n");
      }
      break;
    default:
      printf("Invalid operator\n");
      break;
  }
}
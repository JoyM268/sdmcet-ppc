/* Simple Calculator using else if ladder */
#include<stdio.h>

main()
{
  int a,b;
  char opr;
  printf("Enter two numbers: ");
  scanf("%i %i",&a,&b);
  printf("Enter the operator: ");
  scanf(" %c",&opr);
  if(opr == '+')
  {
    printf("Sum = %i",a+b);
  }
  else if(opr == '-')
  {
    printf("Difference = %i",a-b);
  }
  else if(opr == '*')
  {
    printf("Product = %i",a*b);
  }
  else if(opr == '/')
  {
    if(b != 0)
    {
      printf("Quotient = %i",a/b);
    }
    else
    {
      printf("Undefined");
    }
  }
}
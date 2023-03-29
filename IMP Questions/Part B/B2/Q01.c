/* Write a C program to implement a simple calculator
 involving +, -, * and / operations.
Use ‘switch’ to 
 implement this. [NOTE: The program must report errors 
 for division by zero and illegal operator] */
#include<stdio.h>
#include<stdlib.h>

main()
{
    int a,b;
    char op;
    printf("Enter the two operands: ");
    scanf("%i %i",&a,&b);
    getchar();
    printf("Enter the operator(+,-,*,/): ");
    scanf("%c",&op);
    switch(op)
    {
        case '+':
            printf("%i + %i = %i\n",a,b,a+b);
            break;
        case '-':
            printf("%i - %i = %i\n",a,b,a-b);
            break;
        case '*':
            printf("%i x %i = %i\n",a,b,a*b);
            break;
        case '/':
            if(b == 0)
            {
                printf("Error: Dividing by 0\n");
                exit(0);
            }
            else
            {
                printf("%i / %i = %f\n",a,b,(float)a/b);
            }
            break;
        default:
            printf("Invalid operator\n");
    }
}

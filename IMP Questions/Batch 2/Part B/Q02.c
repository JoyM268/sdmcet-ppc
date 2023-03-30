/* Write a C program to check whether a given number is 
a prime number or not */
#include<stdio.h>
#include<math.h>

main()
{
    int i, num, prime = 1;
    printf("Enter a number: ");
    scanf("%i",&num);
    for(i = 2; i <= sqrt(num); i++)
    {
        if(num % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if(prime == 1)
    {
        printf("%i is a prime number\n",num);
    }
    else
    {
        printf("%i is not a prime number\n",num);
    }
}

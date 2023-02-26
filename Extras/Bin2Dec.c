/* Program to convert binary to decimal */
#include <stdio.h>
#include <math.h>

main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lli", &n);
    int decimal_num = 0, i = 0, remainder;
    int m = n;
    while (n != 0) 
    {
        remainder = n % 10;
        n /= 10;
        decimal_num += remainder * pow(2, i);
        ++i;
    }
    printf("Decimal equivalent of %lli is %i", m, decimal_num);
}

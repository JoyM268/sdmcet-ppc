#include <stdio.h>
#include <math.h>

int binary_to_decimal(long long n)
{
    int decimal_num = 0, i = 0, remainder;
    while (n != 0) 
    {
        remainder = n % 10;
        n /= 10;
        decimal_num += remainder * pow(2, i);
        ++i;
    }
    return decimal_num;
}

main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);

    printf("Decimal equivalent of %lld is %d", n, binary_to_decimal(n));
}

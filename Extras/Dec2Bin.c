/* Program to convert decimal number to binary */
#include <stdio.h>

main()
{
    int n,binary_num[1000];
    printf("Enter a decimal number: ");
    scanf("%i", &n);
    int i = 0;
    while (n > 0)
    {
        binary_num[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Binary equivalent of %i is ", n);
    for (int j = i - 1; j >= 0; j--)
        printf("%i", binary_num[j]);
}

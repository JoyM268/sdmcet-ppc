#include <stdio.h>

void decimal_to_binary(int n)
{
    int binary_num[1000];

    int i = 0;
    while (n > 0)
    {

        binary_num[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary_num[j]);
}

main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary equivalent of %d is ", n);
    decimal_to_binary(n);

}

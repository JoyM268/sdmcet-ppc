#include <stdio.h>

void decimal_to_binary(int n)
{
    // array to store binary number
    int binary_num[1000];

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binary_num[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary_num[j]);
}

int main()
{
    int n;
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("Binary equivalent of %d is ", n);
    decimal_to_binary(n);

    return 0;
}

/*Program to find the sum and average of all even and odd
 numbers between range n1 and n2 */
#include <stdio.h>

main()
{
    int n1, n2;
    int sum_even = 0, sum_odd = 0;
    int count_even = 0, count_odd = 0;
    float avg_even, avg_odd;

    printf("Enter the range n1 and n2: ");
    scanf("%d%d", &n1, &n2);

    for (int i = n1; i <= n2; i++)
    {
        if (i % 2 == 0)
        {
            sum_even += i;
            count_even++;
        }
        else
        {
            sum_odd += i;
            count_odd++;
        }
    }

    avg_even = (float)sum_even / count_even;
    avg_odd = (float)sum_odd / count_odd;

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Average of even numbers: %.2f\n", avg_even);
    printf("Sum of odd numbers: %d\n", sum_odd);
    printf("Average of odd numbers: %.2f\n", avg_odd);
}

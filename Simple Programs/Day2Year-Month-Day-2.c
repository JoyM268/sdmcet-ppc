#include <stdio.h>

int main() 
{
    int days, years, months, remaining_days;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    remaining_days = days % 365;
    months = remaining_days / 30;
    remaining_days = remaining_days % 30;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Days: %d\n", remaining_days);
}

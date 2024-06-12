//take the days value and find year, month and remaining days

#include <stdio.h>
int main()
{
    int days, year, month, rem_days;

    printf("Enter the number of Days = ");
    scanf("%d", &days);                         //days = 1002;

    year = days / 365;
    printf("The Year = %d \n", year);

    month = (days % 365) / 30;
    printf("The Month = %d\n", month);

    rem_days = (days % 365) - (month * 30);
    printf("The Remaining Days = %d\n", rem_days);

    return 0;
}

#include<stdio.h>
int main()
{
    int day;
    printf("Enter the day(1to7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Weidnessday");
        break;
    case 6:
        printf("Thrusday");
        break;
    case 7:
        printf("friday");
        break;
    
    default:
        printf("Invalid Number\n");
    }

}
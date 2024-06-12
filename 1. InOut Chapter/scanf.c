#include <stdio.h>
int main ( )
{
    int num1;
    float num2;
    printf ("Enter an integer and float number : ");
    scanf ("%d", &num1);
    scanf ("%f", &num2);
    printf ("The numbers are : %d %.3f\n", num1, num2);
    return 0;
}

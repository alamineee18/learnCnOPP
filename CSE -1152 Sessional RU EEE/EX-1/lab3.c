/*Equivalent Resistance if they are connected in series*/

#include <stdio.h>

int main ( )
{
    float R1, R2, Req;
    printf("Enter the value of R1: ");
    scanf("%f", &R1);

    printf("Enter the value of R2: ");
    scanf("%f", &R2);

    Req = R1 + R2;

    printf("The equivalent Resistance is : %0.2f", Req);

    return 0;
}

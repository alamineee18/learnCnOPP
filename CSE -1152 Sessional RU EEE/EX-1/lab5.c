//displays R according to Ohm's law

#include <stdio.h>

int main( )
{
    float R, I, V;
    printf("Enter the value of V: ");
    scanf("%f", &V);

    printf("Enter the value of I: ");
    scanf("%f", &I);

    R = V / I;

    printf("The value of R = %0.2f\n", R);

    return 0;


}


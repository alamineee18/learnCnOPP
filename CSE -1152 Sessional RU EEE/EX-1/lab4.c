//displays V according to Ohm's law

#include <stdio.h>

int main( )
{
    float R, I, V;
    printf("Enter the value of I: ");
    scanf("%f", &I);

    printf("Enter the value of R: ");
    scanf("%f", &R);

    V = I * R;

    printf("The value of V = %0.2f", V);

    return 0;


}

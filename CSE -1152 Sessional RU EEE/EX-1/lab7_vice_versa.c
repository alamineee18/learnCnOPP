// The program is Fahrenheit to Celsius

#include <stdio.h>
int main( )
{
    float farn, cels;

    printf("Enter The Fahrenheit value: ");
    scanf("%f", &farn);

    cels = 0.56* (farn - 32);

    printf("The Celsius value = %f", cels);

    return 0;
}

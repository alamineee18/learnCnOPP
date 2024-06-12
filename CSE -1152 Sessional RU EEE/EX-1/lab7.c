// The program is Celsius to Fahrenheit

#include <stdio.h>
int main( )
{
    float cels, farn;

    printf("Enter The Celsius value: ");
    scanf("%f", &cels);

    farn= 1.8 * cels + 32;

    printf("The Fahrenheit value = %f", farn);

    return 0;
}

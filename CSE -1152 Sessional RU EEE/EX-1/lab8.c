//find area and circumference of a circle

#include <stdio.h>
#define pi 3.1416
int main( )
{
    float radius, area, circumference;

    printf("Enter the value of circle Radius: ");
    scanf("%f", &radius);

    area = pi*radius*radius;

    printf("The Area = %f\n", area);

    circumference = 2*pi*radius;

    printf("The circumference = %f", circumference);

    return 0;

}

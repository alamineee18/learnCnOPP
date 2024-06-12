//calculate the equation y=x^n
#include<stdio.h>
#include<math.h>

int main()
{
    float x,y,n,a;

    printf("The Value of x:");
    scanf("%f",&x);

    printf("The Value of n:");
    scanf("%f",&n);

    y=pow(x,n);



    printf("Y=%0.2f\n",y);

    return 0;
}

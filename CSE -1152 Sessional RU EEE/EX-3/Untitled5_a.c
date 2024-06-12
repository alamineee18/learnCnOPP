//find the sum and average 1+2+3+... ...+n
#include<stdio.h>
int main()
{
    float a, n, sum, count=0, avg;

    printf("The Value of n:");
    scanf("%f",&n);

    sum=0;

    for(a=1;a<=n;a++){
        sum=sum+a;
        count = count+1;
    }

    printf("Sum =%0.2f\n",sum);

    avg=sum/count;

    printf("Average =%0.2f",avg);

    return 0;
}


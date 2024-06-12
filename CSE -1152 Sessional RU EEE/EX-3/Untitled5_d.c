//find the sum and average 1+4+7+.....+n

#include<stdio.h>
int main()
{
    float n, a, sum=0, count=0,avg;

    printf("The Value Of N: ");
    scanf("%f",&n);

    for(a=1; a<=n; a=a+3)
    {
        sum = sum + a;
        count = count + 1;
    }
    avg=sum/count;

    printf("THE SUM=%0.2f and avg %2.2f\n",sum,avg);
    return 0;
}



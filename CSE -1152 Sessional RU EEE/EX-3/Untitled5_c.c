//find the sum and average 1+3+5+7... ...+n
#include<stdio.h>
int main()
{
    int n , a, sum=0,count=0;
    float avg;

    printf("the value of N:");
    scanf("%d",&n);

    for (a=1; a<=n; a=a+2){
        sum=sum+a;
        count=count+1;
    }

    printf("THE SUM=%d\n",sum);

    avg=(sum/count);

    printf("Average=%0.2f",avg);

    return 0;
}


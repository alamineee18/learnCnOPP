//find the sum and average 2+4+6+8... ..+n
#include<stdio.h>
int main()
{
    int a, n, sum, count=0;
    float avg;

    printf("The value of n:");
    scanf("%d",&n);

    sum = 0;

    for(a=2 ; a<=n; a+=2){  //a=a+2; a+=2
        sum = sum+a;
        count = count+1;
    }

    printf("Sum =%d\n",sum);

    avg = sum/count;

    printf("Average =%0.2f",avg);

    return 0;
}


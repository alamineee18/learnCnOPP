//find the sum and average 4+12+20+28.....+n
#include<stdio.h>
int main()
{
    int n, a, sum=0,count=0;
    float avg;

    printf("n=");
    scanf("%d",&n);



    for(a=4; a<=n; a=a+8){
        sum=sum+a;
        count=count+1;
    }

    printf("The Sum = %d\n", sum);

    avg = sum / count;

    printf("The Average = %0.2f\n", avg);

    return 0;
}




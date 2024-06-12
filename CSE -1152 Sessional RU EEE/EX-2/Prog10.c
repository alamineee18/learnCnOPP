//Calculate customer charge
#include<stdio.h>
int main()
{
    float u, bill;
    printf("HOW MANY UNIT:");
    scanf("%f",&u);

    if(u<=200){
        bill=u*0.75;
        printf("YOUR BILL=%0.2f",bill);
    }

    else if(u<=400){
        bill=(0.50*u)+1000;
        printf("YOUR BILL=%0.2f",bill);
    }

    else if(u<=600){
        bill=(0.85*u)+1200;
        printf("YOUR BILL=%0.2f",bill);
    }

    else{
        bill=(1.00*u)+1400;
        printf("YOUR BILL=%0.2f",bill);
    }
    return 0;
}

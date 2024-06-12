#include<stdio.h>
int main()

{
    int a,b,c,d;
    float f;

    printf("Enter value of a:");
    scanf("%d",&a);

    printf("Enter value of b:");
    scanf("%d",&b);

    printf("Enter value of c:");
    scanf("%d",&c);

    printf("Enter value of d:");
    scanf("%d",&d);

    f=(a+b)/(c-d);

    if(c==d){
        printf("The ratio is invalid");
    }
    else{
        printf("The ratio is=%0.2f",f);
    }

    return 0;
}


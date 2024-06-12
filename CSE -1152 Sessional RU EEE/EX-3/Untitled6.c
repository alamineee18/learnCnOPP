/*read a positive integer and display its factorial */
#include<stdio.h>
int main()
{
    int n,a,f = 1;

    printf("Enter a number:");
    scanf("%d",&n);

    if(n<0){
        printf("Invalid");
    }
    else{
        for(a=1;a<=n;a++){

        f=f*a;

        }
    }

    printf("The factorial of %d is=%d",n,f);

    return 0;
}

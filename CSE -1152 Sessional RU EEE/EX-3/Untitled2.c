//Print a number n time
#include<stdio.h>
int main()
{
    int a,n, i;

    printf("Enter integer number you want to print: ");
    scanf("%d",&i);

    printf("How Many Times : ");
    scanf("%d",&n);

    for(a=1; a <= n; a++){

        printf("%d\n",i);

    }

    return 0;
}

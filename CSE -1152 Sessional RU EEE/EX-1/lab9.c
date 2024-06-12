//finds reminder without modulus operator

#include<stdio.h>

int main ( )
{
    int a, b, rem;

    printf("Enter the 1st number = ");
    scanf("%d", &a);    //a = 7;

    printf("Enter the 2nd  number = ");
    scanf("%d", &b);   //b = 3;

    rem = a - (a/b)*b;

    printf("The reminder is = %d", rem);


    return 0;
}

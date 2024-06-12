//display LCM (Lest common multiple).

#include <stdio.h>
int main()
{
    int a, b, i, gcd, lcm;

    printf("Enter an integers: ");
    scanf("%d",&a);

    printf("Enter another integers: ");
    scanf("%d",&b);

    for(i=1; i <= a && i <= b; ++i){
        if(a%i==0 && b%i==0)
        gcd = i;
    }

    lcm = (a*b)/gcd;
    printf("The LCM of two numbers %d and %d is %d.", a, b, lcm);

    return 0;
}

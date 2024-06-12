//WAP that read two number (n, r) and find nPr

#include<stdio.h>

int fact(int n)
{
    if (n <= 1)
    return 1;
    return n*fact(n-1);
}

int nPr(int n, int r)
{
    return fact(n)/fact(n-r);
}

int main()
{
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    if (n<r){
        printf("Math Error");
    }

    else {
        printf("%dP%d is %d", n, r, nPr(n, r));
    }

    return 0;
}

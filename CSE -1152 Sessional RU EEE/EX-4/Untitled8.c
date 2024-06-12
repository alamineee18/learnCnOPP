
#include <stdio.h>

int fact(int z){

    int f = 1, i;
    if (z == 0){
        return(f);
        }

    else{
        for (i = 1; i <= z; i++){
            f = f * i;
        }
    }
    return(f);
}

void main()
{
    int n, r, ncr;

    printf("Enter the value of n:");
    scanf("%d", &n);

    printf("\nEnter the value of r:");
    scanf("%d", &r);
     if (n<r){
        printf("Math Error");
    }
    else {
        ncr = fact(n) / (fact(r) * fact(n - r));
    printf("\n The value of nCr is: %d", ncr);

    }


}

//check a number odd or even
#include <stdio.h>
int main ( )
{
    int number;

    printf("Input a Number :");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number is even\n");
    }

    else {
        printf("The number is odd");
    }

    return 0;
}


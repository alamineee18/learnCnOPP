//check a number positive, negative and zero

#include <stdio.h>
int main ( )
{
    int number;

    printf("Input a Number :");
    scanf("%d", &number);

    if (number > 0) {
        printf("The number is positive\n");
    }

    else if(number < 0) {
        printf("The number is negative\n");
    }

    else {
        printf("The number is Zero\n");
    }

    return 0;
}


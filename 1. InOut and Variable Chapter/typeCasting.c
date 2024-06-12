//Type casting double to integer

#include <stdio.h>
int main()
{
    int n;
    double x;

    x = 10.56;
    n = (int) x;

    printf("value of n: %d\n", n);
    printf("Value of x: %lf\n", x);
    float y;
    int m = sizeof(y);
    printf("size float: %d\n", m);
    printf("size int: %d\n", sizeof(n));
    printf("size double: %d", sizeof(x));

    return 0;
}

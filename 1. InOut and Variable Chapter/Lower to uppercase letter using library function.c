#include <stdio.h>
int main ( )
{
    int lower, upper;

    printf ("Enter a lowercase letter : ");
    scanf ("%c", &lower);

    upper = toupper(lower);
    printf ("The uppercase letter = %c", upper);

    return 0;
}
